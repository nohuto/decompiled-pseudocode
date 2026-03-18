/*
 * XREFs of imp_WdfDmaEnablerGetFragmentLength @ 0x1C0030F40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C00307D4 (WPP_IFR_SF_dq.c)
 */

__int64 __fastcall imp_WdfDmaEnablerGetFragmentLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        int DmaDirection)
{
  __int64 v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  $FD12C6E5D97FBF1457EB8C1089047E2C *v7; // rbx
  FxDmaEnabler *pDmaEnabler; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  v5 = 0LL;
  m_Globals = pDmaEnabler->m_Globals;
  if ( !DmaDirection )
    return pDmaEnabler->m_SimplexAdapterInfo.MaximumFragmentLength;
  if ( DmaDirection == 1 )
  {
    v7 = ($FD12C6E5D97FBF1457EB8C1089047E2C *)&pDmaEnabler->m_DuplexAdapterInfo[1];
    if ( (*((_BYTE *)pDmaEnabler + 380) & 0x10) == 0 )
      v7 = &pDmaEnabler->184;
    return v7->m_SimplexAdapterInfo.MaximumFragmentLength;
  }
  else
  {
    WPP_IFR_SF_dq(m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaDirection, DmaEnabler);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return v5;
}
