/*
 * XREFs of ?EndInteraction@CManipulationTelemetryData@@UEAAXPEBUIManipulationResource@@@Z @ 0x1801F55C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulationTelemetryData::EndInteraction(
        CManipulationTelemetryData *this,
        const struct IManipulationResource *a2)
{
  const struct IManipulationResource *v2; // r9
  const struct _TlgProvider_t *v4; // rcx
  const struct IManipulationResource *v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  const struct IManipulationResource **v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = a2;
  v5 = a2;
  if ( dword_180305E40 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v9 = 0;
    v7 = &v5;
    v8 = 8;
    TlgWrite(v4, &unk_1802B85D2, 0LL, 0LL, 3u, &pData);
    v2 = v5;
  }
  (*(void (__fastcall **)(_QWORD, const struct IManipulationResource *))(**(_QWORD **)(*((_QWORD *)this + 18) + 536LL)
                                                                       + 24LL))(
    *(_QWORD *)(*((_QWORD *)this + 18) + 536LL),
    v2);
}
