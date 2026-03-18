/*
 * XREFs of imp_WdfFdoGetDefaultChildList @ 0x1C0019750
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFCHILDLIST__ *__fastcall imp_WdfFdoGetDefaultChildList(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // rax
  FxPkgPnp_vtbl *v5; // rax
  __int16 v6; // cx
  WDFCHILDLIST__ *result; // rax
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Fdo,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( pDevice->m_Legacy || (m_PkgPnp = pDevice->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
    FxVerifierDbgBreakPoint(m_Globals);
    return 0LL;
  }
  v5 = m_PkgPnp[1].__vftable;
  if ( !v5 )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x12u, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
    return 0LL;
  }
  v6 = WORD1(v5->~FxObject);
  result = (WDFCHILDLIST__ *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v6 )
    return 0LL;
  return result;
}
