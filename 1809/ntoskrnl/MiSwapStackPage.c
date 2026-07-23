/*
 * XREFs of MiSwapStackPage @ 0x14012D250
 * Callers:
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9AE0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCanStealKernelStack @ 0x14012D69C (MiCanStealKernelStack.c)
 *     MiSwapStackPageNoDpc @ 0x14012D744 (MiSwapStackPageNoDpc.c)
 *     MiGetPteFromCopyList @ 0x14012D8D8 (MiGetPteFromCopyList.c)
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     MiSwitchKstackPages @ 0x14015EC94 (MiSwitchKstackPages.c)
 *     MiCopyKstack @ 0x14015ED00 (MiCopyKstack.c)
 *     KeTryToFreezeThreadStack @ 0x140160F24 (KeTryToFreezeThreadStack.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4, _DWORD *a5)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  int SystemRegionType; // r13d
  int v9; // ecx
  char *AnyMultiplexedVm; // rsi
  int v11; // r8d
  unsigned __int64 v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // r15
  unsigned int v15; // eax
  int v16; // edi
  __int64 Page; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // r15
  char v23; // r11
  unsigned __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // dl
  ULONG_PTR v29; // r14
  __int64 LeafPfnBuddy; // r13
  __int64 *PteFromCopyList; // r15
  int v33; // ecx
  unsigned __int8 v34; // si
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r8d
  bool v39; // zf
  __int64 v40; // rdx
  int v41; // r8d
  bool v42; // zf
  __int64 v43; // rdx
  int v44; // r8d
  bool v45; // zf
  unsigned __int8 v46; // bl
  struct _KPRCB *v47; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v49; // [rsp+38h] [rbp-51h] BYREF
  ULONG_PTR v50; // [rsp+40h] [rbp-49h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-41h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+58h] [rbp-31h] BYREF
  int v53; // [rsp+78h] [rbp-11h]
  unsigned __int64 v54; // [rsp+80h] [rbp-9h]
  __int64 v55; // [rsp+88h] [rbp-1h]
  char *v56; // [rsp+90h] [rbp+7h]
  __int64 v57; // [rsp+98h] [rbp+Fh] BYREF
  ULONG_PTR v58; // [rsp+A0h] [rbp+17h]
  __int64 v59; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v60; // [rsp+E8h] [rbp+5Fh]

  v6 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  v7 = v6 | 0x8000000000000000uLL;
  v54 = (__int64)(v7 << 25) >> 16;
  SystemRegionType = MiGetSystemRegionType(v54);
  if ( SystemRegionType == 15 )
  {
    v9 = 4;
  }
  else
  {
    if ( SystemRegionType != 12 )
      return 0LL;
    v9 = 1;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v9);
  v56 = AnyMultiplexedVm;
  if ( !byte_14043BF94 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 40);
  v59 = *(_QWORD *)(qword_14043B808 + 8 * ((v12 >> 40) & 0x3FF));
  v13 = 512;
  v14 = (a1 + 0x58000000000LL) / 48;
  v58 = v14;
  if ( v11 == -1 )
  {
    v15 = (unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48, 0) << byte_14043B109;
    v16 = dword_14043B148 & v14 | (((v12 >> 36) & 3) << byte_14043B10A);
  }
  else
  {
    v13 = 560;
    v16 = v11 & ~dword_14043B148;
    v15 = dword_14043B148 & v14;
  }
  Page = MiGetPage(v59, v15 | v16, v13);
  v50 = Page;
  v18 = Page;
  if ( Page == -1 )
    return 0LL;
  v19 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v19, 0, 0);
  v55 = 0LL;
  v49 = 0;
  v22 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v60 = v22;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v49, v20, v21);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  if ( v7 != (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL)
    || SystemRegionType != (unsigned int)MiGetSystemRegionType(v54)
    || !(unsigned int)MiCanStealKernelStack(a1, 1LL)
    || (v24 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        !(unsigned int)MiLockPageTableInternal((__int64)AnyMultiplexedVm, v24, v23)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_36;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a2, a1, v19) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a1, v25, v26, v27);
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = (__int64 *)MiGetPteFromCopyList(a2, v18, -1LL);
      if ( (struct _KTHREAD *)LeafPfnBuddy != CurrentThread && LeafPfnBuddy != -16 )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v57) != 1 )
        {
LABEL_24:
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v24);
          MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v60);
          v53 = 0;
          v29 = v50;
          BugCheckParameter3[3] = (ULONG_PTR)CurrentThread;
          BugCheckParameter3[0] = v58;
          BugCheckParameter3[1] = v50;
          BugCheckParameter3[2] = (ULONG_PTR)PteFromCopyList;
          if ( (struct _KTHREAD *)LeafPfnBuddy == CurrentThread || LeafPfnBuddy == -16 )
          {
            v35 = KeExpandKernelStackAndCalloutInternal(
                    (void (__fastcall *)(ULONG_PTR))MiJumpStack,
                    (ULONG_PTR)BugCheckParameter3,
                    24576,
                    1,
                    0LL);
            v33 = v53;
            if ( v35 < 0 )
              v33 = v35;
            v53 = v33;
          }
          else
          {
            KeGenericCallDpc(
              (struct _SINGLE_LIST_ENTRY *)MiDoStackCopy,
              (struct _SINGLE_LIST_ENTRY *)BugCheckParameter3);
            v33 = v53;
          }
          if ( v33 >= 0 )
          {
            *a5 = 0;
            v34 = MiLockPageInline(a1);
            *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            __writecr8(v34);
            goto LABEL_17;
          }
          if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
            goto LABEL_73;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v44 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v45 = (v43 & 1) == 0;
              goto LABEL_71;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v45 = (v43 & 1) == 0;
LABEL_71:
            if ( !v45 )
              v43 |= 0x8000000000000000uLL;
          }
LABEL_73:
          *PteFromCopyList = v43;
          if ( v44 )
            MiWritePteShadow((__int64)PteFromCopyList, v43);
          MiReleaseFreshPage(v19);
          if ( v55 )
          {
            v46 = MiLockPageInline(v55);
            MiRemoveLockedPageChargeAndDecRef(v55);
            _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v46 < 2u )
            {
              v47 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v47);
            }
            __writecr8(v46);
          }
          return 0LL;
        }
        MiCopyKstack(v19, a1, PteFromCopyList);
        MiSwitchKstackPages(v19, a1);
        *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
        *(_BYTE *)(a1 + 34) &= 0xC7u;
        *(_BYTE *)(a1 + 35) &= ~0x20u;
        *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        KeFlushSingleTb(v54, 0, 2u);
        KiReleaseThreadStateLock(v36, v57, 0LL);
        KiReleaseThreadLockSafe(LeafPfnBuddy);
        if ( MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v38 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v39 = (v37 & 1) == 0;
              goto LABEL_50;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v39 = (v37 & 1) == 0;
LABEL_50:
            if ( !v39 )
              v37 |= 0x8000000000000000uLL;
          }
        }
        *PteFromCopyList = v37;
        if ( v38 )
          MiWritePteShadow((__int64)PteFromCopyList, v37);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v24);
        v28 = v60;
        goto LABEL_16;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a1, 0) )
      {
        v55 = a1;
        goto LABEL_24;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v24);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v60);
      if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
        goto LABEL_63;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v41 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v42 = (v40 & 1) == 0;
          goto LABEL_61;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v42 = (v40 & 1) == 0;
LABEL_61:
        if ( !v42 )
          v40 |= 0x8000000000000000uLL;
      }
LABEL_63:
      *PteFromCopyList = v40;
      if ( v41 )
        MiWritePteShadow((__int64)PteFromCopyList, v40);
      goto LABEL_37;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v24);
LABEL_36:
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v22);
LABEL_37:
    MiReleaseFreshPage(v19);
    return 0LL;
  }
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v24);
  v28 = v22;
LABEL_16:
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v28);
  v29 = v50;
  *a5 = 1;
LABEL_17:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v29;
  return 1LL;
}
