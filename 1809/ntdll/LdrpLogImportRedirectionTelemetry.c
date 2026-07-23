/*
 * XREFs of LdrpLogImportRedirectionTelemetry @ 0x1800D1664
 * Callers:
 *     LdrpInitializeImportRedirection @ 0x180084E4C (LdrpInitializeImportRedirection.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     _TlgKeywordOn @ 0x18004B5F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

char __fastcall LdrpLogImportRedirectionTelemetry(__int64 a1)
{
  struct _PEB *v1; // rax
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  _DWORD *v7; // [rsp+50h] [rbp+7h]
  int v8; // [rsp+58h] [rbp+Fh]
  int v9; // [rsp+5Ch] [rbp+13h]
  __int64 v10; // [rsp+60h] [rbp+17h]
  _DWORD v11[2]; // [rsp+68h] [rbp+1Fh] BYREF
  _DWORD *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  __int64 v15; // [rsp+80h] [rbp+37h]
  _DWORD v16[2]; // [rsp+88h] [rbp+3Fh] BYREF

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap )
  {
    LOBYTE(v1) = RtlRunOnceExecuteOnce(
                   &LibLoaderTelemetryInitRunOnce,
                   (PRTL_RUN_ONCE_INIT_FN)LibLoaderTelemetryInitOnce,
                   0LL,
                   0LL);
    if ( dword_18015F4E8 > 5u )
    {
      LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F4E8, 0x200000000000uLL);
      if ( (_BYTE)v1 )
      {
        v9 = 0;
        v11[1] = 0;
        v14 = 0;
        v16[1] = 0;
        v7 = v11;
        v10 = *(_QWORD *)(a1 + 80);
        v11[0] = *(unsigned __int16 *)(a1 + 72);
        v12 = v16;
        v15 = *(_QWORD *)(LdrpImageEntry + 80);
        v16[0] = *(unsigned __int16 *)(LdrpImageEntry + 72);
        v8 = 2;
        v13 = 2;
        LOBYTE(v1) = TlgWrite(v3, &unk_18012C332, (LPCGUID)2, v4, 6u, &pData);
      }
    }
  }
  return (char)v1;
}
