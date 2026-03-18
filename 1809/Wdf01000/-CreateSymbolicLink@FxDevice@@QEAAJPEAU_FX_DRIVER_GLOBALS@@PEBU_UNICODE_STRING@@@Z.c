/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0052120
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00497E0 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000C99C (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C004860C (--1FxAutoString@@QEAA@XZ.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0063DE0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  __int16 v6; // cx
  _DEVICE_OBJECT *SafePhysicalDevice; // r14
  NTSTATUS DeviceProperty; // edi
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // ax
  const void *_a2; // rbx
  wchar_t *v12; // rax
  FxAutoString *p_m_DeviceName; // r14
  unsigned __int16 m_ObjectSize; // ax
  const void *v15; // rbx
  FxAutoString pdoName; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int length; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)&pdoName.m_UnicodeString.Length = 0LL;
  pdoName.m_UnicodeString.Buffer = 0LL;
  if ( this->m_DeviceName.Buffer )
  {
    p_m_DeviceName = (FxAutoString *)&this->m_DeviceName;
    goto LABEL_23;
  }
  if ( this->m_Legacy )
  {
    v6 = 12;
LABEL_6:
    DeviceProperty = -1073741436;
LABEL_10:
    v9 = v6;
LABEL_27:
    m_ObjectSize = this->m_ObjectSize;
    v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, v9, WPP_FxDeviceKm_cpp_Traceguids, v15, DeviceProperty);
    goto LABEL_30;
  }
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( !SafePhysicalDevice )
  {
    v6 = 13;
    goto LABEL_6;
  }
  length = 0;
  DeviceProperty = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
  {
    v6 = 14;
    goto LABEL_10;
  }
  if ( length <= 0xFFFF )
  {
    if ( !length )
    {
      DeviceProperty = -1073741436;
      v9 = 16;
      goto LABEL_27;
    }
    v12 = (wchar_t *)FxPoolAllocator(
                       FxDriverGlobals,
                       &FxDriverGlobals->FxPoolFrameworks,
                       1u,
                       length,
                       FxDriverGlobals->Tag,
                       retaddr);
    if ( !v12 )
    {
      DeviceProperty = -1073741670;
      v9 = 17;
      goto LABEL_27;
    }
    pdoName.m_UnicodeString.Buffer = v12;
    DeviceProperty = IoGetDeviceProperty(
                       SafePhysicalDevice,
                       DevicePropertyPhysicalDeviceObjectName,
                       length,
                       v12,
                       &length);
    if ( DeviceProperty < 0 )
    {
      v9 = 18;
      goto LABEL_27;
    }
    p_m_DeviceName = &pdoName;
    pdoName.m_UnicodeString.MaximumLength = length;
    pdoName.m_UnicodeString.Length = length - 2;
LABEL_23:
    DeviceProperty = FxDuplicateUnicodeString(FxDriverGlobals, SymbolicLinkName, &this->m_SymbolicLinkName);
    if ( DeviceProperty >= 0 )
    {
      DeviceProperty = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_m_DeviceName->m_UnicodeString);
      if ( DeviceProperty >= 0 )
        goto LABEL_30;
      FxPoolFree((FX_POOL_TRACKER *)this->m_SymbolicLinkName.Buffer);
      *(_QWORD *)&this->m_SymbolicLinkName.Length = 0LL;
      this->m_SymbolicLinkName.Buffer = 0LL;
      v9 = 20;
    }
    else
    {
      v9 = 19;
    }
    goto LABEL_27;
  }
  v10 = this->m_ObjectSize;
  _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  DeviceProperty = -1073741675;
  if ( !v10 )
    _a2 = 0LL;
  WPP_IFR_SF_qddd(FxDriverGlobals, 0xFFu, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, _a2, length, 0xFFFF, -1073741675);
LABEL_30:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)DeviceProperty;
}
