/*
 * XREFs of ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DE20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryStopAskDriver(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // rcx
  int _a1; // edi
  __int64 result; // rax
  unsigned int v8; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v10; // rcx

  m_DeviceBase = This->m_DeviceBase;
  m_Method = This->m_DeviceQueryStop.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    _a1 = m_Method((WDFDEVICE__ *)v5);
  }
  else
  {
    _a1 = 0;
  }
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x15u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    if ( _a1 == -1073741637 )
    {
      WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x16u, WPP_PnpStateMachine_cpp_Traceguids);
      m_Globals = This->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 0xBu) || v10->FxVerifyDownlevel )
          FxVerifierDbgBreakPoint(v10);
      }
    }
    result = 281LL;
  }
  else
  {
    result = 312LL;
  }
  This->m_PendingPnPIrp->IoStatus.Status = _a1;
  return result;
}
