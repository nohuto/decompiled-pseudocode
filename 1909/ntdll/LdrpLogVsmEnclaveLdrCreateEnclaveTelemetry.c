/*
 * XREFs of LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800D05E8
 * Callers:
 *     LdrCreateEnclave @ 0x1800CD420 (LdrCreateEnclave.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800062B0 (_TlgKeywordOn.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1800D0C28 (_TlgCreateSz.c)
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
    if ( dword_18015F4C0 > 4u )
    {
      LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F4C0, 0x400000000000uLL);
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
                       (TraceLoggingHProvider)&dword_18015F4C0,
                       &unk_18012B9CF,
                       v5,
                       &pRelatedActivityId,
                       5u,
                       (EVENT_DATA_DESCRIPTOR *)pRelatedActivityId.Data4);
      }
    }
  }
  return (char)v2;
}
