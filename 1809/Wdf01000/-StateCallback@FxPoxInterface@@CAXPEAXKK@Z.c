/*
 * XREFs of ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C008FDA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C008F570 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::StateCallback(FxPoxInterface *Context, unsigned int Component, unsigned int State)
{
  FxPkgPnp *m_PkgPnp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v11; // rdi
  void (__fastcall *ComponentIdleStateCallback)(void *, unsigned int, unsigned int); // rax
  FxPkgPnp *v13; // r11
  _FX_DRIVER_GLOBALS *v14; // rcx
  FxDeviceBase *v15; // r11
  const void *v16; // r10

  m_PkgPnp = Context->m_PkgPnp;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      5u,
      0xCu,
      0xAu,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v11 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings
    && (ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback) != 0LL )
  {
    v13 = Context->m_PkgPnp;
    v14 = v13->m_Globals;
    if ( v14->FxVerboseOn )
    {
      v15 = v13->m_DeviceBase;
      v16 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v15->m_ObjectSize )
        v16 = 0LL;
      WPP_IFR_SF_qq(v14, 5u, 0xCu, 0xBu, WPP_PoxInterfaceKm_cpp_Traceguids, v16, v15->m_DeviceObject.m_DeviceObject);
      ComponentIdleStateCallback = v11->ComponentIdleStateCallback;
    }
    ComponentIdleStateCallback(v11->PoFxDeviceContext, Component, State);
  }
  else
  {
    PoFxCompleteIdleState(Context->m_PoHandle, Component);
  }
}
