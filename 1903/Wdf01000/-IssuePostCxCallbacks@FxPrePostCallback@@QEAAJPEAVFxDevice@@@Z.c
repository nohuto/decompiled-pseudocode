/*
 * XREFs of ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00899EC
 * Callers:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C000EE60 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0017100 (-PowerWaking@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0018838 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00188C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C00898DC (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePostCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  _LIST_ENTRY *Flink; // rbx
  int v4; // edi
  FxCxPnpPowerCallbackContext *v6; // rcx
  char v7; // dl
  FxCxPnpPowerCallbackContext *v8; // rcx
  __int64 v9; // r8
  int v10; // eax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = 0LL;
  v4 = 0;
  if ( Device->m_CxDeviceInfoListHead.Flink != &Device->m_CxDeviceInfoListHead )
    Flink = Device->m_CxDeviceInfoListHead.Flink;
  do
  {
    if ( !Flink )
      break;
    v6 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + (unsigned __int8)this->m_CallbackType);
    if ( v6 )
    {
      v6->m_PreCallbackSuccessful = 0;
      if ( FxCxPnpPowerCallbackContext::IsCallbackPresent(v6, FxCxPostCallback) )
      {
        LOBYTE(v9) = v7;
        v10 = this->InvokeCxCallback(this, v8, (FxCxInvokeCallbackSubType)v9);
        if ( v4 >= 0 )
          v4 = v10;
      }
    }
    Flink = Flink->Flink;
  }
  while ( Flink != p_m_CxDeviceInfoListHead );
  return (unsigned int)v4;
}
