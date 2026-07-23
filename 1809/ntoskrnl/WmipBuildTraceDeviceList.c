/*
 * XREFs of WmipBuildTraceDeviceList @ 0x14018C64C
 * Callers:
 *     WmiTraceRundownNotify @ 0x140754DEC (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1408B5650 (WmiSetNetworkNotify.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     WmipFreeTraceDeviceList @ 0x140754E8C (WmipFreeTraceDeviceList.c)
 */

__int64 __fastcall WmipBuildTraceDeviceList(int a1, _QWORD *a2, unsigned int *a3)
{
  void *v6; // rdi
  KIRQL v7; // al
  unsigned int v8; // ebp
  KIRQL v9; // si
  PVOID PoolWithTag; // rax
  _UNKNOWN **v11; // rdx
  _DWORD *v12; // r8
  unsigned int v13; // ebx
  int v14; // r9d
  unsigned int v15; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx

  v6 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v8 = WmipInUseRegEntryCount;
  v9 = v7;
  if ( !WmipInUseRegEntryCount )
  {
    v15 = -1073741632;
    goto LABEL_16;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)WmipInUseRegEntryCount, 0x70696D57u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
LABEL_16:
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    KeReleaseMutex(&WmipSMMutex, 0);
    goto LABEL_27;
  }
  v11 = (_UNKNOWN **)WmipInUseRegEntryHead;
  v12 = PoolWithTag;
  v13 = 0;
  while ( v11 != &WmipInUseRegEntryHead )
  {
    v14 = (*((int *)v11 + 12) >> 4) & 0xF00000;
    if ( (v14 & a1) != 0 && ((_DWORD)v11[6] & 0x40000000) != 0 && v11[2] && v13 < v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 12);
      *(_QWORD *)v12 = v11;
      v12[2] = v14;
      v12 += 4;
      ++v13;
    }
    v11 = (_UNKNOWN **)*v11;
  }
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(v9);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( v13 )
  {
    *a3 = v13;
    v15 = 0;
    *a2 = v6;
    return v15;
  }
  v15 = -1073741632;
LABEL_27:
  if ( v6 )
    WmipFreeTraceDeviceList(v6);
  return v15;
}
