/*
 * XREFs of DpiCopyUnicodeString @ 0x1C015F61C
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C001EF84 (DpiGetDeviceRegistryPaths.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0160760 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int16 MaximumLength; // ax
  wchar_t *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = 0;
  if ( DestinationString && SourceString && (MaximumLength = SourceString->MaximumLength) != 0 && SourceString->Buffer )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, MaximumLength, 0x74727044u);
    DestinationString->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      DestinationString->MaximumLength = SourceString->MaximumLength;
      RtlCopyUnicodeString(DestinationString, SourceString);
    }
    else
    {
      v3 = -1073741801;
      v13 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v13 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v13);
    }
  }
  else
  {
    v3 = -1073741811;
    v14 = WdLogNewEntry5_WdError(DestinationString, SourceString, a3);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
  }
  return v3;
}
