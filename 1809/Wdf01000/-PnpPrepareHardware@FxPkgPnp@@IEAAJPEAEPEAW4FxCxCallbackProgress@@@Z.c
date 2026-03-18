/*
 * XREFs of ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C007E24C
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007CE50 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D8C0 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DA30 (-PnpEventStartingFromStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C00187C4 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ @ 0x1C007C620 (-PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C007DF74 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpPrepareHardware(
        FxPkgPnp *this,
        unsigned __int8 *ResourcesMatched,
        FxCxCallbackProgress *Progress)
{
  unsigned int v3; // eax
  int matched; // eax
  unsigned __int8 v8; // r8
  FxDeviceBase *m_DeviceBase; // rbp
  unsigned int v10; // ebx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  __int64 result; // rax
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  FxDeviceBase *v15; // rcx
  FxCmResList *m_ResourcesRaw; // r8
  FxCmResList *m_Resources; // r11
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v19; // rcx
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // r9
  WDFCMRESLIST__ *v22; // r8
  WDFCMRESLIST__ *v23; // r11
  int v24; // eax
  FxDeviceBase *v25; // rbx
  int v26; // esi
  unsigned __int8 v27; // r8
  unsigned __int8 v28; // dl
  unsigned __int8 v29; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v31; // rdx
  FxDeviceBase *v32; // rcx
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  v3 = this->m_PnpStateAndCaps.Value & 0xFFFFFAEF;
  *ResourcesMatched = 0;
  *Progress = FxCxCallbackProgressInitialized;
  this->m_PnpStateAndCaps.Value = v3 | 0xA20;
  matched = FxPkgPnp::PnpMatchResources(this);
  m_DeviceBase = this->m_DeviceBase;
  v10 = matched;
  if ( matched >= 0 )
  {
    *ResourcesMatched = 1;
    FxNonPagedObject::Lock(m_DeviceBase, &PreviousIrql, v8);
    v13 = PreviousIrql;
    LOBYTE(m_DeviceBase[1].m_Globals) |= 1u;
    FxNonPagedObject::Unlock(m_DeviceBase, v13, v14);
    v15 = this->m_DeviceBase;
    m_ResourcesRaw = this->m_ResourcesRaw;
    m_Resources = this->m_Resources;
    m_ObjectSize = v15->m_ObjectSize;
    v19 = (WDFDEVICE__ *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v20 = m_ResourcesRaw->m_ObjectSize;
    v21 = m_Resources->m_ObjectSize;
    if ( !m_ObjectSize )
      v19 = 0LL;
    v22 = (WDFCMRESLIST__ *)((unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_DevicePrepareHardware.m_Device = v19;
    if ( !v20 )
      v22 = 0LL;
    v23 = (WDFCMRESLIST__ *)((unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_DevicePrepareHardware.m_ResourcesRaw = v22;
    if ( !v21 )
      v23 = 0LL;
    this->m_DevicePrepareHardware.m_ResourcesTranslated = v23;
    v24 = FxPrePostCallback::InvokeStateful(&this->m_DevicePrepareHardware, Progress, FxCxCleanupAfterPreFailure);
    v25 = this->m_DeviceBase;
    v26 = v24;
    FxNonPagedObject::Lock(v25, &PreviousIrql, v27);
    v28 = PreviousIrql;
    LOBYTE(v25[1].m_Globals) &= ~1u;
    FxNonPagedObject::Unlock(v25, v28, v29);
    if ( v26 >= 0 )
    {
      FxPkgPnp::PnpAssignInterruptsSyncIrql(this);
      return 0;
    }
    else
    {
      if ( v26 == -1073741637 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Au, WPP_PnpStateMachine_cpp_Traceguids);
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerifierOn )
        {
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 0xBu)
            || v31->FxVerifyDownlevel )
          {
            FxVerifierDbgBreakPoint(v31);
          }
        }
      }
      v32 = this->m_DeviceBase;
      this->m_InternalFailure = 1;
      IoInvalidateDeviceState(v32->m_PhysicalDevice.m_DeviceObject);
      this->m_PendingPnPIrp->IoStatus.Status = v26;
    }
    return (unsigned int)v26;
  }
  else
  {
    this->m_InternalFailure = 1;
    m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
    *ResourcesMatched = 0;
    IoInvalidateDeviceState(m_DeviceObject);
    result = v10;
    this->m_PendingPnPIrp->IoStatus.Status = v10;
  }
  return result;
}
