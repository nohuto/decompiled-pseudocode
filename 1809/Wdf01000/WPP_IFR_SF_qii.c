/*
 * XREFs of WPP_IFR_SF_qii @ 0x1C003487C
 * Callers:
 *     ?InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z @ 0x1C00340A8 (-InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003983C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qii(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        __int64 _a3,
        __int64 globals_0)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      _a1,
      traceGuid,
      &_a2,
      8LL,
      &_a3,
      8LL,
      &globals_0,
      8LL,
      0LL);
  FxIFR(globals, level, 0xFu, _a1, traceGuid, &_a2, 8LL, &_a3, 8LL, &globals_0, 8LL, 0LL);
}
