/*
 * XREFs of ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x180195790
 * Callers:
 *     ??$ShoulderTap@PEBGPEBGPEBGAEAHAEAHAEAH@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG00AEAH11@Z @ 0x180193CD8 (--$ShoulderTap@PEBGPEBGPEBGAEAHAEAHAEAH@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG00AEA.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerLogging@@P6AXXZ@Z @ 0x1801958A0 (-get@-$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperi.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::ShoulderTap_(
        ShoulderTapExperienceManagerTelemetry *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v10; // rax
  TraceLoggingHProvider v11; // r10
  int v12; // [rsp+30h] [rbp-71h] BYREF
  int v13; // [rsp+34h] [rbp-6Dh] BYREF
  int v14; // [rsp+38h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+70h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+80h] [rbp-21h] BYREF
  int *v19; // [rsp+90h] [rbp-11h]
  __int64 v20; // [rsp+98h] [rbp-9h]
  int *v21; // [rsp+A0h] [rbp-1h]
  __int64 v22; // [rsp+A8h] [rbp+7h]
  int *v23; // [rsp+B0h] [rbp+Fh]
  __int64 v24; // [rsp+B8h] [rbp+17h]

  v10 = wil::details::static_lazy<ShoulderTapExperienceManagerLogging>::get(
          this,
          lambda_e47dc56054974f6441f4df3a6c4c9af5_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v10 + 8) > 5u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v10 + 8), 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      TlgCreateWsz(&v17, a3);
      TlgCreateWsz(&v18, a4);
      v19 = &v12;
      v13 = a6;
      v21 = &v13;
      v14 = a7;
      v23 = &v14;
      v12 = a5;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      TlgWrite(v11, &unk_1804C08A8, 0LL, 0LL, 8u, &pData);
    }
  }
}
