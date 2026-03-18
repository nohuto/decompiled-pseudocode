/*
 * XREFs of ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0018FF4
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C0018F9C (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C007C6D8 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007D74C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00802D0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080930 (-PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080E70 (-PowerStartSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080EA0 (-PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00101EC (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C00102EC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C00103F0 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     WPP_IFR_SF_Lq @ 0x1C00107B4 (WPP_IFR_SF_Lq.c)
 */

__int64 __fastcall FxPkgIo::StopProcessingForPower(FxPkgIo *this, int Action, __int64 a3, unsigned __int16 a4)
{
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *id; // r8
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  __int64 v12; // rdx
  unsigned __int8 v13; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v15; // rdi
  bool v16; // zf
  _SINGLE_LIST_ENTRY *v17; // rsi
  const _GUID *v19; // [rsp+20h] [rbp-38h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    id = 0LL;
  WPP_IFR_SF_Lq(m_Globals, Action, (unsigned int)id, a4, v19, Action, id);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v10);
  this->m_PowerStateOn = 0;
  if ( Action >= 2 && Action <= 3 )
    this->m_QueuesAreShuttingDown = 1;
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)2);
  FxNonPagedObject::Unlock(this, irql, v11);
  Next = queueList.Next;
  if ( Action == 1 )
  {
    v15 = queueList.Next;
    v16 = queueList.Next == 0LL;
    if ( !queueList.Next )
      goto LABEL_8;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v15[-116], v12, v13);
      v15 = v15->Next;
    }
    while ( v15 );
  }
  while ( 1 )
  {
    v16 = Next == 0LL;
LABEL_8:
    v17 = Next;
    if ( !v16 )
      Next = Next->Next;
    if ( !v17 )
      break;
    FxIoQueue::StopProcessingForPower((FxIoQueue *)&v17[-116], (FxIoStopProcessingForPowerAction)Action, v13);
    v17->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v17[-116].Next[2].Next)(
      &v17[-116].Next,
      1702326128LL,
      1248LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
