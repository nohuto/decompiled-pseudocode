/*
 * XREFs of ?InvokeClient@FxPnpDeviceSelfManagedIoSuspend@@MEAAJXZ @ 0x1C001A270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 */

int (__fastcall *__fastcall FxPnpDeviceSelfManagedIoSuspend::InvokeClient(
        FxPnpDeviceSelfManagedIoSuspend *this))(WDFDEVICE__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *); // rax
  int _a3; // edi

  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device);
    if ( _a3 < 0 )
      WPP_IFR_SF_qid(
        this->m_PkgPnp->m_Globals,
        4u,
        0xCu,
        0x14u,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        (__int64)this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    return (int (__fastcall *)(WDFDEVICE__ *))(unsigned int)_a3;
  }
  return result;
}
