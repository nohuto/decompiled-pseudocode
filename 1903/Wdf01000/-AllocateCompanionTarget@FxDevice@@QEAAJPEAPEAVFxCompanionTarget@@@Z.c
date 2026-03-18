/*
 * XREFs of ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C0051890
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00857B4 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000D650 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0043EE4 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     ??0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00517D8 (--0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDevice::AllocateCompanionTarget(FxDevice *this, FxCompanionTarget **DeviceCompanion)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FxCompanionTarget *v5; // rax
  unsigned __int16 v6; // r8
  FxCompanionTarget *v7; // rax
  FxCompanionTarget *v8; // rdi
  signed int _a2; // esi
  unsigned __int16 v10; // ax
  const void *_a1; // rbx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _FX_DRIVER_GLOBALS *v13; // rdx
  IDeviceCompanionCallbacks *v14; // r9
  IDeviceCompanion **v15; // r10
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  const void *v18; // rbx
  bool v19; // zf
  unsigned __int16 m_ObjectSize; // ax
  __int64 result; // rax

  p_m_Globals = &this->m_Globals;
  v5 = (FxCompanionTarget *)FxObjectHandleAlloc(
                              this->m_Globals,
                              ExDefaultNonPagedPoolType,
                              0xA0uLL,
                              0,
                              0LL,
                              0,
                              FxObjectTypeExternal);
  if ( v5 )
  {
    FxCompanionTarget::FxCompanionTarget(v5, *p_m_Globals, v6);
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v8->m_Device = this;
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
    _a2 = FxCompanionLibrary::LoadCompanion(qword_1C00AEEE8, v13, SafePhysicalDevice, v14, v15);
    if ( _a2 >= 0 )
    {
      _a2 = FxObject::Commit(v8, 0LL, 0LL, this, 1u);
      if ( _a2 >= 0 )
        goto LABEL_15;
      m_ObjectSize = this->m_ObjectSize;
      v17 = 31;
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v19 = m_ObjectSize == 0;
    }
    else
    {
      v16 = this->m_ObjectSize;
      v17 = 30;
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v19 = v16 == 0;
    }
    if ( v19 )
      v18 = 0LL;
    WPP_IFR_SF_qL(*p_m_Globals, 2u, 0x12u, v17, WPP_FxDeviceKm_cpp_Traceguids, v18, _a2);
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
    v8 = 0LL;
  }
  else
  {
    _a2 = -1073741670;
    v10 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v10 )
      _a1 = 0LL;
    WPP_IFR_SF_qL(*p_m_Globals, 2u, 0x12u, 0x1Du, WPP_FxDeviceKm_cpp_Traceguids, _a1, 0xC000009A);
  }
LABEL_15:
  result = (unsigned int)_a2;
  *DeviceCompanion = v8;
  return result;
}
