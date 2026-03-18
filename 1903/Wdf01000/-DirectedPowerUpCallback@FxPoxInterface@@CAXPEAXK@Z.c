/*
 * XREFs of ?DirectedPowerUpCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C0091440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0090D14 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::DirectedPowerUpCallback(FxPoxInterface *Context, unsigned int Flags)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdx

  m_PkgPnp = Context->m_PkgPnp;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  m_Globals = m_PkgPnp->m_Globals;
  _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_DeviceBase->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(
    m_Globals,
    4u,
    0xCu,
    0x14u,
    WPP_PoxInterfaceKm_cpp_Traceguids,
    _a1,
    m_DeviceBase->m_DeviceObject.m_DeviceObject);
  _InterlockedExchange(&Context->m_DirectedTransitionActive, 1);
  FxPoxInterface::DprProcessEventFromPoxCallback(Context, DprEventPoxDirectedPowerUp);
}
