/*
 * XREFs of MiLockStealUserVm @ 0x1400EDC94
 * Callers:
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 * Callees:
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetTopLevelPfn @ 0x140083810 (MiGetTopLevelPfn.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlockStealVm @ 0x1400ECDE4 (MiUnlockStealVm.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400EE098 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiPrepareAttachThread @ 0x1400EEABC (MiPrepareAttachThread.c)
 *     MiSmallVaStillMapsFrame @ 0x140134AC4 (MiSmallVaStillMapsFrame.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadActive @ 0x1402C61E0 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 BugCheckParameter2, unsigned __int8 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r14
  BOOL v8; // r13d
  unsigned int v9; // edi
  __int64 TopLevelPfn; // rax
  ULONG_PTR v11; // r15
  __int64 v12; // r12
  __int64 v13; // rcx
  char v14; // al
  unsigned __int64 Address; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r14
  LONG *SharedVm; // rbx
  unsigned __int64 valid; // rax
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+28h] [rbp-80h] BYREF
  volatile signed __int64 *v30[3]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v31[12]; // [rsp+48h] [rbp-60h] BYREF
  int v32; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v34; // [rsp+C8h] [rbp+20h] BYREF

  v7 = (__int64)(a3 << 25) >> 16;
  v8 = v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL;
  v9 = 2;
  v28 = (BugCheckParameter2 + 0x58000000000LL) / 48;
  TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
  v11 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v12 = v11 + 1280;
  if ( TopLevelPfn != BugCheckParameter2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v11 != PsIdleProcess
    && ((*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) != v28 || (*(_DWORD *)(v11 + 1740) & 0x1000) == 0) )
  {
    if ( (_KPROCESS *)v11 == KeGetCurrentThread()->ApcState.Process )
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
      if ( !(unsigned int)MiTryToAcquireExpansionLockAtDpc(v30, 0x7FFFFFFFFFFFFFFFLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_44;
      }
      v32 = MiPrepareAttachThread(v11, v11 + 1280);
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KxReleaseQueuedSpinLock(v30);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        v26 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v26);
      }
      __writecr8(a2);
      if ( !v32 )
        return 0LL;
      *(_QWORD *)(a4 + 64) = v12;
      KeForceAttachProcess(v11, a4 + 72);
    }
    v13 = v11 + 1280;
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 40) = 0LL;
    *(_QWORD *)(a4 + 24) = v12;
    if ( v8 )
    {
      *(_BYTE *)(a4 + 37) |= 1u;
      SharedVm = MiGetSharedVm(v13);
      v14 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    else
    {
      v14 = MiLockWorkingSetShared(v13);
    }
    *(_BYTE *)(a4 + 36) = v14;
    if ( (*(_DWORD *)(a4 + 8) & 8) != 0 )
    {
      v16 = 0LL;
    }
    else
    {
      Address = MiLocateAddress(v7);
      v16 = Address;
      if ( !Address )
        goto LABEL_42;
      if ( ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x15) == 0 )
      {
        if ( (*(_DWORD *)(Address + 48) & 7) != 6 )
        {
LABEL_41:
          v9 = 0;
          goto LABEL_42;
        }
        *(_DWORD *)(a4 + 8) |= 0x800u;
      }
    }
    if ( !v8 )
    {
      v34 = 0LL;
      if ( (unsigned int)MiFastLockLeafPageTable(v12, v7, 0)
        && (MiFillPteHierarchy(v7, v31), v19 = v31[v18], v20 = v31[(int)v18 - 1], v34 = v20, v19) )
      {
        v21 = a3;
      }
      else
      {
        v21 = a3;
        valid = MiLockLowestValidPageTable(v12, a3, &v34, v17);
        v20 = v34;
        v19 = valid;
      }
      *(_QWORD *)(a4 + 40) = v19;
      if ( v20 != v21 )
        goto LABEL_42;
      v29 = MI_READ_PTE_LOCK_FREE(v20);
      if ( (v29 & 1) == 0
        || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL) != v28 )
      {
        goto LABEL_42;
      }
      goto LABEL_24;
    }
    if ( (unsigned int)MiSmallVaStillMapsFrame(v7, v28) )
    {
      v21 = a3;
LABEL_24:
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0
        || MiIsPfnFileOnly(BugCheckParameter2)
        || MiIsPfnFromSlabAllocation(BugCheckParameter2) )
      {
        goto LABEL_42;
      }
      if ( ((*(_DWORD *)a4 & 0x800000) == 0
         || !v16
         || (*(_DWORD *)(v16 + 48) & 0x44000) != 0x44000
         || (unsigned int)MiClusterVadActive(v16, BugCheckParameter2, a4 + 120) != 1)
        && ((*(_DWORD *)(a4 + 8) & 0x800) == 0 || !MiRotatedToFrameBuffer(v21)) )
      {
        return 1LL;
      }
      goto LABEL_41;
    }
LABEL_42:
    MiUnlockStealVm(a4);
    return v9;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_44:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8(a2);
  return 0LL;
}
