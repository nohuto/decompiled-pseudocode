/*
 * XREFs of ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00889AC
 * Callers:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0012AE0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0018854 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C008876C (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateless(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  _LIST_ENTRY *Flink; // rbx
  int v4; // edi
  FxCxPnpPowerCallbackContext *v6; // rcx
  FxCxPnpPowerCallbackContext *v7; // rcx
  int v8; // eax

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
      if ( FxCxPnpPowerCallbackContext::IsCallbackPresent(v6, FxCxPreCallback) )
      {
        v8 = this->InvokeCxCallback(this, v7, FxCxInvokePreCallback);
        if ( v4 >= 0 )
          v4 = v8;
      }
    }
    Flink = Flink->Flink;
  }
  while ( Flink != p_m_CxDeviceInfoListHead );
  return (unsigned int)v4;
}
