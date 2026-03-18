/*
 * XREFs of MiSwitchToTransition @ 0x1402C7218
 * Callers:
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiSetPfnBlink @ 0x1400BB420 (MiSetPfnBlink.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400C4948 (MiPageAttributeBatchChangeNeeded.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiIsProbeActive @ 0x1400F4D24 (MiIsProbeActive.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiAddMdlTracker @ 0x1402BF5AC (MiAddMdlTracker.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x14088AA9C (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  ULONG_PTR v4; // r15
  _KPROCESS *v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int8 v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r13
  unsigned int v11; // r11d
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  signed __int32 v14; // r8d
  __int64 Page; // rax
  __int64 v16; // r15
  __int64 v17; // r9
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  unsigned int v21; // r12d
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // r9
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned int v30; // r14d
  unsigned __int8 v31; // dl
  __int64 v32; // r10
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
  unsigned int v46; // edi
  _KPROCESS *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int8 v52; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v53; // [rsp+31h] [rbp-CFh]
  int v55; // [rsp+38h] [rbp-C8h]
  unsigned int v57; // [rsp+48h] [rbp-B8h]
  ULONG_PTR *v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *v60; // [rsp+58h] [rbp-A8h]
  char EffectivePagePriorityThread; // [rsp+60h] [rbp-A0h]
  ULONG_PTR TransitionPte; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 ContainingPageTable; // [rsp+80h] [rbp-80h]
  __int64 ReadyInPageBlock; // [rsp+88h] [rbp-78h]
  unsigned __int64 v67; // [rsp+90h] [rbp-70h]
  unsigned __int64 v68; // [rsp+98h] [rbp-68h]
  volatile signed __int32 *v69; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  _QWORD v75[24]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = BugCheckParameter3;
  v69 = 0LL;
  v70 = 0LL;
  memset(v75, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v5 = Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v68 = *(_QWORD *)(v4 + 32);
  v6 = ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v63 = &Process[1].IdealNode[6];
  v55 = 0;
  v7 = 0;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[6], 0, (__int64)&v69);
  v8 = *(unsigned __int16 *)&v5[1].Spare2[69];
  v59 = 0xFFFFFFFFFLL;
  v9 = 0LL;
  v10 = 0LL;
  v58 = *(ULONG_PTR **)(qword_140465E88 + 8 * v8);
  ContainingPageTable = -1LL;
  v12 = MiObtainFaultCharges(v58, v11, 2);
  v13 = 0;
  v57 = v12;
  if ( !v12 )
    goto LABEL_14;
  while ( 1 )
  {
    v14 = _InterlockedExchangeAdd(v69, 1u);
    Page = MiGetPage((__int64)v58, (unsigned int)v70 & v14 | HIDWORD(v70), 0LL);
    v16 = Page;
    if ( Page != -1 )
    {
      v9 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v9, a3) == 1 )
      {
        *(_QWORD *)(v9 + 16) = v10;
        v10 = v9;
      }
      MiSetPfnBlink(v9, v59, 0);
      v59 = v16;
      ++v13;
      goto LABEL_8;
    }
    if ( v13 )
      break;
    MiWaitForFreePage(v58);
LABEL_8:
    if ( v13 == v12 )
      goto LABEL_11;
  }
  MiReturnFaultCharges((__int64)v58, v12 - v13, 0);
  v12 = v13;
  v57 = v13;
LABEL_11:
  if ( v10 )
  {
    v64 = 0LL;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v64);
    MiChangePageAttributeBatch(v10, a3, v64, v17);
  }
  v4 = BugCheckParameter3;
LABEL_14:
  v18 = (__int64)v63;
  v19 = 0LL;
  v20 = v12;
  v21 = 0;
  v67 = v6 + 8 * v20;
  v22 = MiLockWorkingSetShared((__int64)v63);
  v53 = v22;
  if ( v6 >= v67 )
    goto LABEL_56;
  v73 = v4 - ((v68 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v19 )
    {
      if ( (v6 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v18, v19);
        goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v19 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v18, v19, 0LL);
      ContainingPageTable = MiGetContainingPageTable(v6);
    }
    if ( (unsigned int)MiIsProbeActive(v6, 1LL, 3) )
      goto LABEL_53;
    TransitionPte = MI_READ_PTE_LOCK_FREE(v6);
    if ( (TransitionPte & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v6, TransitionPte, BugCheckParameter3);
    v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
    BugCheckParameter4 = 48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      goto LABEL_26;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v6 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v6, v24, BugCheckParameter4);
    v26 = *(_WORD *)(BugCheckParameter4 + 32);
    v27 = ((*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL) + 1;
    if ( v26 < v27 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v6, v24, BugCheckParameter4);
    if ( v26 <= v27 )
    {
LABEL_26:
      v28 = v9;
      v60 = (volatile signed __int64 *)(v9 + 24);
      v29 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
      if ( v29 == 0xFFFFFFFFFLL )
        v9 = 0LL;
      else
        v9 = 48 * v29 - 0x58000000000LL;
      v72 = (v28 + 0x58000000000LL) / 48;
      v30 = (v24 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v30 |= 0x18u;
      }
      else if ( !a3 )
      {
        v30 |= 8u;
      }
      TransitionPte = MiSwizzleInvalidPte(32LL * v30);
      *(_QWORD *)(v28 + 16) = TransitionPte;
      if ( (v7 & v31) == 0 )
      {
        v33 = ReadyInPageBlock;
        v34 = CurrentThread;
        *(_DWORD *)(ReadyInPageBlock + 192) |= 0x20u;
        *(_DWORD *)(v33 + 80) = 0;
        *(_QWORD *)(v33 + 88) = 0LL;
        v7 |= v31;
        *(_QWORD *)(v33 + 248) = v28;
        *(_QWORD *)(v33 + 152) = v34;
      }
      *(_QWORD *)(v28 + 40) ^= v32 & (ContainingPageTable ^ *(_QWORD *)(v28 + 40));
      v52 = MiLockPageInline(v28);
      v35 = ReadyInPageBlock;
      *(_BYTE *)(v28 + 34) |= 0x20u;
      if ( v35 )
        v36 = v35 + 32;
      else
        v36 = 0LL;
      *(_QWORD *)v28 = v36;
      *v60 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v28, 1);
      v37 = *(_BYTE *)(v28 + 34) & 0xFA;
      *(_QWORD *)(v28 + 8) = v6;
      *(_BYTE *)(v28 + 34) = v37 | 2;
      *(_BYTE *)(v28 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v28 + 35)) & 7;
      _InterlockedAnd64(v60, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v52 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v52);
      MiReturnFaultCharges((__int64)v58, 1uLL, 0);
      TransitionPte = MiMakeTransitionPte(v72, v30);
      if ( MiPteInShadowRange(v6) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v40 = 1;
          if ( !HIBYTE(word_1404658EC) )
            goto LABEL_48;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
LABEL_48:
          if ( (v42 & 1) != 0 )
            v39 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v39;
      if ( v40 )
        MiWritePteShadow(v6);
      ++v21;
      v18 = (__int64)v63;
      *(_QWORD *)(v73 + v6 + 48) = v41;
      v6 += 8LL;
      if ( v6 >= v67 )
        goto LABEL_53;
      continue;
    }
    break;
  }
  v55 = 1;
LABEL_53:
  if ( v19 )
    MiUnlockPageTableInternal(v18, v19);
  v22 = v53;
  v4 = BugCheckParameter3;
LABEL_56:
  MiUnlockWorkingSetShared(v18, v22);
  if ( v9 )
  {
    do
    {
      v43 = v9;
      v44 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
      if ( v44 == 0xFFFFFFFFFLL )
        v9 = 0LL;
      else
        v9 = 48 * v44 - 0x58000000000LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v43 + 16));
      MiReleaseFreshPage(v45);
    }
    while ( v9 );
    v4 = BugCheckParameter3;
  }
  if ( v21 == v57 )
  {
    v46 = v55;
  }
  else
  {
    MiReturnFaultCharges((__int64)v58, v57 - v21, 0);
    v46 = v55;
    if ( !v21 )
      v46 = 1;
  }
  *(_DWORD *)(v4 + 40) = v21 << 12;
  if ( v21 )
  {
    v47 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v21);
    v75[1] = 20LL;
    LODWORD(v75[0]) = 1;
    WORD2(v75[0]) = 0;
    v75[2] = 0LL;
    v75[3] = 0LL;
    MiInsertTbFlushEntry((__int64)v75, v68 & 0xFFFFFFFFFFFFF000uLL, v21, 0);
    MiFlushTbList((int *)v75, v48, v49, v50);
    *(_QWORD *)(v4 + 16) = v47;
    *(_WORD *)(v4 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v47[1].Affinity.Bitmap[14], v21);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v4, v21, 4);
  }
  return v46;
}
