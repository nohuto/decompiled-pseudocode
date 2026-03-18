/*
 * XREFs of PopGetDope @ 0x140176860
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1400B42E0 (PoRegisterDeviceForIdleDetection.c)
 *     PoVolumeDevice @ 0x1407393C4 (PoVolumeDevice.c)
 *     PopAssociateThermalRequest @ 0x14075AB90 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408A3BB8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408A3D98 (PopOrphanCoolingExtension.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetDope(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rbx
  KIRQL v5; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *(_QWORD *)(a1 + 312);
  if ( !*(_QWORD *)(v1 + 24) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x45504F44u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x60uLL);
      v4[3] = a1;
      v4[5] = v4 + 4;
      v4[4] = v4 + 4;
      v5 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      KxReleaseSpinLock(&PopDopeGlobalLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v5);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
