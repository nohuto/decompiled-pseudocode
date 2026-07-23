/*
 * XREFs of MiIssueHardFault @ 0x14001BCD0
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     PfHardFaultRecord @ 0x140019E98 (PfHardFaultRecord.c)
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiIssueHardFaultIo @ 0x14001B5C8 (MiIssueHardFaultIo.c)
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiUnlockFaultPageTable @ 0x14001BC3C (MiUnlockFaultPageTable.c)
 *     MiGetSessionIdForVa @ 0x14001BC8C (MiGetSessionIdForVa.c)
 *     MiReferenceInPageFile @ 0x14001CAC8 (MiReferenceInPageFile.c)
 *     MiMakeTransitionPteValid @ 0x14002CF4C (MiMakeTransitionPteValid.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     MiLockPageAndSetDirty @ 0x140086018 (MiLockPageAndSetDirty.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14011A15C (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1401408B8 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rcx
  __int64 v6; // r13
  unsigned int v7; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rsi
  __int64 v12; // r15
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // al
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  int v21; // ecx
  __int64 v22; // rcx
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  __int64 result; // rax
  int v26; // edi
  __int64 v27; // r12
  _QWORD *v28; // rbx
  unsigned __int64 v29; // rcx
  ULONG_PTR *v30; // rdx
  ULONG_PTR *v31; // rax
  unsigned __int64 v32; // rcx
  LARGE_INTEGER v33; // rdx
  LARGE_INTEGER v34; // r9
  __int64 TransitionPteValid; // rbx
  __int64 v36; // r8
  _BYTE *v37; // rcx
  int v38; // eax
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int8 CurrentIrql; // al
  bool v45; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v47; // r10
  LARGE_INTEGER *v49; // [rsp+0h] [rbp-70h]
  LARGE_INTEGER v50[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v51; // [rsp+50h] [rbp-20h]
  unsigned __int8 v52; // [rsp+70h] [rbp+0h]
  unsigned __int8 v53; // [rsp+71h] [rbp+1h]
  __int64 v54; // [rsp+78h] [rbp+8h] BYREF
  __int64 v55; // [rsp+80h] [rbp+10h]
  LARGE_INTEGER *v56; // [rsp+88h] [rbp+18h] BYREF
  __int64 v57; // [rsp+90h] [rbp+20h]
  __int64 v58; // [rsp+98h] [rbp+28h]

  v2 = *(_QWORD *)(a2 + 208);
  v4 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a2 + 152);
  v7 = 0;
  *(_QWORD *)(a2 + 224) = v4;
  v54 = v2;
  SessionIdForVa = MiGetSessionIdForVa(v4);
  v9 = MiReferenceInPageFile(a2, SessionIdForVa);
  v10 = *(_QWORD *)(a1 + 56);
  v11 = (_QWORD *)(a1 + 56);
  v12 = v9;
  v57 = a1 + 56;
  v58 = *(_QWORD *)(a1 + 72);
  MiUnlockFaultPageTable((__int64 *)(a1 + 56));
  v14 = *(unsigned __int8 *)(a1 + 69);
  v13 = (v14 & 1) == 0;
  LOBYTE(v14) = 1;
  v52 = *(_BYTE *)(a1 + 68);
  v53 = v52;
  if ( v13 )
    MiUnlockWorkingSetShared(v10, v14);
  else
    MiUnlockWorkingSetExclusive(v10, v14);
  v55 = *(_QWORD *)(a1 + 16);
  if ( v12 )
  {
    v16 = v54;
    *(_QWORD *)(a2 + 200) = v12;
    if ( (*(_BYTE *)(v16 + 56) & 0x20) != 0 )
      v7 = 1;
  }
  v17 = *(_QWORD *)(a1 + 16);
  if ( (v17 & 1) == 0 || *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v6 + 1758);
  if ( (*(_BYTE *)(*v11 + 184LL) & 7) != 0 )
    --*(_WORD *)(v6 + 486);
  else
    --*(_WORD *)(v6 + 484);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v45 = CurrentIrql < 2u;
    v18 = v52;
    if ( !v45 && v52 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v15);
      v18 = v53;
    }
  }
  else
  {
    v18 = v52;
  }
  __writecr8(v18);
  v19 = *(unsigned int *)(a2 + 312);
  v20 = 0xFFFFFA8000000000uLL;
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    MiZeroPhysicalPage(*(_QWORD *)(a2
                                 + 8LL
                                 * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                                 + 312));
    v19 = *(unsigned int *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v19;
  v56 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v7 = 2;
  }
  else
  {
    v21 = *(_DWORD *)(a2 + 192);
    if ( (v21 & 0x200108) != 0x200008 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_1404D8614 & 1) != 0) && (v21 & 0x100) == 0 && (v21 & 8) == 0 )
      {
        v33 = *(LARGE_INTEGER *)(a2 + 96);
        v34 = *(LARGE_INTEGER *)(a2 + 224);
        v49 = *(LARGE_INTEGER **)(a2 + 200);
        v56 = v50;
        PfHardFaultRecord(v50, v33, v19, v34, v49, v6);
      }
      if ( (*(_BYTE *)(*v11 + 187LL) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(*v11, v15) + 32) )
        KiStackAttachProcess(PsInitialSystemProcess, 0LL, a2 + 104);
      v7 |= 2u;
      MiIssueHardFaultIo(a2, v7 & 1, *(_QWORD *)(a1 + 16));
    }
  }
  v22 = *(_QWORD *)(a1 + 16);
  if ( (v22 & 1) != 0 )
  {
    v29 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v29 == 1 )
    {
      v30 = (ULONG_PTR *)*(unsigned __int8 *)(*v11 + 184LL);
      if ( ((unsigned __int8)v30 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * (unsigned __int8)v30 - 2)) & 6;
      if ( v7 < 2 )
      {
        v30 = *(ULONG_PTR **)(v29 + 64);
        if ( *v30 == v29 + 56 )
        {
          *(_QWORD *)a2 = v29 + 56;
          *(_QWORD *)(a2 + 8) = v30;
          *v30 = a2;
          *(_QWORD *)(v29 + 64) = a2;
          *(_QWORD *)(v29 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_43;
        }
      }
      else
      {
        v31 = *(ULONG_PTR **)(v29 + 48);
        v32 = v29 + 40;
        if ( *v31 == v32 )
        {
          *(_QWORD *)a2 = v32;
          *(_QWORD *)(a2 + 8) = v31;
          *v31 = a2;
          *(_QWORD *)(v32 + 8) = a2;
LABEL_43:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*v11 + 184LL) & 7) != 0 )
            KiLeaveGuardedRegionUnsafe(v6);
          else
            KeLeaveCriticalRegionThread(v6, v30, v19, v20);
          MiRelockFaultState(a1 + 56, v58);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v23 = *(_QWORD *)(a2 + 248);
  v24 = *(_QWORD *)(a2 + 232);
  if ( *(__int64 *)(v23 + 8) >= 0 )
    v23 = 0LL;
  MiWaitForInPageComplete(a1, a2, (int *)&v56);
  result = MiFinishHardFault(a1, v58, a2, &v54);
  --*(_BYTE *)(v6 + 1758);
  v26 = result;
  if ( !(_DWORD)result )
  {
    if ( !v23 )
      v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v27 = *(_DWORD *)(a1 + 8) & 2;
    if ( (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) != 0 )
    {
      v24 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = MiCompleteProtoPteFault(a1, v54, v27, 0, v55);
      if ( v26 >= 0 )
      {
        v28 = (_QWORD *)v57;
LABEL_25:
        if ( dword_14043B9A8
          && (_DWORD)v56 != 2
          && (unsigned int)MiGetEffectivePagePriorityThread(v6) >= dword_14043B9AC )
        {
          MiLogPageAccess(*v28, v24 | 1);
        }
        if ( !v26 )
          return 276;
      }
      return (unsigned int)v26;
    }
    v57 = v55 & 1;
    if ( (v55 & 1) != 0 && *(_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      MI_READ_PTE_LOCK_FREE(v24);
      if ( !(unsigned int)MiPteInShadowRange(v24, v41, v42) )
      {
LABEL_70:
        *(_QWORD *)v24 = v43;
        goto LABEL_55;
      }
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v43 & 1) != 0 )
        {
          v43 |= v47;
        }
        goto LABEL_70;
      }
      if ( !HIBYTE(word_14043B26C) && (v43 & 1) != 0 )
        v43 |= v47;
      *(_QWORD *)v24 = v43;
      MiWritePteShadow(v24);
    }
LABEL_55:
    TransitionPteValid = MiMakeTransitionPteValid(v24);
    if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v23 + 16) )
      TransitionPteValid |= 0x40uLL;
    if ( v27 )
    {
      if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *(_QWORD *)a1) )
      {
        if ( (TransitionPteValid & 0x800) != 0 )
        {
          TransitionPteValid |= 0x42uLL;
          if ( (*(_BYTE *)(v23 + 34) & 0x10) == 0 )
          {
            if ( (unsigned int)MiGetPagingFileOffset(v23 + 16) )
              MiLockPageAndSetDirty(v23, 1LL);
          }
        }
      }
    }
    v37 = (_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( !v57 )
    {
      v37 = (_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL);
      goto LABEL_60;
    }
    if ( *v37 != 4 )
    {
      if ( *v37 == 5 )
      {
        v39 = v55 & 0xFFFFFFFFFFFFFFFEuLL;
        v38 = 0;
LABEL_61:
        if ( v57 && *v37 == 3 )
          v38 = 1;
        v40 = *(_QWORD *)(a1 + 56);
        v51 = TransitionPteValid;
        v28 = (_QWORD *)(a1 + 56);
        if ( (unsigned int)MiAllocateWsle(v40, v24, v23, 0, v51, v38, v39) )
          goto LABEL_25;
        MiLockAndDecrementShareCount(v23, 0LL);
        return (unsigned int)-1073741801;
      }
LABEL_60:
      v38 = 0;
      v39 = 0LL;
      goto LABEL_61;
    }
    if ( (unsigned int)MiPteInShadowRange(v24, v57, v36) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_14043B26C) && (TransitionPteValid & 1) != 0 )
          TransitionPteValid |= 0x8000000000000000uLL;
        *(_QWORD *)v24 = TransitionPteValid;
        MiWritePteShadow(v24);
        return 276LL;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (TransitionPteValid & 1) != 0 )
      {
        TransitionPteValid |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v24 = TransitionPteValid;
    return 276LL;
  }
  return result;
}
