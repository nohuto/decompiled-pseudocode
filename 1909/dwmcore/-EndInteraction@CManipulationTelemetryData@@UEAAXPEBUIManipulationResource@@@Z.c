/*
 * XREFs of ?EndInteraction@CManipulationTelemetryData@@UEAAXPEBUIManipulationResource@@@Z @ 0x180234510
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  if ( dword_180337240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
  {
    v9 = 0;
    v7 = &v5;
    v8 = 8;
    TlgWrite(v4, &unk_1802DD5B8, 0LL, 0LL, 3u, &pData);
    v2 = v5;
  }
  (*(void (__fastcall **)(_QWORD, const struct IManipulationResource *))(**(_QWORD **)(*((_QWORD *)this + 21) + 552LL)
                                                                       + 24LL))(
    *(_QWORD *)(*((_QWORD *)this + 21) + 552LL),
    v2);
}
