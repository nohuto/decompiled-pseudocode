/*
 * XREFs of ?InvokeClient@FxPnpDeviceD0Entry@@MEAAJXZ @ 0x1C0018B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqLd @ 0x1C006CF68 (WPP_IFR_SF_qqLd.c)
 */

int (__fastcall *__fastcall FxPnpDeviceD0Entry::InvokeClient(
        FxPnpDeviceD0Entry *this))(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE)
{
  int (__fastcall *result)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int globals; // edi

  result = this->m_Method;
  if ( result )
  {
    globals = result(this->m_Device, this->m_PreviousState);
    if ( globals < 0 )
      WPP_IFR_SF_qqLd(
        this->m_PkgPnp->m_Globals,
        (unsigned __int8)this->m_Device,
        0xCu,
        0xAu,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        this->m_PreviousState,
        globals);
    return (int (__fastcall *)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE))(unsigned int)globals;
  }
  return result;
}
