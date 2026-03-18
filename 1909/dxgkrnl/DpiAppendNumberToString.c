/*
 * XREFs of DpiAppendNumberToString @ 0x1C015FAFC
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C015F260 (DpiPdoHandleQueryId.c)
 *     DpiGdoCreateGdiObjects @ 0x1C015F808 (DpiGdoCreateGdiObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C02B06D4 (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpiAppendNumberToString(PCWSTR SourceString, ULONG Value, PUNICODE_STRING Destination)
{
  wchar_t *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // edi
  SIZE_T v11; // rdx
  wchar_t *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_DWORD *)&String.Length = 1441792;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x74727044u);
  String.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, String.MaximumLength);
    v10 = RtlIntegerToUnicodeString(Value, 0xAu, &String);
    if ( v10 >= 0 )
    {
      v11 = (unsigned __int16)(String.MaximumLength + DestinationString.MaximumLength);
      Destination->MaximumLength = v11;
      Destination->Length = 0;
      v12 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u);
      Destination->Buffer = v12;
      if ( v12 )
      {
        memset(v12, 0, Destination->MaximumLength);
        RtlCopyUnicodeString(Destination, &DestinationString);
        RtlAppendUnicodeStringToString(Destination, &String);
      }
      else
      {
        v10 = -1073741801;
        v19 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v19 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v19);
      }
    }
    ExFreePoolWithTag(String.Buffer, 0x74727044u);
  }
  else
  {
    v10 = -1073741801;
    v18 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v18 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v18);
  }
  return (unsigned int)v10;
}
