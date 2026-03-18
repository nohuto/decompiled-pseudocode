/*
 * XREFs of MiWaitForFreePage @ 0x1402E5A00
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiGetSystemPage @ 0x1400A2AB8 (MiGetSystemPage.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1402CCFA8 (MiSplitDirectMapPage.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3C34 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateDriverPage @ 0x14066D148 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x14068D6D8 (MiAllocateTopLevelPage.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiObtainFreePages @ 0x1402C86F4 (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 */

__int64 __fastcall MiWaitForFreePage(_QWORD *a1)
{
  KSPIN_LOCK *v2; // r12
  int v3; // edx
  unsigned __int64 v4; // r15
  struct _KEVENT *v5; // rbx
  volatile LONG Lock; // r14d
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v9; // bl
  struct _KPRCB *v10; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v13[14]; // [rsp+50h] [rbp-49h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1 + 608;
  v3 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2;
  v4 = v3 != 0 ? 34 : 160;
  v5 = (struct _KEVENT *)((char *)a1 + (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 4904);
  KeAcquireInStackQueuedSpinLock(a1 + 608, &LockHandle);
  Lock = v5[1].Header.Lock;
  while ( !(unsigned int)MiSufficientAvailablePages((__int64)a1, v4) )
  {
    KeResetEvent(v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    MiObtainFreePages((__int64)a1);
    if ( a1[53] )
    {
      memset(v13, 0, 0x68uLL);
      v13[1] = a1[21];
      VslpEnterIumSecureMode(2, 253LL, 0LL, (__int64)v13);
    }
    if ( KeWaitForSingleObject(v5, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiNoPagesTimeout) == 258
      && Lock == v5[1].Header.LockNV )
    {
      MiNoPagesLastChance((__int64)a1, v4);
    }
    Lock = v5[1].Header.Lock;
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  result = v9;
  __writecr8(v9);
  return result;
}
