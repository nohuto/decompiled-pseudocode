/*
 * XREFs of CiThreadCleanup @ 0x1C000A630
 * Callers:
 *     CiThreadNotification @ 0x1C0001010 (CiThreadNotification.c)
 *     CiDispatchCleanup @ 0x1C000A5C0 (CiDispatchCleanup.c)
 *     CiThreadCreate @ 0x1C000AE70 (CiThreadCreate.c)
 * Callees:
 *     CiDecrementTotalThreadCount @ 0x1C0001140 (CiDecrementTotalThreadCount.c)
 *     CiTaskIndexDereference @ 0x1C0001150 (CiTaskIndexDereference.c)
 *     CiSchedulerRemoveThread @ 0x1C00011E0 (CiSchedulerRemoveThread.c)
 *     CiThreadRemoveFromTree @ 0x1C00012A0 (CiThreadRemoveFromTree.c)
 *     CiLogThreadLeave @ 0x1C0004404 (CiLogThreadLeave.c)
 *     CiProcessDereference @ 0x1C000A7C0 (CiProcessDereference.c)
 *     CiProcessRemoveThread @ 0x1C000A8C0 (CiProcessRemoveThread.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000A950 (CiThreadDecrementScheduledCount.c)
 */

void __fastcall CiThreadCleanup(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  volatile signed __int32 *v2; // rsi
  struct _KTHREAD *v3; // rdi
  char v5; // al
  __int64 ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
    *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
    v5 = *(_BYTE *)(a1 + 148);
    if ( (v5 & 2) == 0 )
    {
      v2 = *(volatile signed __int32 **)(a1 + 128);
      v1 = *(volatile signed __int64 **)(a1 + 72);
      *(_BYTE *)(a1 + 148) = v5 | 2;
      CiDecrementTotalThreadCount(v2 + 23);
      v3 = *(struct _KTHREAD **)(a1 + 96);
      if ( v3 )
      {
        CiThreadRemoveFromTree(a1);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 3LL) & 1) != 0 )
          CiSchedulerRemoveThread((_QWORD *)a1);
        CiProcessRemoveThread(a1);
        if ( (*(_BYTE *)(a1 + 148) & 1) == 0 )
          CiThreadDecrementScheduledCount(a1);
        KeSetBasePriorityThread(v3, *(_DWORD *)(a1 + 144));
        KeSetPriorityThread(v3, *(_DWORD *)(a1 + 108));
        ThreadInformation = *(_QWORD *)(a1 + 136);
        if ( v3 == KeGetCurrentThread() )
          ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &ThreadInformation, 8u);
        if ( byte_1C00072E8 )
          CiLogThreadLeave(a1);
      }
      CiDecrementTotalThreadCount(&CiTotalThreads);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v2 )
      CiProcessDereference((PVOID)v2);
    if ( v1 )
      CiTaskIndexDereference(v1);
  }
}
