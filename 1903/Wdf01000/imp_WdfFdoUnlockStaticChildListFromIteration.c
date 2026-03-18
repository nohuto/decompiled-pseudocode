/*
 * XREFs of imp_WdfFdoUnlockStaticChildListFromIteration @ 0x1C0001390
 * Callers:
 *     <none>
 * Callees:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C0001424 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfFdoUnlockStaticChildListFromIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxPkgPnp *m_PkgPnp; // rcx
  FxChildList *v5; // rcx
  _WDF_CHILD_LIST_ITERATOR iterator; // [rsp+30h] [rbp-38h] BYREF
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Fdo, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( pDevice->m_Legacy || (m_PkgPnp = pDevice->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    v5 = *(FxChildList **)&m_PkgPnp[1].m_Type;
    iterator.Size = 40;
    iterator.Flags = 7;
    memset(iterator.Reserved, 0, sizeof(iterator.Reserved));
    FxChildList::EndIteration(v5, &iterator);
  }
}
