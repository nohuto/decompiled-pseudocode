/*
 * XREFs of ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0057100
 * Callers:
 *     ?AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00570C0 (-AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C0051160 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C005132C (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C0053314 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 */

__int64 __fastcall FxDriver::AddDevice(FxDriver *this, _DEVICE_OBJECT *PhysicalDeviceObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rax
  unsigned __int64 v6; // rbx
  bool v7; // zf
  FxCallbackLock *m_CallbackLock; // rcx
  int v9; // eax
  __int64 v10; // rdx
  FxCallbackLock *v11; // rcx
  int v12; // ebx
  _FX_DRIVER_GLOBALS *v13; // rcx
  unsigned __int8 v15[16]; // [rsp+30h] [rbp-3E8h] BYREF
  WDFDEVICE_INIT init; // [rsp+40h] [rbp-3D8h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxDriverKm_cpp_Traceguids, PhysicalDeviceObject);
  Method = this->m_DriverDeviceAdd.Method;
  init.Fdo.PhysicalDevice = PhysicalDeviceObject;
  v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  init.CreatedOnStack = 1;
  v7 = this->m_ObjectSize == 0;
  init.InitType = FxDeviceInitTypeFdo;
  if ( v7 )
    v6 = 0LL;
  if ( Method )
  {
    m_CallbackLock = this->m_DriverDeviceAdd.m_CallbackLock;
    v15[0] = 0;
    if ( m_CallbackLock )
    {
      m_CallbackLock->Lock(m_CallbackLock, v15);
      Method = this->m_DriverDeviceAdd.Method;
    }
    v9 = Method((WDFDRIVER__ *)v6, &init);
    v11 = this->m_DriverDeviceAdd.m_CallbackLock;
    v12 = v9;
    if ( v11 )
    {
      LOBYTE(v10) = v15[0];
      v11->Unlock(v11, v10);
    }
  }
  else
  {
    v12 = -1073741823;
  }
  if ( init.CreatedDevice )
  {
    if ( v12 < 0 )
      v12 = FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)init.CreatedDevice, v12, 1u);
    else
      *(_DWORD *)(*((_QWORD *)init.CreatedDevice + 18) + 48LL) &= ~0x80u;
    v13 = this->m_Globals;
    if ( v13->FxVerboseOn )
      WPP_IFR_SF_d(v13, 5u, 0xCu, 0xDu, WPP_FxDriverKm_cpp_Traceguids, v12);
  }
  else
  {
    WPP_IFR_SF_d(this->m_Globals, 3u, 0xCu, 0xBu, WPP_FxDriverKm_cpp_Traceguids, v12);
    if ( init.Fdo.Filter && v12 < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 4u, 0xCu, 0xCu, WPP_FxDriverKm_cpp_Traceguids, v12);
      v12 = 0;
    }
  }
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return (unsigned int)v12;
}
