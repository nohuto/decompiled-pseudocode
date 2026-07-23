/*
 * XREFs of LdrpLogMapAndVerifyResourceFileFailure @ 0x1800D1A74
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     _TlgKeywordOn @ 0x18004B5F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

char __fastcall LdrpLogMapAndVerifyResourceFileFailure(
        int a1,
        unsigned __int16 *a2,
        char a3,
        int a4,
        unsigned __int16 *a5)
{
  NTSTATUS v9; // eax
  const GUID *v10; // r8
  const GUID *v11; // r9
  char v13; // [rsp+38h] [rbp-61h] BYREF
  int v14; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v15; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  int *v17; // [rsp+68h] [rbp-31h]
  __int64 v18; // [rsp+70h] [rbp-29h]
  _DWORD *v19; // [rsp+78h] [rbp-21h]
  __int64 v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  _DWORD v22[2]; // [rsp+90h] [rbp-9h] BYREF
  char *v23; // [rsp+98h] [rbp-1h]
  __int64 v24; // [rsp+A0h] [rbp+7h]
  int *v25; // [rsp+A8h] [rbp+Fh]
  __int64 v26; // [rsp+B0h] [rbp+17h]
  _DWORD *v27; // [rsp+B8h] [rbp+1Fh]
  __int64 v28; // [rsp+C0h] [rbp+27h]
  __int64 v29; // [rsp+C8h] [rbp+2Fh]
  _DWORD v30[2]; // [rsp+D0h] [rbp+37h] BYREF

  v9 = RtlRunOnceExecuteOnce(
         &stru_180166100,
         (PRTL_RUN_ONCE_INIT_FN)LdrpResReportResourceAccessInternalInitOnce,
         0LL,
         0LL);
  if ( v9 >= 0 && dword_18015F520 > 5u )
  {
    LOBYTE(v9) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F520, 0x200000000000uLL);
    if ( (_BYTE)v9 )
    {
      v17 = &v14;
      v19 = v22;
      v21 = *((_QWORD *)a2 + 1);
      v22[0] = *a2;
      v23 = &v13;
      v25 = &v15;
      v27 = v30;
      v29 = *((_QWORD *)a5 + 1);
      v30[0] = *a5;
      v14 = a1;
      v13 = a3;
      v15 = a4;
      v18 = 4LL;
      v20 = 2LL;
      v22[1] = (_DWORD)v11;
      v24 = 1LL;
      v26 = 4LL;
      v28 = 2LL;
      v30[1] = (_DWORD)v11;
      LOBYTE(v9) = TlgWrite((TraceLoggingHProvider)&dword_18015F520, &unk_18012C5C1, v10, v11, 9u, &pData);
    }
  }
  return v9;
}
