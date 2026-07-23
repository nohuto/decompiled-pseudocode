/*
 * XREFs of CcNotifyExternalCaches @ 0x140166F3C
 * Callers:
 *     CcQueueLazyWriteScanThread @ 0x140183980 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcCalculatePagesToWrite @ 0x1400D7774 (CcCalculatePagesToWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcNotifyExternalCaches(unsigned int a1)
{
  __int64 v2; // rbx
  KIRQL v3; // si
  __int64 v4; // r8
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  unsigned __int64 v7; // rdi
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)PspSystemPartition + 1);
  v12[0] = 0LL;
  v12[1] = (volatile signed __int64 *)(v2 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  KxAcquireQueuedSpinLock((__int64)v12, (volatile __int64 *)(v2 + 128), v4);
  v5 = (_QWORD *)(v2 + 600);
  v6 = CcCalculatePagesToWrite(v2, a1, v2 + 600, (unsigned __int64 *)(v2 + 624), 0);
  if ( v6 == 0xFFFFFFFFLL )
  {
    LODWORD(v7) = 100;
  }
  else if ( *v5 )
  {
    v7 = 100 * (unsigned __int64)v6 / *v5;
  }
  else
  {
    LODWORD(v7) = 0;
  }
  KxReleaseQueuedSpinLock(v12);
  if ( (_DWORD)v7 )
  {
    for ( i = (__int64 *)CcExternalCacheList; i != &CcExternalCacheList; i = (__int64 *)*i )
    {
      v10 = *(i - 3);
      if ( v10 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v10 * (unsigned __int64)(unsigned int)v7 / 0x64,
          a1);
    }
  }
  KxReleaseSpinLock(&CcExternalCacheListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
