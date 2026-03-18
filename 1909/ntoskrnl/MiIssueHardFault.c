/*
 * XREFs of MiIssueHardFault @ 0x140007190
 * Callers:
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140006B24 (MiIssueHardFaultIo.c)
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     MiUnlockFaultPageTable @ 0x1400070F4 (MiUnlockFaultPageTable.c)
 *     MiGetSessionIdForVa @ 0x140007144 (MiGetSessionIdForVa.c)
 *     MiReferenceInPageFile @ 0x140009B08 (MiReferenceInPageFile.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiLockPageAndSetDirty @ 0x14005D304 (MiLockPageAndSetDirty.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPagingFileOffset @ 0x140076424 (MiGetPagingFileOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 *     MiMakeTransitionPteValid @ 0x1400CBA2C (MiMakeTransitionPteValid.c)
 *     MiRelockFaultState @ 0x1400CBD60 (MiRelockFaultState.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14011A8B8 (MiOkToSetPteDirtyForNotValidFault.c)
 *     PfHardFaultRecord @ 0x14011CE7C (PfHardFaultRecord.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1401583B8 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rcx
  __int64 v8; // r13
  unsigned int v9; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD *v13; // rsi
  __int64 v14; // r15
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 v20; // al
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rcx
  unsigned __int64 v25; // r15
  __int64 v26; // rsi
  __int64 result; // rax
  int v28; // edi
  __int64 v29; // r12
  _QWORD *v30; // rbx
  unsigned __int64 v31; // rcx
  ULONG_PTR *v32; // rdx
  ULONG_PTR *v33; // rax
  unsigned __int64 v34; // rcx
  __int64 TransitionPteValid; // rbx
  __int64 v36; // rdx
  __int64 v37; // r9
  _BYTE *v38; // r8
  int v39; // edx
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int8 CurrentIrql; // al
  bool v49; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v51; // r10
  __int64 v53; // [rsp+0h] [rbp-70h]
  _BYTE v54[16]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v55; // [rsp+50h] [rbp-20h]
  unsigned __int64 v56; // [rsp+60h] [rbp-10h]
  unsigned __int8 v57; // [rsp+70h] [rbp+0h]
  unsigned __int8 v58; // [rsp+71h] [rbp+1h]
  __int64 v59; // [rsp+78h] [rbp+8h] BYREF
  __int64 v60; // [rsp+80h] [rbp+10h]
  _BYTE *v61; // [rsp+88h] [rbp+18h] BYREF
  __int64 v62; // [rsp+90h] [rbp+20h]
  __int64 v63; // [rsp+98h] [rbp+28h]

  v4 = *(_QWORD *)(a2 + 208);
  v6 = *(_QWORD *)a1;
  v8 = *(_QWORD *)(a2 + 152);
  v9 = 0;
  *(_QWORD *)(a2 + 224) = v6;
  v59 = v4;
  SessionIdForVa = MiGetSessionIdForVa(v6, a2, a3, a4);
  v11 = MiReferenceInPageFile(a2, SessionIdForVa);
  v12 = *(_QWORD *)(a1 + 56);
  v13 = (_QWORD *)(a1 + 56);
  v14 = v11;
  v62 = a1 + 56;
  v63 = *(_QWORD *)(a1 + 72);
  MiUnlockFaultPageTable((__int64 *)(a1 + 56));
  v16 = *(unsigned __int8 *)(a1 + 69);
  v15 = (v16 & 1) == 0;
  LOBYTE(v16) = 1;
  v57 = *(_BYTE *)(a1 + 68);
  v58 = v57;
  if ( v15 )
    MiUnlockWorkingSetShared(v12, v16);
  else
    MiUnlockWorkingSetExclusive(v12, v16);
  v60 = *(_QWORD *)(a1 + 16);
  if ( v14 )
  {
    v18 = v59;
    *(_QWORD *)(a2 + 200) = v14;
    if ( (*(_BYTE *)(v18 + 56) & 0x20) != 0 )
      v9 = 1;
  }
  v19 = *(_QWORD *)(a1 + 16);
  if ( (v19 & 1) == 0 || *(_BYTE *)(v19 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v8 + 1774);
  if ( (*(_BYTE *)(*v13 + 184LL) & 7) != 0 )
    --*(_WORD *)(v8 + 486);
  else
    --*(_WORD *)(v8 + 484);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v49 = CurrentIrql < 2u;
    v20 = v57;
    if ( !v49 && v57 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v17);
      v20 = v58;
    }
  }
  else
  {
    v20 = v57;
  }
  __writecr8(v20);
  v21 = *(unsigned int *)(a2 + 312);
  v22 = 0xFFFFFA8000000000uLL;
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    MiZeroPhysicalPage(*(_QWORD *)(a2
                                 + 8LL
                                 * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                                 + 312));
    v21 = *(unsigned int *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v21;
  v61 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v9 = 2;
  }
  else
  {
    v23 = *(_DWORD *)(a2 + 192);
    if ( (v23 & 0x200108) != 0x200008 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140503754 & 1) != 0) && (v23 & 0x100) == 0 && (v23 & 8) == 0 )
      {
        v42 = *(_QWORD *)(a2 + 96);
        v43 = *(_QWORD *)(a2 + 224);
        v53 = *(_QWORD *)(a2 + 200);
        v61 = v54;
        PfHardFaultRecord((unsigned int)v54, v42, v21, v43, v53, v8);
      }
      if ( (*(_BYTE *)(*v13 + 187LL) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(*v13, v17) + 32) )
        KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
      v9 |= 2u;
      MiIssueHardFaultIo(a2, v9 & 1, *(_QWORD *)(a1 + 16));
    }
  }
  v24 = *(_QWORD *)(a1 + 16);
  if ( (v24 & 1) != 0 )
  {
    v31 = v24 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v31 == 1 )
    {
      v32 = (ULONG_PTR *)*(unsigned __int8 *)(*v13 + 184LL);
      if ( ((unsigned __int8)v32 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * (unsigned __int8)v32 - 2)) & 6;
      if ( v9 < 2 )
      {
        v32 = *(ULONG_PTR **)(v31 + 64);
        if ( *v32 == v31 + 56 )
        {
          *(_QWORD *)a2 = v31 + 56;
          *(_QWORD *)(a2 + 8) = v32;
          *v32 = a2;
          *(_QWORD *)(v31 + 64) = a2;
          *(_QWORD *)(v31 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_43;
        }
      }
      else
      {
        v33 = *(ULONG_PTR **)(v31 + 48);
        v34 = v31 + 40;
        if ( *v33 == v34 )
        {
          *(_QWORD *)a2 = v34;
          *(_QWORD *)(a2 + 8) = v33;
          *v33 = a2;
          *(_QWORD *)(v34 + 8) = a2;
LABEL_43:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*v13 + 184LL) & 7) != 0 )
            KiLeaveGuardedRegionUnsafe(v8, v32, v21, v22);
          else
            KeLeaveCriticalRegionThread(v8, v32, v21, v22);
          MiRelockFaultState(a1 + 56, v63);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v25 = *(_QWORD *)(a2 + 248);
  v26 = *(_QWORD *)(a2 + 232);
  if ( *(__int64 *)(v25 + 8) >= 0 )
    v25 = 0LL;
  MiWaitForInPageComplete(a1, a2, (unsigned int *)&v61);
  result = MiFinishHardFault(a1, v63, a2, &v59);
  --*(_BYTE *)(v8 + 1774);
  v28 = result;
  if ( !(_DWORD)result )
  {
    if ( !v25 )
      v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v59) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v29 = *(_DWORD *)(a1 + 8) & 2;
    if ( (*(_QWORD *)(v25 + 40) & 0x200000000000000LL) != 0 )
    {
      v26 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v28 = MiCompleteProtoPteFault(a1, v59, v29, 0, v60);
      if ( v28 >= 0 )
      {
        v30 = (_QWORD *)v62;
LABEL_25:
        if ( dword_140466068
          && (_DWORD)v61 != 2
          && (unsigned int)MiGetEffectivePagePriorityThread(v8) >= dword_14046606C )
        {
          MiLogPageAccess(*v30, v26 | 1);
        }
        if ( !v28 )
          return 276;
      }
      return (unsigned int)v28;
    }
    v62 = v60 & 1;
    if ( (v60 & 1) != 0 && *(_BYTE *)(v60 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v44 = MI_READ_PTE_LOCK_FREE(v26);
      if ( !(unsigned int)MiPteInShadowRange(v26, v45, v46, v44 & 0xFFFFFFFFFFFFFC1FuLL | 0x80) )
      {
LABEL_69:
        *(_QWORD *)v26 = v47;
        goto LABEL_47;
      }
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v47 & 1) != 0 )
        {
          v47 |= v51;
        }
        goto LABEL_69;
      }
      if ( !HIBYTE(word_1404658EC) && (v47 & 1) != 0 )
        v47 |= v51;
      *(_QWORD *)v26 = v47;
      MiWritePteShadow(v26, v47);
    }
LABEL_47:
    TransitionPteValid = MiMakeTransitionPteValid(v26);
    if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v25 + 16) )
      TransitionPteValid |= 0x40uLL;
    if ( v29 )
    {
      if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *(_QWORD *)a1) )
      {
        if ( (TransitionPteValid & 0x800) != 0 )
        {
          TransitionPteValid |= 0x42uLL;
          if ( (*(_BYTE *)(v25 + 34) & 0x10) == 0 )
          {
            if ( (unsigned int)MiGetPagingFileOffset(v25 + 16) )
              MiLockPageAndSetDirty(v25, 1LL);
          }
        }
      }
    }
    v38 = (_BYTE *)(v60 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( !v62 )
      goto LABEL_51;
    if ( *v38 != 4 )
    {
      if ( *v38 == 5 )
      {
        v40 = v60 & 0xFFFFFFFFFFFFFFFEuLL;
        v39 = 0;
LABEL_52:
        if ( v62 && *v38 == 3 )
          v39 = 1;
        v56 = v40;
        v41 = *(_QWORD *)(a1 + 56);
        v55 = TransitionPteValid;
        v30 = (_QWORD *)(a1 + 56);
        if ( (unsigned int)MiAllocateWsle(v41, v26, v25, 0, v55, v39, v56) )
          goto LABEL_25;
        MiLockAndDecrementShareCount(v25, 0LL);
        return (unsigned int)-1073741801;
      }
LABEL_51:
      v39 = 0;
      v40 = 0LL;
      goto LABEL_52;
    }
    if ( (unsigned int)MiPteInShadowRange(v26, v36, v38, v37) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_1404658EC) && (TransitionPteValid & 1) != 0 )
          TransitionPteValid |= 0x8000000000000000uLL;
        *(_QWORD *)v26 = TransitionPteValid;
        MiWritePteShadow(v26, TransitionPteValid);
        return 276LL;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (TransitionPteValid & 1) != 0 )
      {
        TransitionPteValid |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v26 = TransitionPteValid;
    return 276LL;
  }
  return result;
}
