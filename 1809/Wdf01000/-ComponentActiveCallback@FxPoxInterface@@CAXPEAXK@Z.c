/*
 * XREFs of ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008F860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C008F570 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::ComponentActiveCallback(FxPoxInterface *Context, unsigned int Component)
{
  FxPkgPnp *m_PkgPnp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v9; // rbx
  void (__fastcall *ComponentActiveConditionCallback)(void *, unsigned int); // rax
  FxPkgPnp *v11; // r11
  _FX_DRIVER_GLOBALS *v12; // rcx
  FxDeviceBase *v13; // r11
  const void *v14; // r10

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
      0xCu,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v9 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings )
  {
    ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
    if ( ComponentActiveConditionCallback )
    {
      v11 = Context->m_PkgPnp;
      v12 = v11->m_Globals;
      if ( v12->FxVerboseOn )
      {
        v13 = v11->m_DeviceBase;
        v14 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v13->m_ObjectSize )
          v14 = 0LL;
        WPP_IFR_SF_qq(v12, 5u, 0xCu, 0xDu, WPP_PoxInterfaceKm_cpp_Traceguids, v14, v13->m_DeviceObject.m_DeviceObject);
        ComponentActiveConditionCallback = v9->ComponentActiveConditionCallback;
      }
      ComponentActiveConditionCallback(v9->PoFxDeviceContext, Component);
    }
  }
}
