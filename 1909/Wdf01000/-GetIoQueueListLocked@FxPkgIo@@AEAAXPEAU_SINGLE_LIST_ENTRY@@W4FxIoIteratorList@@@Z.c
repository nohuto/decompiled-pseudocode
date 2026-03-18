/*
 * XREFs of ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C00109E0
 * Callers:
 *     ?PowerGotoDNotZero@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010680 (-PowerGotoDNotZero@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C0077C70 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0077DA4 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0077F1C (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     GetIoQueueList_ProcessQueueListEntry @ 0x1C0077B64 (GetIoQueueList_ProcessQueueListEntry.c)
 */

void __fastcall FxPkgIo::GetIoQueueListLocked(FxPkgIo *this, _SINGLE_LIST_ENTRY *SListHead, void *ListType)
{
  _LIST_ENTRY *p_m_IoQueueListHead; // rdi
  _LIST_ENTRY *i; // rbx
  unsigned int RefCount; // edx
  _LIST_ENTRY *j; // rbx
  FxTagTracker *Blink; // rcx

  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( (_DWORD)ListType == 1 )
    goto LABEL_4;
  if ( (_DWORD)ListType != 2 )
    return;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
LABEL_4:
    for ( i = this->m_IoQueueListHead.Blink; i != p_m_IoQueueListHead; i = i->Blink )
    {
      if ( LODWORD(i[1].Flink) == 1 )
      {
        i[1].Blink = (_LIST_ENTRY *)SListHead->Next;
        SListHead->Next = (_SINGLE_LIST_ENTRY *)&i[1].Blink;
        RefCount = _InterlockedIncrement((volatile signed __int32 *)&i[-56].Flink + 1);
        if ( SLOBYTE(i[-55].Flink) < 0 )
        {
          Blink = (FxTagTracker *)i[-60].Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x65776F70,
              1478,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              RefCount);
        }
      }
    }
  }
  else
  {
    for ( j = p_m_IoQueueListHead->Flink; j != p_m_IoQueueListHead; j = j->Flink )
      GetIoQueueList_ProcessQueueListEntry(j, SListHead, ListType);
  }
}
