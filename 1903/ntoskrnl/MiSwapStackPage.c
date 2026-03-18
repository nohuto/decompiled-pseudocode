/*
 * XREFs of MiSwapStackPage @ 0x1401345A4
 * Callers:
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiSetPfnTbFlushStamp @ 0x1400A3F94 (MiSetPfnTbFlushStamp.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C1880 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     KeGenericCallDpc @ 0x1400F9170 (KeGenericCallDpc.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x140134888 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x1401349EC (MiCanStealKernelStack.c)
 *     MiGetPteFromCopyList @ 0x1401379BC (MiGetPteFromCopyList.c)
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeTryToFreezeThreadStack @ 0x1402A4C38 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x1402C4108 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1402C479C (MiSwitchKstackPages.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, int a3, ULONG_PTR *a4, _DWORD *a5)
{
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  int SystemRegionType; // r13d
  int v10; // ecx
  char *AnyMultiplexedVm; // rsi
  unsigned int v12; // r14d
  __int64 v13; // rdi
  int v14; // edx
  __int64 Page; // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  unsigned __int8 v18; // r14
  unsigned int v19; // r11d
  unsigned __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int8 v23; // dl
  ULONG_PTR v24; // r15
  __int64 LeafPfnBuddy; // r13
  _QWORD *PteFromCopyList; // r14
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // r8d
  bool v31; // zf
  __int64 v32; // rdx
  int v33; // r8d
  bool v34; // zf
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // r8d
  bool v39; // zf
  unsigned __int8 v40; // bl
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KPRCB *v44; // rcx
  unsigned __int8 v45; // si
  struct _KPRCB *CurrentPrcb; // rcx
  int v47; // [rsp+38h] [rbp-51h] BYREF
  ULONG_PTR v48; // [rsp+40h] [rbp-49h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-41h]
  ULONG_PTR BugCheckParameter3[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v51; // [rsp+98h] [rbp+Fh] BYREF
  ULONG_PTR v52; // [rsp+A0h] [rbp+17h]
  __int64 v53; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v54; // [rsp+E8h] [rbp+5Fh]

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v7 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  v8 = v7 | 0x8000000000000000uLL;
  BugCheckParameter3[5] = (__int64)(v8 << 25) >> 16;
  SystemRegionType = MiGetSystemRegionType(BugCheckParameter3[5]);
  if ( SystemRegionType == 14 )
  {
    v10 = 4;
  }
  else
  {
    if ( SystemRegionType != 12 )
      return 0LL;
    v10 = 1;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v10);
  BugCheckParameter3[7] = (ULONG_PTR)AnyMultiplexedVm;
  if ( !byte_140466954 )
    return 0LL;
  v53 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v12 = 512;
  v13 = (a1 + 0x58000000000LL) / 48;
  v52 = v13;
  if ( a3 == -1 )
  {
    v14 = ((unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48, 0) << byte_140465A4D) | (((*(_QWORD *)(a1 + 40) >> 36) & 3) << byte_140465A4E);
  }
  else
  {
    v12 = 560;
    v14 = a3 & ~dword_140465AB0;
  }
  Page = MiGetPage(v53, dword_140465AB0 & v13 | v14, v12);
  v48 = Page;
  v16 = Page;
  if ( Page == -1 )
    return 0LL;
  v17 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v17, 0, 0);
  BugCheckParameter3[6] = 0LL;
  v47 = 0;
  v18 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v54 = v18;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v47);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  if ( v8 != (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL)
    || SystemRegionType != (unsigned int)MiGetSystemRegionType(BugCheckParameter3[5])
    || !(unsigned int)MiCanStealKernelStack(a1, 1LL)
    || (v20 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        !(unsigned int)MiLockPageTableInternal((__int64)AnyMultiplexedVm, v20, v19)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_85;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a2, a1, v17) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a1, v21, v22);
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = (_QWORD *)MiGetPteFromCopyList(a2, v16, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v51) == 1 )
        {
          MiCopyKstack(v17, a1, PteFromCopyList);
          MiSwitchKstackPages(v17, a1);
          *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(a1 + 34) &= 0xC7u;
          *(_BYTE *)(a1 + 35) &= ~0x20u;
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(BugCheckParameter3[5], 0, 2u);
          KiReleaseThreadStateLock(v28, v51, 0LL);
          KiReleaseThreadLockSafe(LeafPfnBuddy);
          if ( MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v30 = 1;
              if ( !HIBYTE(word_140465BEC) )
              {
                v31 = (v29 & 1) == 0;
                goto LABEL_36;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
            {
              v31 = (v29 & 1) == 0;
LABEL_36:
              if ( !v31 )
                v29 |= 0x8000000000000000uLL;
            }
          }
          *PteFromCopyList = v29;
          if ( v30 )
            MiWritePteShadow((__int64)PteFromCopyList);
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v20);
          v23 = v54;
          goto LABEL_16;
        }
LABEL_53:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v20);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v54);
        LODWORD(BugCheckParameter3[4]) = 0;
        v24 = v48;
        BugCheckParameter3[3] = (ULONG_PTR)CurrentThread;
        BugCheckParameter3[0] = v52;
        BugCheckParameter3[1] = v48;
        BugCheckParameter3[2] = (ULONG_PTR)PteFromCopyList;
        if ( LeafPfnBuddy == -16 || (struct _KTHREAD *)LeafPfnBuddy == CurrentThread )
        {
          v36 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))MiJumpStack,
                  (ULONG_PTR)BugCheckParameter3,
                  24576,
                  1,
                  0LL);
          v35 = BugCheckParameter3[4];
          if ( v36 < 0 )
            v35 = v36;
          LODWORD(BugCheckParameter3[4]) = v35;
        }
        else
        {
          KeGenericCallDpc((__int64)MiDoStackCopy, (__int64)BugCheckParameter3);
          v35 = BugCheckParameter3[4];
        }
        if ( v35 >= 0 )
        {
          *a5 = 0;
          v45 = MiLockPageInline(a1);
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(v45);
          goto LABEL_17;
        }
        if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          goto LABEL_68;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v38 = 1;
          if ( !HIBYTE(word_140465BEC) )
          {
            v39 = (v37 & 1) == 0;
            goto LABEL_66;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v39 = (v37 & 1) == 0;
LABEL_66:
          if ( !v39 )
            v37 |= 0x8000000000000000uLL;
        }
LABEL_68:
        *PteFromCopyList = v37;
        if ( v38 )
          MiWritePteShadow((__int64)PteFromCopyList);
        MiReleaseFreshPage(v17);
        if ( BugCheckParameter3[6] )
        {
          v40 = MiLockPageInline(BugCheckParameter3[6]);
          MiRemoveLockedPageChargeAndDecRef(BugCheckParameter3[6], v41, v42, v43);
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter3[6] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v40 < 2u )
          {
            v44 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v44);
          }
          __writecr8(v40);
        }
        return 0LL;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a1, 0) )
      {
        BugCheckParameter3[6] = a1;
        goto LABEL_53;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v20);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v54);
      if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
        goto LABEL_50;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v33 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
          v34 = (v32 & 1) == 0;
          goto LABEL_48;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v34 = (v32 & 1) == 0;
LABEL_48:
        if ( !v34 )
          v32 |= 0x8000000000000000uLL;
      }
LABEL_50:
      *PteFromCopyList = v32;
      if ( v33 )
        MiWritePteShadow((__int64)PteFromCopyList);
      goto LABEL_86;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v20);
LABEL_85:
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v18);
LABEL_86:
    MiReleaseFreshPage(v17);
    return 0LL;
  }
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v20);
  v23 = v18;
LABEL_16:
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v23);
  v24 = v48;
  *a5 = 1;
LABEL_17:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v24;
  return 1LL;
}
