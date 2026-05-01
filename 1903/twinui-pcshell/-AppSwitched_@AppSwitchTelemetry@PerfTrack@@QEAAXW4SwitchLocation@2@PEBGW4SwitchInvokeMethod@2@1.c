/*
 * XREFs of ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x180367BEC
 * Callers:
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x180367B1C (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18004974C (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AXXZ@Z @ 0x180367DF4 (-get@-$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AX.c)
 */

char __fastcall PerfTrack::AppSwitchTelemetry::AppSwitched_(__int64 a1, int a2, const WCHAR *a3, int a4)
{
  __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  const unsigned __int16 *v9; // rdx
  const WCHAR *v10; // rax
  const unsigned __int16 *v11; // rdx
  const WCHAR *v12; // rax
  int v14; // [rsp+30h] [rbp-41h] BYREF
  int v15; // [rsp+34h] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  int *v17; // [rsp+60h] [rbp-11h]
  int v18; // [rsp+68h] [rbp-9h]
  int v19; // [rsp+6Ch] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-1h] BYREF
  int *v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+8Ch] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+90h] [rbp+1Fh] BYREF

  v7 = wil::details::static_lazy<CAppLifeCycle_UILogging>::get(
         a1,
         lambda_692b62e119e69287558415adb7754127_::_lambda_invoker_cdecl_);
  v8 = *(const struct _TlgProvider_t **)(v7 + 8);
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v7) = TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x400000000000uLL);
    if ( (_BYTE)v7 )
    {
      v19 = 0;
      v14 = a2;
      v17 = &v14;
      v18 = 4;
      v10 = SQM::CensorAppID(a3, v9);
      TlgCreateWsz(&pDesc, v10);
      v23 = 0;
      v21 = &v15;
      v15 = a4;
      v22 = 4;
      v12 = SQM::CensorAppID(0LL, v11);
      TlgCreateWsz(&v24, v12);
      LOBYTE(v7) = TlgWrite(v8, &unk_1804DD91F, 0LL, 0LL, 6u, &pData);
    }
  }
  return v7;
}
