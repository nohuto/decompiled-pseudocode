/*
 * XREFs of WPP_IFR_SF_ddddd @ 0x1C007F8A0
 * Callers:
 *     ?PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DD70 (-PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DFA0 (-PnpEventQueryStopStaticCheck@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00040B0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003AED8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_ddddd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        int _a4,
        int _a5,
        int globals_0,
        int level,
        int flags)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_PnpStateMachine_cpp_Traceguids,
      _a2,
      &_a4,
      4LL,
      &_a5,
      4LL,
      &globals_0,
      4LL,
      &level,
      4LL,
      &flags,
      4LL,
      0LL);
  FxIFR(
    globals,
    4u,
    0xCu,
    WPP_PnpStateMachine_cpp_Traceguids,
    _a2,
    &_a4,
    4LL,
    &_a5,
    4LL,
    &globals_0,
    4LL,
    &level,
    4LL,
    &flags,
    4LL,
    0LL);
}
