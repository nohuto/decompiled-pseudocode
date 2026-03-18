/*
 * XREFs of DpiAppendStringToString @ 0x1C0147C38
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C014778C (DpiGdoSetupGdiParameters.c)
 *     DpiPdoHandleQueryId @ 0x1C02768B0 (DpiPdoHandleQueryId.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00020BC (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, unsigned __int16 *a2, PUNICODE_STRING UnicodeString)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int16 v10; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v12; // rcx
  NTSTATUS appended; // eax
  NTSTATUS v14; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v19);
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  v9 = RtlStringCbLengthW(a2, 0x208uLL, v18);
  v8 = v9;
  if ( v9 < 0 )
    goto LABEL_8;
  v10 = LOWORD(v18[0]) + v19 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v8) = -1073741801;
    v16 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v16 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v16);
LABEL_9:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)v8;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v10;
  memset(PoolWithTag, 0, v10);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v8 = appended;
  if ( appended < 0 || (v14 = RtlAppendUnicodeToString(UnicodeString, a2), v8 = v14, v14 < 0) )
  {
LABEL_8:
    v17 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v17 + 24) = v8;
    WdLogEvent5_WdError(v17);
    goto LABEL_9;
  }
  return (unsigned int)v8;
}
