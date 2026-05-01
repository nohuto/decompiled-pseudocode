/*
 * XREFs of ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x180135AC0
 * Callers:
 *     ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180136830 (-OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@P6AXXZ@Z @ 0x1801376E0 (-get@-$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@.c)
 */

char __fastcall DesktopBlueLightReductionManagerTelemetry::IdleStateFlagsChanged<unsigned int,unsigned int>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<BlueLightReductionLogging>::get(
         a1,
         lambda_8fbe65ba72b2d61923eb3411a963ff67_::_lambda_invoker_cdecl_);
  v5 = *(const struct _TlgProvider_t **)(v4 + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(v5, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      v11 = 0;
      v14 = 0;
      v10 = 4;
      v13 = 4;
      v9 = a1;
      v12 = a2;
      LOBYTE(v4) = TlgWrite(v6, &unk_18044B986, 0LL, 0LL, 4u, &pData);
    }
  }
  return v4;
}
