/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x14012C090
 * Callers:
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateTimeOnLogHandles(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 i; // rdi
  int v5; // eax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v9[3]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+38h] [rbp-20h] BYREF

  v2 = MEMORY[0xFFFFF78000000320];
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v10);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 168) & 1) != 0 )
    {
      v9[0] = 0LL;
      v9[1] = (volatile signed __int64 *)(a1 + 128);
      KxAcquireQueuedSpinLock((__int64)v9, (volatile __int64 *)(a1 + 128), v3);
      v5 = *(_DWORD *)(i + 168);
      if ( (v5 & 1) != 0 )
      {
        *(_QWORD *)(i + 160) = v2;
        *(_DWORD *)(i + 168) = v5 & 0xFFFFFFFE;
      }
      KxReleaseQueuedSpinLock(v9);
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v10);
  OldIrql = v10.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
