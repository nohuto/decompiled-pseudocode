/*
 * XREFs of ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x180307650
 * Callers:
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x1803074CC (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?get@?$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AXXZ@Z @ 0x1803077C4 (-get@-$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AX.c)
 */

char __fastcall PerfTrack::AppSwitchTelemetry::AppSwitched_(__int64 a1, int a2, const WCHAR *a3, int a4)
{
  __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  int v12; // [rsp+30h] [rbp-41h] BYREF
  int v13; // [rsp+34h] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  int *v15; // [rsp+60h] [rbp-11h]
  int v16; // [rsp+68h] [rbp-9h]
  int v17; // [rsp+6Ch] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-1h] BYREF
  int *v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+8Ch] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+90h] [rbp+1Fh] BYREF

  v7 = wil::details::static_lazy<CAppLifeCycle_UILogging>::get(
         a1,
         lambda_692b62e119e69287558415adb7754127_::_lambda_invoker_cdecl_);
  v8 = *(const struct _TlgProvider_t **)(v7 + 8);
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v7) = TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x400000000000uLL);
    if ( (_BYTE)v7 )
    {
      v17 = 0;
      v12 = a2;
      v15 = &v12;
      v16 = 4;
      v9 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(a3);
      TlgCreateWsz(&pDesc, v9);
      v21 = 0;
      v19 = &v13;
      v13 = a4;
      v20 = 4;
      v10 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(0LL);
      TlgCreateWsz(&v22, v10);
      LOBYTE(v7) = TlgWrite(v8, &unk_180464FC0, 0LL, 0LL, 6u, &pData);
    }
  }
  return v7;
}
