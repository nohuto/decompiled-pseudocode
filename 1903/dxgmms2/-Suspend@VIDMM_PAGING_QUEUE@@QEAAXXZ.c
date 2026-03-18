/*
 * XREFs of ?Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C007C7C4
 * Callers:
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007C71C (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C007C84C (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Suspend(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 128, 0LL);
  *(_QWORD *)(v1 + 136) = KeGetCurrentThread();
  VIDMM_PAGING_QUEUE::SetStatus(this, 2LL);
  v3 = *((_QWORD *)this + 10) + 128LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
