/*
 * XREFs of MiSwitchToTransition @ 0x1402AF830
 * Callers:
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x1400118DC (MiPageAttributeBatchChangeNeeded.c)
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiIsProbeActive @ 0x140122F4C (MiIsProbeActive.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiAddMdlTracker @ 0x1402A81CC (MiAddMdlTracker.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x14085054C (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // bl
  __int64 v7; // rdi
  __int64 v8; // r12
  ULONG_PTR *v9; // r15
  unsigned int v10; // r11d
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  int v13; // eax
  unsigned int v14; // edx
  __int64 Page; // rax
  __int64 v16; // r15
  __int64 v17; // r9
  __int64 v18; // r14
  unsigned int v19; // r15d
  unsigned __int64 v20; // r12
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rax
  ULONG_PTR v23; // r9
  unsigned int v24; // r10d
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int8 v31; // r10
  __int64 v32; // r11
  __int64 v33; // rax
  struct _KTHREAD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  char v37; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v39; // rdx
  int v40; // r9d
  __int64 v41; // r11
  char v42; // r8
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned int v46; // esi
  ULONG_PTR v47; // rdi
  _KPROCESS *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int8 v53; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v54; // [rsp+31h] [rbp-CFh]
  unsigned int v56; // [rsp+38h] [rbp-C8h]
  int v57; // [rsp+40h] [rbp-C0h]
  int v58; // [rsp+40h] [rbp-C0h]
  unsigned int v59; // [rsp+48h] [rbp-B8h]
  __int64 v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *v62; // [rsp+58h] [rbp-A8h]
  unsigned int i; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v64; // [rsp+60h] [rbp-A0h]
  char EffectivePagePriorityThread; // [rsp+68h] [rbp-98h]
  ULONG_PTR v66; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v67; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 ContainingPageTable; // [rsp+90h] [rbp-70h]
  __int64 ReadyInPageBlock; // [rsp+98h] [rbp-68h]
  unsigned __int64 v72; // [rsp+A0h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v75; // [rsp+C0h] [rbp-40h]
  _KPROCESS *Process; // [rsp+C8h] [rbp-38h]
  volatile signed __int32 *v77; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v78; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v79; // [rsp+DAh] [rbp-26h]
  int v80; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v81; // [rsp+E4h] [rbp-1Ch]
  __int64 v82; // [rsp+E8h] [rbp-18h]
  __int64 v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]

  BugCheckParameter3 = a1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(v4);
  v72 = *(_QWORD *)(a1 + 32);
  v5 = ((v72 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v67 = &Process[1].IdealNode[12];
  v56 = 0;
  v6 = 0;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], 0, (__int64)&v77);
  v61 = 0xFFFFFFFFFLL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  v60 = (__int64)v9;
  ContainingPageTable = -1LL;
  v11 = 0;
  v59 = MiObtainFaultCharges(v9, v10, 2);
  v12 = v59;
  if ( !v59 )
    goto LABEL_14;
  v13 = v78;
  v14 = v79;
  v57 = v78;
  for ( i = v79; ; v14 = i )
  {
    Page = MiGetPage((__int64)v9, v13 & _InterlockedExchangeAdd(v77, 1u) | v14, 0);
    v16 = Page;
    if ( Page == -1 )
      break;
    v7 = 48 * Page - 0x58000000000LL;
    if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v7, a3) == 1 )
    {
      *(_QWORD *)(v7 + 16) = v8;
      v8 = v7;
    }
    MiSetPfnBlink(v7, v61, 0);
    v61 = v16;
    v9 = (ULONG_PTR *)v60;
    ++v11;
LABEL_9:
    if ( v11 == v59 )
      goto LABEL_12;
    v13 = v57;
  }
  if ( !v11 )
  {
    v9 = (ULONG_PTR *)v60;
    MiWaitForFreePage(v60);
    goto LABEL_9;
  }
  MiReturnFaultCharges(v60, v59 - v11, 0);
  v12 = v11;
  v59 = v11;
LABEL_12:
  if ( v8 )
  {
    v69 = 0LL;
    MiSetOriginalPtePfnFromFreeList(&v69);
    MiChangePageAttributeBatch(v8, a3, v69, v17);
  }
LABEL_14:
  v18 = (__int64)v67;
  v19 = 0;
  v20 = 0LL;
  v58 = 0;
  v64 = v5 + 8LL * v12;
  v21 = MiLockWorkingSetShared((__int64)v67);
  v54 = v21;
  if ( v5 >= v64 )
    goto LABEL_56;
  v75 = BugCheckParameter3 - ((v72 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v20 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v18, v20);
        goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v20 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v18, v20, 0);
      ContainingPageTable = MiGetContainingPageTable(v5);
    }
    if ( (unsigned int)MiIsProbeActive(v5, 1LL, 3) )
      goto LABEL_53;
    v66 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v66 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v66, BugCheckParameter3);
    v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v66);
    BugCheckParameter4 = 48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      goto LABEL_26;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v23, BugCheckParameter4);
    v26 = *(_WORD *)(BugCheckParameter4 + 32);
    v27 = v24 + ((*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL);
    if ( v26 < v27 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v23, BugCheckParameter4);
    if ( v26 <= v27 )
    {
LABEL_26:
      v28 = v7;
      v62 = (volatile signed __int64 *)(v7 + 24);
      v29 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL;
      if ( v29 == 0xFFFFFFFFFLL )
        v7 = 0LL;
      else
        v7 = 48 * v29 - 0x58000000000LL;
      v30 = v24 + ((v23 & 0x800) != 0 ? 3 : 0);
      if ( a3 == 2 )
      {
        v30 = (unsigned int)v30 | 0x18;
      }
      else if ( !a3 )
      {
        v30 = (unsigned int)v30 | 8;
      }
      v74 = v30;
      v66 = MiSwizzleInvalidPte(32 * v30);
      *(_QWORD *)(v28 + 16) = v66;
      if ( (v6 & v31) == 0 )
      {
        v33 = ReadyInPageBlock;
        v34 = CurrentThread;
        *(_DWORD *)(ReadyInPageBlock + 192) |= 0x20u;
        *(_DWORD *)(v33 + 80) = 0;
        *(_QWORD *)(v33 + 88) = 0LL;
        v6 |= v31;
        *(_QWORD *)(v33 + 248) = v28;
        *(_QWORD *)(v33 + 152) = v34;
      }
      *(_QWORD *)(v28 + 40) ^= v32 & (ContainingPageTable ^ *(_QWORD *)(v28 + 40));
      v53 = MiLockPageInline(v28);
      v35 = ReadyInPageBlock;
      *(_BYTE *)(v28 + 34) |= 0x20u;
      if ( v35 )
        v36 = v35 + 32;
      else
        v36 = 0LL;
      *(_QWORD *)v28 = v36;
      *v62 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v28, 1);
      v37 = *(_BYTE *)(v28 + 34) & 0xFA;
      *(_QWORD *)(v28 + 8) = v5;
      *(_BYTE *)(v28 + 34) = v37 | 2;
      *(_BYTE *)(v28 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v28 + 35)) & 7;
      _InterlockedAnd64(v62, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v53 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v53);
      MiReturnFaultCharges(v60, 1uLL, 0);
      v66 = MiSwizzleInvalidPte(32 * (v74 | ((((v28 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 7) | 0x40));
      if ( MiPteInShadowRange(v5) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v40 = 1;
          if ( !HIBYTE(word_14043B26C) )
            goto LABEL_48;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
LABEL_48:
          if ( (v42 & 1) != 0 )
            v39 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v5 = v39;
      if ( v40 )
        MiWritePteShadow(v5, v39);
      v58 = ++v19;
      v18 = (__int64)v67;
      *(_QWORD *)(v75 + v5 + 48) = v41;
      v5 += 8LL;
      if ( v5 >= v64 )
        goto LABEL_53;
      continue;
    }
    break;
  }
  v56 = v24;
LABEL_53:
  if ( v20 )
    MiUnlockPageTableInternal(v18, v20);
  v21 = v54;
LABEL_56:
  MiUnlockWorkingSetShared(v18, v21);
  if ( v7 )
  {
    do
    {
      v43 = v7;
      v44 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL;
      if ( v44 == 0xFFFFFFFFFLL )
        v7 = 0LL;
      else
        v7 = 48 * v44 - 0x58000000000LL;
      MiSetOriginalPtePfnFromFreeList((_QWORD *)(v43 + 16));
      MiReleaseFreshPage(v45);
    }
    while ( v7 );
    v19 = v58;
    v12 = v59;
  }
  if ( v19 == v12 )
  {
    v46 = v56;
  }
  else
  {
    MiReturnFaultCharges(v60, v12 - v19, 0);
    v46 = v56;
    if ( !v19 )
      v46 = 1;
  }
  v47 = BugCheckParameter3;
  *(_DWORD *)(BugCheckParameter3 + 40) = v19 << 12;
  if ( v19 )
  {
    v48 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v19);
    v82 = 20LL;
    v80 = 1;
    v81 = 0;
    v83 = 0LL;
    v84 = 0LL;
    MiInsertTbFlushEntry((__int64)&v80, v72 & 0xFFFFFFFFFFFFF000uLL, v19, 0);
    MiFlushTbList(&v80, v49, v50, v51);
    *(_QWORD *)(v47 + 16) = v48;
    *(_WORD *)(v47 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v48[1].Affinity.Bitmap[14], v19);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v47, v19, 4);
  }
  return v46;
}
