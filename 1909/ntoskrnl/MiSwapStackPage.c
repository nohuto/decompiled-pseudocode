/*
 * XREFs of MiSwapStackPage @ 0x140134EA4
 * Callers:
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x14000FFF0 (KiReleaseThreadStateLock.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiSetPfnTbFlushStamp @ 0x140096DC4 (MiSetPfnTbFlushStamp.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400A1700 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     KeGenericCallDpc @ 0x1400FCC10 (KeGenericCallDpc.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiSwapStackPageNoDpc @ 0x140135188 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x1401352EC (MiCanStealKernelStack.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     MiGetLeafPfnBuddy @ 0x14013D5BC (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeTryToFreezeThreadStack @ 0x1402A4998 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x1402C3E68 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1402C44FC (MiSwitchKstackPages.c)
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
  struct _KPRCB *v41; // rcx
  unsigned __int8 v42; // si
  struct _KPRCB *CurrentPrcb; // rcx
  int v44; // [rsp+38h] [rbp-51h] BYREF
  ULONG_PTR v45; // [rsp+40h] [rbp-49h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-41h]
  ULONG_PTR BugCheckParameter3[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v48; // [rsp+98h] [rbp+Fh] BYREF
  ULONG_PTR v49; // [rsp+A0h] [rbp+17h]
  __int64 v50; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v51; // [rsp+E8h] [rbp+5Fh]

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
  if ( !byte_140466654 )
    return 0LL;
  v50 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v12 = 512;
  v13 = (a1 + 0x58000000000LL) / 48;
  v49 = v13;
  if ( a3 == -1 )
  {
    v14 = ((unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48, 0) << byte_14046574D) | (((*(_QWORD *)(a1 + 40) >> 36) & 3) << byte_14046574E);
  }
  else
  {
    v12 = 560;
    v14 = a3 & ~dword_1404657B0;
  }
  Page = MiGetPage(v50, dword_1404657B0 & v13 | v14, v12);
  v45 = Page;
  v16 = Page;
  if ( Page == -1 )
    return 0LL;
  v17 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v17, 0, 0);
  BugCheckParameter3[6] = 0LL;
  v44 = 0;
  v18 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v51 = v18;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v44);
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
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v48) == 1 )
        {
          MiCopyKstack(v17, a1, PteFromCopyList);
          MiSwitchKstackPages(v17, a1);
          *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(a1 + 34) &= 0xC7u;
          *(_BYTE *)(a1 + 35) &= ~0x20u;
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(BugCheckParameter3[5], 0, 2u);
          KiReleaseThreadStateLock(v28, v48, 0LL);
          KiReleaseThreadLockSafe(LeafPfnBuddy);
          if ( MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v30 = 1;
              if ( !HIBYTE(word_1404658EC) )
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
          v23 = v51;
          goto LABEL_16;
        }
LABEL_53:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v20);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v51);
        LODWORD(BugCheckParameter3[4]) = 0;
        v24 = v45;
        BugCheckParameter3[3] = (ULONG_PTR)CurrentThread;
        BugCheckParameter3[0] = v49;
        BugCheckParameter3[1] = v45;
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
          v42 = MiLockPageInline(a1);
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v42 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(v42);
          goto LABEL_17;
        }
        if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          goto LABEL_68;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v38 = 1;
          if ( !HIBYTE(word_1404658EC) )
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
          MiRemoveLockedPageChargeAndDecRef(BugCheckParameter3[6]);
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter3[6] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v40 < 2u )
          {
            v41 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v41);
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
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v51);
      if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
        goto LABEL_50;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v33 = 1;
        if ( !HIBYTE(word_1404658EC) )
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
  v24 = v45;
  *a5 = 1;
LABEL_17:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v24;
  return 1LL;
}
