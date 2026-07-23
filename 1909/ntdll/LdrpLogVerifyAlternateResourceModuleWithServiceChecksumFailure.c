/*
 * XREFs of LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800D04B8
 * Callers:
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180059CD4 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800062B0 (_TlgKeywordOn.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3)
{
  NTSTATUS v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int16 v11; // [rsp+38h] [rbp-49h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  _DWORD *v14; // [rsp+68h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  _DWORD v17[2]; // [rsp+80h] [rbp-1h] BYREF
  __int16 *v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  __int16 *v22; // [rsp+A8h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+2Fh]
  __int64 v24; // [rsp+B8h] [rbp+37h]
  __int64 v25; // [rsp+C0h] [rbp+3Fh]

  v6 = RtlRunOnceExecuteOnce(
         &stru_1801660D0,
         (PRTL_RUN_ONCE_INIT_FN)LdrpResReportResourceAccessInternalInitOnce,
         0LL,
         0LL);
  if ( v6 >= 0 && (unsigned int)dword_18015F450 > 5 )
  {
    LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F450, 0x200000000000uLL);
    if ( (_BYTE)v6 )
    {
      v15 = 2LL;
      v11 = (_WORD)v9 + 4;
      v12 = (_WORD)v9 + 4;
      v14 = v17;
      v16 = *((_QWORD *)a1 + 1);
      v17[0] = *a1;
      v18 = &v11;
      v22 = &v12;
      v17[1] = (_DWORD)v9;
      v19 = 2LL;
      v20 = a2;
      v21 = 16LL;
      v23 = 2LL;
      v24 = a3;
      v25 = 16LL;
      LOBYTE(v6) = TlgWrite(v7, &unk_18012B85A, v8, v9, 8u, &pData);
    }
  }
  return v6;
}
