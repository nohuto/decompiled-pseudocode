/*
 * XREFs of LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800D1E18
 * Callers:
 *     LdrCreateEnclave @ 0x1800CEBB0 (LdrCreateEnclave.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     _TlgKeywordOn @ 0x18004B5F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1800D2458 (_TlgCreateSz.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(__int64 a1, int a2)
{
  struct _PEB *v2; // rax
  LPCGUID v5; // r8
  int v7; // [rsp+30h] [rbp-19h] BYREF
  GUID pRelatedActivityId; // [rsp+38h] [rbp-11h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+70h] [rbp+27h]
  int v11; // [rsp+78h] [rbp+2Fh]
  int v12; // [rsp+7Ch] [rbp+33h]
  int *v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LOBYTE(v2) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0LL, 0LL);
    if ( dword_18015F590 > 4u )
    {
      LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F590, 0x400000000000uLL);
      if ( (_BYTE)v2 )
      {
        *(_QWORD *)&pRelatedActivityId.Data1 = a1;
        v7 = a2;
        TlgCreateSz(&pDesc, "LdrCreateEnclave");
        v12 = 0;
        v15 = 0;
        v13 = &v7;
        p_pRelatedActivityId = &pRelatedActivityId;
        v11 = 8;
        v14 = 4;
        LOBYTE(v2) = TlgWrite(
                       (TraceLoggingHProvider)&dword_18015F590,
                       &unk_18012C29F,
                       v5,
                       &pRelatedActivityId,
                       5u,
                       (EVENT_DATA_DESCRIPTOR *)pRelatedActivityId.Data4);
      }
    }
  }
  return (char)v2;
}
