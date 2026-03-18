/*
 * XREFs of ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C008995C
 * Callers:
 *     ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0017100 (-PowerWaking@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0018838 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C00898DC (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

void __fastcall FxPrePostCallback::IssueCleanupCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  _LIST_ENTRY *Flink; // rbx
  __int64 m_CallbackType; // rax
  FxCxPnpPowerCallbackContext *v6; // rdi

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = 0LL;
  if ( Device->m_CxDeviceInfoListHead.Flink != &Device->m_CxDeviceInfoListHead )
    Flink = Device->m_CxDeviceInfoListHead.Flink;
  do
  {
    if ( !Flink )
      break;
    m_CallbackType = (unsigned __int8)this->m_CallbackType;
    v6 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + m_CallbackType);
    if ( v6
      && FxCxPnpPowerCallbackContext::IsCallbackPresent(
           *((FxCxPnpPowerCallbackContext **)&Flink[6].Flink + m_CallbackType),
           FxCxCleanupCallback)
      && v6->m_PreCallbackSuccessful == 1 )
    {
      this->InvokeCxCleanupCallback(this, v6);
      v6->m_PreCallbackSuccessful = 0;
    }
    Flink = Flink->Flink;
  }
  while ( Flink != p_m_CxDeviceInfoListHead );
}
