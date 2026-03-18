/*
 * XREFs of DpiAppendStringToString @ 0x1C0160CFC
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C015F260 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0160760 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C001F1F0 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, unsigned __int16 *a2, PUNICODE_STRING UnicodeString)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int16 v12; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  NTSTATUS appended; // eax
  NTSTATUS v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v24);
  v10 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  v11 = RtlStringCbLengthW(a2, 0x208uLL, v23);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_8;
  v12 = LOWORD(v23[0]) + v24 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v10) = -1073741801;
    v21 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    *(_QWORD *)(v21 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v21);
LABEL_9:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)v10;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v12;
  memset(PoolWithTag, 0, v12);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v10 = appended;
  if ( appended < 0 || (v19 = RtlAppendUnicodeToString(UnicodeString, a2), v10 = v19, v19 < 0) )
  {
LABEL_8:
    v22 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v22 + 24) = v10;
    WdLogEvent5_WdError(v22);
    goto LABEL_9;
  }
  return (unsigned int)v10;
}
