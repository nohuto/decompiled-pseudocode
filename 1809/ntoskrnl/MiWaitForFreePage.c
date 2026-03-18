/*
 * XREFs of MiWaitForFreePage @ 0x1402CB3A4
 * Callers:
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiGetSystemPage @ 0x1400935E4 (MiGetSystemPage.c)
 *     MiAllocateKernelStackPages @ 0x1400B5640 (MiAllocateKernelStackPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140108F9C (MmAllocateIndependentPagesEx.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4268 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1402AF540 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1402B6C24 (MiSplitDirectMapPage.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402C97E0 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB11C (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateDriverPage @ 0x140653A34 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406D1BEC (MiAllocateTopLevelPage.c)
 *     MiFillPerSessionProtos @ 0x14085C41C (MiFillPerSessionProtos.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiObtainFreePages @ 0x1402B3194 (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x1402C0420 (MiNoPagesLastChance.c)
 */

__int64 __fastcall MiWaitForFreePage(_QWORD *a1)
{
  KSPIN_LOCK *v1; // r15
  int v3; // r8d
  unsigned __int64 v4; // r14
  struct _KEVENT *v5; // rbx
  volatile LONG Lock; // ebp
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v9; // bl
  struct _KPRCB *v10; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v13[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v14; // [rsp+58h] [rbp-90h]

  v1 = a1 + 608;
  v3 = -(*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2);
  v4 = v3 != 0 ? 34 : 160;
  v5 = (struct _KEVENT *)((char *)a1 + (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 4904);
  KeAcquireInStackQueuedSpinLock(a1 + 608, &LockHandle);
  Lock = v5[1].Header.Lock;
  while ( !(unsigned int)MiSufficientAvailablePages((__int64)a1, v4) )
  {
    KeResetEvent(v5);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    MiObtainFreePages((__int64)a1);
    if ( a1[52] )
    {
      v14 = a1[21];
      VslpEnterIumSecureMode(2u, 236LL, 0, (__int64)v13);
    }
    if ( KeWaitForSingleObject(v5, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiNoPagesTimeout) == 258
      && Lock == v5[1].Header.LockNV )
    {
      MiNoPagesLastChance((__int64)a1, v4);
    }
    Lock = v5[1].Header.Lock;
    KeAcquireInStackQueuedSpinLock(v1, &LockHandle);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
