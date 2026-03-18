/*
 * XREFs of ?IsCxUsingSelfManagedIo@FxDevice@@QEAAEXZ @ 0x1C0084A08
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C008601C (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C00898DC (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

char __fastcall FxDevice::IsCxUsingSelfManagedIo(FxDevice *this)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v3; // r10
  char v4; // r11
  unsigned int v5; // ebx
  FxCxCallbackType *v6; // rdi
  FxCxPnpPowerCallbackContext *v7; // rcx
  FxCxPnpPowerCallbackContext *v8; // rcx
  FxCxPnpPowerCallbackContext *v9; // rcx
  FxCxCallbackType smIoCallbackList[5]; // [rsp+20h] [rbp-18h] BYREF

  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  *(_DWORD *)smIoCallbackList = 117834498;
  Flink = this->m_CxDeviceInfoListHead.Flink;
  v3 = 0LL;
  v4 = 0;
  smIoCallbackList[4] = FxCxCallbackSmIoCleanup;
  if ( Flink != &this->m_CxDeviceInfoListHead )
    v3 = Flink;
  do
  {
    if ( !v3 || v4 )
      break;
    v5 = 0;
    v6 = smIoCallbackList;
    while ( 1 )
    {
      v7 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&v3[6].Flink + *(unsigned __int8 *)v6);
      if ( v7 )
      {
        if ( FxCxPnpPowerCallbackContext::IsCallbackPresent(v7, FxCxPreCallback)
          || FxCxPnpPowerCallbackContext::IsCallbackPresent(v8, FxCxPostCallback)
          || FxCxPnpPowerCallbackContext::IsCallbackPresent(v9, FxCxCleanupCallback) )
        {
          break;
        }
      }
      ++v5;
      ++v6;
      if ( v5 >= 5 )
        goto LABEL_13;
    }
    v4 = 1;
LABEL_13:
    v3 = v3->Flink;
  }
  while ( v3 != p_m_CxDeviceInfoListHead );
  return v4;
}
