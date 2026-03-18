/*
 * XREFs of ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C007E88C
 * Callers:
 *     ?PnpEventFailedOwnHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007CBE0 (-PnpEventFailedOwnHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D880 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D920 (-PnpEventRestartReleaseHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DA80 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0018854 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgPnp::PnpReleaseHardware(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxCmResList *m_Resources; // r9
  FxPnpDeviceReleaseHardware *p_m_DeviceReleaseHardware; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v6; // rdx
  unsigned __int16 v7; // r8
  unsigned __int64 v8; // r9
  unsigned int v9; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v11; // rdx
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY **p_Blink; // rcx

  m_DeviceBase = this->m_DeviceBase;
  m_Resources = this->m_Resources;
  p_m_DeviceReleaseHardware = &this->m_DeviceReleaseHardware;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  v7 = m_Resources->m_ObjectSize;
  if ( !m_ObjectSize )
    v6 = 0LL;
  v8 = (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceReleaseHardware->m_Device = (WDFDEVICE__ *)v6;
  if ( !v7 )
    v8 = 0LL;
  p_m_DeviceReleaseHardware->m_ResourcesTranslated = (WDFCMRESLIST__ *)v8;
  v9 = FxPrePostCallback::InvokeStateless(p_m_DeviceReleaseHardware);
  if ( v9 == -1073741637 )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Cu, WPP_PnpStateMachine_cpp_Traceguids);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 0xBu)
        || v11->FxVerifyDownlevel )
      {
        FxVerifierDbgBreakPoint(v11);
      }
    }
  }
  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  while ( Blink != p_m_InterruptListHead )
  {
    p_Blink = &Blink[-28].Blink;
    Blink = Blink->Blink;
    if ( *((_BYTE *)p_Blink + 264) )
      ((void (__fastcall *)(_LIST_ENTRY **))(*p_Blink)[3].Flink)(p_Blink);
  }
  return v9;
}
