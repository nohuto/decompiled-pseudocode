/*
 * XREFs of MiLockStealUserVm @ 0x1400E22B4
 * Callers:
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiFillPteHierarchy @ 0x14005F010 (MiFillPteHierarchy.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14008E884 (KeForceAttachProcess.c)
 *     MiUnlockStealVm @ 0x1400A1594 (MiUnlockStealVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiRotatedToFrameBuffer @ 0x1400E0420 (MiRotatedToFrameBuffer.c)
 *     MiGetTopLevelPfn @ 0x1400E2680 (MiGetTopLevelPfn.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400E27C8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiPrepareAttachThread @ 0x1400E2AA4 (MiPrepareAttachThread.c)
 *     MiVadPagesTradable @ 0x1400E2B14 (MiVadPagesTradable.c)
 *     MiSmallVaStillMapsFrame @ 0x140139038 (MiSmallVaStillMapsFrame.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiClusterVadActive @ 0x1402E06E8 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r15
  unsigned int v8; // edi
  __int64 TopLevelPfn; // rax
  ULONG_PTR v10; // r13
  __int64 v11; // r12
  __int64 v12; // rcx
  char v13; // al
  unsigned __int64 Address; // rax
  unsigned __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r13
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rax
  LONG *SharedVm; // rbx
  unsigned __int64 valid; // rax
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v28; // ecx
  unsigned __int64 v29; // [rsp+20h] [rbp-50h] BYREF
  __int64 v30; // [rsp+28h] [rbp-48h]
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v33[4]; // [rsp+50h] [rbp-20h] BYREF
  BOOL v34; // [rsp+B0h] [rbp+40h]
  int v36; // [rsp+C8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = (__int64)(a3 << 25) >> 16;
  v34 = v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL;
  v8 = 2;
  v30 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
  v10 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v11 = v10 + 1280;
  if ( TopLevelPfn != BugCheckParameter2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v10 == PsIdleProcess
    || (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v30 && (*(_DWORD *)(v10 + 1788) & 0x1000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_41;
  }
  if ( (_KPROCESS *)v10 == KeGetCurrentThread()->ApcState.Process )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a2);
  }
  else
  {
    if ( !(unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle, 0x7FFFFFFFFFFFFFFFLL) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_41:
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        v25 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v25);
      }
      __writecr8(a2);
      return 0LL;
    }
    v36 = MiPrepareAttachThread(v10, v10 + 1280);
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(a2);
    if ( !v36 )
      return 0LL;
    *(_QWORD *)(a4 + 64) = v11;
    KeForceAttachProcess(v10, a4 + 72);
  }
  *(_QWORD *)(a4 + 32) = 0LL;
  v12 = v10 + 1280;
  *(_QWORD *)(a4 + 40) = 0LL;
  *(_QWORD *)(a4 + 24) = v11;
  if ( v34 )
  {
    *(_BYTE *)(a4 + 37) |= 1u;
    SharedVm = MiGetSharedVm(v12);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    v13 = MiLockWorkingSetShared(v12);
  }
  *(_BYTE *)(a4 + 36) = v13;
  if ( (*(_DWORD *)(a4 + 8) & 8) != 0 )
  {
    v15 = 0LL;
  }
  else
  {
    Address = MiLocateAddress(v7);
    v15 = Address;
    if ( !Address )
      goto LABEL_60;
    if ( !(unsigned int)MiVadPagesTradable(Address) )
    {
      if ( (*(_BYTE *)(v15 + 48) & 0x70) != 0x40 )
      {
LABEL_59:
        v8 = 0;
        goto LABEL_60;
      }
      *(_DWORD *)(a4 + 8) |= 0x800u;
    }
  }
  if ( !v34 )
  {
    v29 = 0LL;
    v16 = MiFastLockLeafPageTable(v11, v7, 0);
    v17 = v16;
    if ( v16
      && (memset(v33, 0, sizeof(v33)),
          MiFillPteHierarchy(v7, v33),
          v18 = v33[v17],
          v19 = v33[(int)v17 - 1],
          v29 = v19,
          v18) )
    {
      v20 = a3;
    }
    else
    {
      v20 = a3;
      valid = MiLockLowestValidPageTable(v11, a3, &v29);
      v19 = v29;
      v18 = valid;
    }
    *(_QWORD *)(a4 + 40) = v18;
    if ( v19 != v20 )
      goto LABEL_60;
    v31 = MI_READ_PTE_LOCK_FREE(v19);
    if ( (v31 & 1) == 0 )
      goto LABEL_60;
    v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31);
    if ( ((v21 >> 12) & 0xFFFFFFFFFLL) != v30 )
      goto LABEL_60;
    goto LABEL_24;
  }
  if ( (unsigned int)MiSmallVaStillMapsFrame(v7, v30) )
  {
    v20 = a3;
LABEL_24:
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0
      || MiIsPfnFileOnly(BugCheckParameter2)
      || MiIsPfnFromSlabAllocation(BugCheckParameter2) )
    {
      goto LABEL_60;
    }
    if ( (*(_DWORD *)a4 & 0x800000) == 0
      || !v15
      || (v28 = *(_DWORD *)(v15 + 48), MiVadPageSizes[(v28 >> 18) & 3] != 16)
      || (v28 & 0x100000) == 0
      || (unsigned int)MiClusterVadActive(v15, BugCheckParameter2, a4 + 120) != 1 )
    {
      if ( (*(_DWORD *)(a4 + 8) & 0x800) == 0 || !MiRotatedToFrameBuffer(v20) )
        return 1LL;
    }
    goto LABEL_59;
  }
LABEL_60:
  MiUnlockStealVm(a4);
  return v8;
}
