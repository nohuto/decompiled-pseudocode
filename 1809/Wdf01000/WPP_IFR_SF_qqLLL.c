/*
 * XREFs of WPP_IFR_SF_qqLLL @ 0x1C007EEF0
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011120 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00116B0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007E62C (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqLLL(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        const void *_a3,
        unsigned int _a4,
        unsigned int _a5,
        unsigned int globals_0)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      _a1,
      traceGuid,
      &_a2,
      8LL,
      &_a3,
      8LL,
      &_a4,
      4LL,
      &_a5,
      4LL,
      &globals_0,
      4LL,
      0LL);
  FxIFR(globals, level, 0xCu, _a1, traceGuid, &_a2, 8LL, &_a3, 8LL, &_a4, 4LL, &_a5, 4LL, &globals_0, 4LL, 0LL);
}
