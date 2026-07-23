/*
 * XREFs of MiFinishHardFault @ 0x14002E010
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14001A0B8 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiCreateDecayPfn @ 0x1400294F4 (MiCreateDecayPfn.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiMakeTransitionPteValid @ 0x14002CF4C (MiMakeTransitionPteValid.c)
 *     MiImagePageOk @ 0x14002CFA8 (MiImagePageOk.c)
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x14002DDDC (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPfnCommitNotCharged @ 0x140030DB0 (MiIsPfnCommitNotCharged.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140036060 (MiInsertAndUnlockStandbyPages.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiInvalidateCollidedIos @ 0x140117DB8 (MiInvalidateCollidedIos.c)
 *     MiDecayPfnFullyInitialized @ 0x14011BDE0 (MiDecayPfnFullyInitialized.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiIsPteInStore @ 0x140141908 (MiIsPteInStore.c)
 *     MiSyncCommitSignals @ 0x14018812C (MiSyncCommitSignals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x1402B00E8 (MiMakeProtoReadOnly.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 *     MiSwapHardFaultPage @ 0x1402D014C (MiSwapHardFaultPage.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r13
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  _DWORD *v10; // rax
  _DWORD *v11; // r8
  _DWORD *v12; // rax
  _QWORD *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rsi
  char *v22; // rdx
  int v23; // eax
  int v24; // r8d
  unsigned int v25; // ecx
  ULONG_PTR v26; // rcx
  PSLIST_ENTRY DecayPfn; // rax
  unsigned __int64 v28; // rsi
  unsigned int v29; // ebp
  struct _KEVENT *v30; // r14
  __int64 CachedCommit; // r9
  __int64 v32; // r15
  ULONG_PTR v33; // r14
  unsigned int v34; // ebx
  char v35; // al
  ULONG_PTR v36; // rdx
  ULONG_PTR v37; // r15
  __int16 v38; // cx
  bool v39; // zf
  __int16 v40; // cx
  unsigned __int64 v41; // rbp
  __int64 v42; // rax
  int v43; // r15d
  unsigned __int64 v44; // rcx
  char v45; // al
  int v46; // r10d
  __int64 v47; // rbp
  signed __int64 v48; // rax
  struct _KPRCB *v49; // r8
  __int64 v50; // rcx
  struct _KPRCB *v51; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  ULONG_PTR v60; // rbp
  unsigned __int8 v61; // al
  __int64 result; // rax
  ULONG_PTR v63; // rax
  char v64; // al
  unsigned __int64 v65; // r9
  struct _KEVENT *v66; // rcx
  int v67; // eax
  _QWORD *v68; // r15
  __int64 TransitionPteValid; // rax
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r11
  unsigned __int8 v74; // r14
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // r11
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // r10
  int ImagePageOk; // ecx
  int v83; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v85; // rtt
  __int64 *v86; // r12
  __int64 v87; // rax
  __int64 v88; // rbp
  unsigned __int8 v89; // r14
  struct _KPRCB *v90; // rcx
  __int64 v91; // rsi
  unsigned int v92; // [rsp+30h] [rbp-198h]
  char v93; // [rsp+34h] [rbp-194h] BYREF
  int v94; // [rsp+38h] [rbp-190h]
  int v95; // [rsp+3Ch] [rbp-18Ch]
  __int64 v96; // [rsp+40h] [rbp-188h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-180h]
  ULONG_PTR v98; // [rsp+50h] [rbp-178h]
  ULONG_PTR v99; // [rsp+58h] [rbp-170h]
  struct _KEVENT *v100; // [rsp+60h] [rbp-168h]
  int v101; // [rsp+68h] [rbp-160h] BYREF
  int v102; // [rsp+6Ch] [rbp-15Ch] BYREF
  __int64 v103; // [rsp+70h] [rbp-158h]
  _DWORD *v104; // [rsp+78h] [rbp-150h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-148h]
  unsigned __int64 v106; // [rsp+88h] [rbp-140h]
  unsigned __int64 v107; // [rsp+90h] [rbp-138h]
  __int64 v108; // [rsp+98h] [rbp-130h]
  _DWORD *v109; // [rsp+A0h] [rbp-128h]
  __int64 *v110; // [rsp+A8h] [rbp-120h]
  __int64 v111; // [rsp+B0h] [rbp-118h]
  __int64 *v112; // [rsp+B8h] [rbp-110h]
  _QWORD *v113; // [rsp+C8h] [rbp-100h]
  unsigned __int64 v114; // [rsp+D0h] [rbp-F8h]
  __int64 v115; // [rsp+D8h] [rbp-F0h]
  __int64 v116; // [rsp+E0h] [rbp-E8h]
  _QWORD v117[16]; // [rsp+F0h] [rbp-D8h] BYREF

  v4 = *(_DWORD *)(a3 + 112);
  v103 = a1;
  v112 = (__int64 *)(a1 + 56);
  v5 = a3;
  v115 = a3;
  v113 = a4;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 0;
  v9 = *(_QWORD *)(a3 + 152);
  v99 = *(_QWORD *)(a3 + 104);
  v10 = *(_DWORD **)(a3 + 232);
  v11 = (_DWORD *)(a3 + 272);
  v104 = v10;
  v12 = *(_DWORD **)(v5 + 256);
  v116 = v7;
  if ( v12 )
    v11 = v12;
  v109 = v11;
  v13 = v11 + 12;
  v14 = (v11[8] + v11[11]) & 0xFFF;
  v15 = (unsigned int)v11[10] + 4095LL;
  v110 = (__int64 *)(v11 + 12);
  v16 = (unsigned __int64)&v11[2 * ((unsigned __int64)(v14 + v15) >> 12) + 10];
  v17 = *(unsigned int *)(v5 + 188);
  v114 = v16;
  if ( (_DWORD)v17 == -1 )
    v18 = -1LL;
  else
    v18 = (unsigned __int64)&v11[2 * v17 + 12];
  v19 = *(_QWORD *)(v5 + 160);
  v98 = *(_QWORD *)(v5 + 248);
  v106 = *(_QWORD *)(v5 + 224);
  v20 = *(unsigned int *)(v5 + 192);
  v107 = v18;
  v108 = v19;
  if ( (v20 & 0x100000) != 0 || !v7 || (v20 & 8) != 0 )
    v94 = -1073740748;
  else
    v94 = 0;
  v93 = 17;
  if ( v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( (*(_DWORD *)(v5 + 192) & 0x1000000) == 0 )
    {
      if ( (*(_BYTE *)(v7 + 184) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v9);
      else
        KeLeaveCriticalRegionThread(v9, v9, v11, v7);
    }
    MiRelockFaultState(v112, a2);
    v21 = v103;
    LOBYTE(v20) = CurrentIrql;
    *(_BYTE *)(v103 + 68) = CurrentIrql;
  }
  else
  {
    v21 = v103;
    LOBYTE(v20) = 17;
    CurrentIrql = v20;
  }
  if ( v19 )
  {
    v22 = &v93;
    if ( (_BYTE)v20 != 17 )
      v22 = 0LL;
    MiRelockProtoPoolPage(v19, v22);
  }
  if ( *(_DWORD *)(v5 + 180) )
  {
    v23 = -1073741670;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_DWORD *)(v5 + 80) = -1073741670;
  }
  else
  {
    v23 = *(_DWORD *)(v5 + 80);
  }
  v95 = v23;
  LOBYTE(v96) = 17;
  if ( *(_QWORD *)(v5 + 16) != v5 + 16 )
  {
    v79 = MiInvalidateCollidedIos(v5) & 1;
    v8 = 2 * v79;
    if ( !v79 )
    {
      *(_DWORD *)(v5 + 80) = -1073741801;
      *(_QWORD *)(v5 + 88) = 0LL;
    }
  }
  if ( v19 )
  {
    v101 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v101);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v19);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v94 >= 0 && !(unsigned int)MiIsFaultPteIntact(v21, v106, (__int64)v104, (_QWORD *)(v5 + 168)) )
    v94 = -1073740748;
  v24 = v95;
  if ( v95 >= 0
    && ((v25 = *(_DWORD *)(v5 + 192), (v25 & 8) != 0)
     || *(_QWORD *)(v5 + 256)
     || (_QWORD *)v16 != v13 && v18 > (unsigned __int64)(v109 + 14))
    && (*(_DWORD *)(v5 + 192) & 0xE00) != 0
    && (*(_DWORD *)(v5 + 192) & 0x88000) == 0x80000 )
  {
    DecayPfn = MiCreateDecayPfn((v25 >> 12) & 7);
    v24 = v95;
    v26 = (ULONG_PTR)DecayPfn;
  }
  else
  {
    v26 = 0LL;
  }
  v28 = ZeroPte;
  v29 = 0;
  v30 = 0LL;
  BugCheckParameter2 = v26;
  v92 = 0;
  v111 = ZeroPte;
  v100 = 0LL;
  if ( (unsigned __int64)v13 > v16 )
  {
    v60 = BugCheckParameter2;
    goto LABEL_93;
  }
  while ( 1 )
  {
    CachedCommit = 0x10000000000000LL;
    v32 = 48LL * *v13;
    v33 = v32 - 0x58000000000LL;
    if ( v32 - 0x58000000000LL == qword_14043BE90 )
      goto LABEL_78;
    if ( v29 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
      {
        MiInsertAndUnlockStandbyPages(v26, v117, v29, (unsigned __int8)v96);
        v29 = 0;
        v92 = 0;
        --v13;
        goto LABEL_78;
      }
    }
    else
    {
      v59 = KeGetCurrentIrql();
      v96 = v59;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v59 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v102 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v102);
          while ( *(__int64 *)(v33 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) );
        v24 = v95;
        CachedCommit = 0x10000000000000LL;
      }
    }
    v34 = v8 & 0xFFFFFFCF;
    if ( (v4 & 1) != 0 && HIWORD(v4) )
      v4 = (unsigned __int16)v4 | ((HIWORD(v4) - 1) << 16);
    if ( (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) != 0 )
    {
      v34 |= 0x20u;
      goto LABEL_44;
    }
    v35 = *(_BYTE *)(v33 + 35);
    if ( (v35 & 0x10) != 0 )
    {
      if ( v33 == v98 )
      {
        if ( v24 >= 0 )
          v24 = -1073741761;
        v95 = v24;
      }
      goto LABEL_142;
    }
    if ( v24 < 0 )
      goto LABEL_141;
    if ( (unsigned __int64)v13 >= v107 )
    {
      if ( v33 == v98 )
        v94 = -1073740748;
LABEL_141:
      *(_BYTE *)(v33 + 35) = v35 | 0x10;
LABEL_142:
      v34 |= 0x10u;
    }
LABEL_44:
    if ( byte_14043EC9E && _bittest64((const signed __int64 *)qword_14043F2D8, (unsigned __int64)(v32 / 48) >> 9) )
    {
      v36 = v98;
      v8 = v34 | 0x40;
    }
    else
    {
      v36 = v98;
      if ( v33 != v98 || v94 == -1073740748 )
        v8 = v34 & 0xFFFFFFBF;
      else
        v8 = v34 | 0x40;
    }
    if ( (v8 & 0x30) != 0 || (v8 & 0x40) == 0 )
      goto LABEL_49;
    if ( (unsigned int)MiImagePageOk(v106, v33) )
    {
      v36 = v98;
      CachedCommit = 0x10000000000000LL;
LABEL_49:
      v37 = BugCheckParameter2;
      goto LABEL_50;
    }
    *(_DWORD *)(v5 + 192) |= 0x20u;
    v37 = BugCheckParameter2;
    if ( v29 )
    {
      LOBYTE(v58) = 17;
      MiInsertAndUnlockStandbyPages(BugCheckParameter2, v117, v29, v58);
      v29 = 0;
      v92 = 0;
    }
    v80 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v33 + 8) | 0x8000000000000000uLL);
    ImagePageOk = MiMakeImagePageOk(v103, v81, v80, v33, v108);
    if ( (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) != 0 )
      v8 = v8 & 0xFFFFFFCF | 0x20;
    v83 = v94;
    v36 = v98;
    CachedCommit = 0x10000000000000LL;
    if ( v94 >= 0 )
      v83 = ImagePageOk;
    v94 = v83;
LABEL_50:
    *(_BYTE *)(v33 + 34) &= ~0x20u;
    *(_QWORD *)v33 = 0LL;
    if ( (v8 & 0x30) != 0 )
    {
      if ( v29 )
      {
        LOBYTE(CachedCommit) = 17;
        MiInsertAndUnlockStandbyPages(v37, v117, v29, CachedCommit);
        v29 = 0;
        v92 = 0;
      }
      if ( (v8 & 0x30) == 0x10 )
      {
        v8 &= ~4u;
        if ( (*(_DWORD *)(v5 + 192) & 0x10) == 0 || (v8 & 2) != 0 )
          v8 |= 4u;
        if ( !_bittest64((const signed __int64 *)(v33 + 16), 0xAu)
          && (v8 & 4) != 0
          && !(unsigned int)MiIsPfnCommitNotCharged(v33, v36) )
        {
          MiChargeCommit(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v33 + 40) >> 40) & 0x3FFLL)), 1LL, 4LL);
        }
        MiRestoreTransitionPte(v33);
        *(_QWORD *)(v33 + 24) |= 0x4000000000000000uLL;
        v76 = *(_QWORD *)(v33 + 16);
        if ( (v76 & 0x400) == 0 )
          *(_QWORD *)(v33 + 16) = v76 & 0xFFFFFFFFFFFFFFF9uLL;
      }
      MiRemoveLockedPageChargeAndDecRef(v33);
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_128;
      v74 = v96;
      if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v96 >= 2u )
      {
LABEL_129:
        __writecr8(v74);
        goto LABEL_78;
      }
LABEL_203:
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_129;
    }
    if ( v33 == v36 )
    {
      v63 = v99;
      v8 |= 1u;
      if ( v99 )
      {
        if ( v29 )
        {
          LOBYTE(CachedCommit) = 17;
          MiInsertAndUnlockStandbyPages(v37, v117, v29, CachedCommit);
          v63 = v99;
          v29 = 0;
          v92 = 0;
        }
        MiSwapHardFaultPage(v104, v33, v63, CachedCommit);
        v36 = v99;
        v98 = v99;
        v33 = v99;
        v99 = 0LL;
        CachedCommit = 0x10000000000000LL;
      }
      if ( v94 >= 0 && v33 == v36 )
      {
        if ( v29 )
        {
          LOBYTE(CachedCommit) = 17;
          MiInsertAndUnlockStandbyPages(v37, v117, v29, CachedCommit);
          v29 = 0;
          v92 = 0;
        }
        MiAddLockedPageCharge(v33, 3);
        v64 = *(_BYTE *)(v33 + 34) & 0xFE;
        *(_QWORD *)(v33 + 24) ^= ((*(_QWORD *)(v33 + 24) + 1LL) ^ *(_QWORD *)(v33 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v33 + 34) = v64 | 6;
        MiRemoveLockedPageChargeAndDecRef(v33);
        v65 = *(_QWORD *)(v33 + 40);
        v66 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((v65 >> 40) & 0x3FF));
        v67 = *(_DWORD *)(v33 + 16);
        v100 = v66;
        if ( (v67 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v66, *(_QWORD *)(v33 + 16)) )
        {
          v78 = MiCaptureDirtyBitToPfn(v33);
          v65 = *(_QWORD *)(v33 + 40);
          v28 = v78;
          v111 = v78;
        }
        if ( (v65 & 0x200000000000000LL) != 0 )
        {
          v68 = v104;
          if ( ((*v104 >> 5) & 0x1F) == 0x18 )
            MiMakeProtoReadOnly(v104, v33);
          TransitionPteValid = MiMakeTransitionPteValid((__int64)v68);
          if ( (unsigned int)MiPteInShadowRange(v68, TransitionPteValid, v70) )
          {
            if ( !(unsigned int)MiPteHasShadow(v72, v71) )
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                && (v73 & 1) != 0 )
              {
                v71 |= 0x8000000000000000uLL;
              }
              goto LABEL_123;
            }
            if ( !HIBYTE(word_14043B26C) && (v73 & 1) != 0 )
              v71 |= 0x8000000000000000uLL;
            *v68 = v71;
            MiWritePteShadow(v68);
          }
          else
          {
LABEL_123:
            *v68 = v71;
          }
          if ( v113 )
            *v113 = v73;
        }
LABEL_126:
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v29 )
          goto LABEL_78;
        if ( !KiIrqlFlags )
        {
LABEL_128:
          v74 = v96;
          goto LABEL_129;
        }
        v74 = v96;
        if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v96 >= 2u )
          goto LABEL_129;
        goto LABEL_203;
      }
    }
    if ( (*(_DWORD *)(v5 + 192) & 0x8000) != 0 )
    {
      *v13 |= 0x8000000000000000uLL;
      goto LABEL_126;
    }
    v38 = *(_WORD *)(v33 + 32);
    if ( !v38 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, (__int64)(v33 + 0x58000000000LL) / 48, *(_BYTE *)(v33 + 34) & 7, 0LL);
    v39 = v38 == 1;
    v40 = v38 - 1;
    *(_WORD *)(v33 + 32) = v40;
    if ( v39 && (*(_QWORD *)(v33 + 40) & 0x10000000000000LL) != 0 )
      goto LABEL_75;
    v41 = *(_QWORD *)(v33 + 40);
    if ( (v41 & 0x10000000000000LL) != 0 )
      goto LABEL_156;
    v42 = *(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v40 )
    {
      if ( v40 == 1 )
      {
        if ( !v42 && (*(_BYTE *)(v33 + 34) & 8) == 0 )
          goto LABEL_156;
      }
      else if ( v40 != 2 || !v42 || (*(_BYTE *)(v33 + 34) & 8) == 0 )
      {
LABEL_156:
        v29 = v92;
        goto LABEL_126;
      }
      v43 = 0;
    }
    else
    {
      v43 = 1;
    }
    if ( ((CachedCommit = 0x8000000000000000uLL,
           v44 = *(_QWORD *)(v33 + 8) | 0x8000000000000000uLL,
           v44 > 0xFFFFF6BFFFFFFF78uLL)
       || v44 < 0xFFFFF68000000000uLL)
      && (v45 = *(_BYTE *)(v33 + 35), (v45 & 0x20) != 0) )
    {
      *(_BYTE *)(v33 + 35) = v45 & 0xDF;
    }
    else
    {
      if ( (v41 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v33 + 16) & 0x400LL) != 0 )
      {
        v46 = 1;
      }
      else if ( (unsigned int)MiIsPfnCommitNotCharged(v33, 0xFFFFF68000000000uLL) )
      {
        v46 = 1;
      }
      else if ( v43 == 1 && (v77 & 0x4000000000000000LL) != 0 )
      {
        v46 = 1;
      }
      v47 = *(_QWORD *)(qword_14043B808 + 8 * ((v41 >> 40) & 0x3FF));
      if ( v46 == 1 )
      {
        v48 = *(_QWORD *)(v47 + 6464);
        if ( v48 )
        {
          while ( 1 )
          {
            v85 = v48;
            v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 6464), v48 - 1, v48);
            if ( v85 == v48 )
              break;
            if ( !v48 )
              goto LABEL_67;
          }
        }
        else
        {
LABEL_67:
          if ( (ULONG_PTR *)v47 == &MiSystemPartition
            && (v49 = KeGetCurrentPrcb(),
                _m_prefetchw((const void *)&v49->CachedCommit),
                CachedCommit = v49->CachedCommit,
                (unsigned __int64)(CachedCommit + 1) <= 0x100) )
          {
            while ( 1 )
            {
              v50 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v49->CachedCommit,
                      CachedCommit + 1,
                      CachedCommit);
              if ( v50 == CachedCommit )
                break;
              CachedCommit = v50;
              if ( (unsigned __int64)(v50 + 1) > 0x100 )
                goto LABEL_80;
            }
          }
          else
          {
LABEL_80:
            v55 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 7656), 0xFFFFFFFFFFFFFFFFuLL);
            v56 = *(_QWORD *)(v47 + 6432);
            if ( v55 >= v56 && v55 - 1 < v56 || (v57 = *(_QWORD *)(v47 + 6424), v55 >= v57) && v55 - 1 < v57 )
              MiSyncCommitSignals(v47, 0LL);
          }
        }
      }
      if ( (ULONG_PTR *)v47 == &MiSystemPartition )
      {
        v51 = KeGetCurrentPrcb();
        CachedCommit = 1LL;
        CachedResidentAvailable = (int)v51->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_138;
        if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
        {
LABEL_135:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v51->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            CachedCommit = (int)CachedResidentAvailable - 192 + 1LL;
          }
LABEL_138:
          CachedCommit = _InterlockedExchangeAdd64(&qword_14043F6C0, CachedCommit);
          goto LABEL_74;
        }
        while ( 1 )
        {
          v53 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v51->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v39 = (_DWORD)CachedResidentAvailable == v53;
          LODWORD(CachedResidentAvailable) = v53;
          if ( v39 )
            break;
          if ( v53 == -1 || (unsigned __int64)(v53 + 1LL) > 0x100 )
            goto LABEL_135;
        }
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 7360), 1uLL);
      }
    }
LABEL_74:
    v29 = v92;
    if ( !v43 )
      goto LABEL_126;
LABEL_75:
    if ( v29 == 16 )
    {
      LOBYTE(CachedCommit) = 17;
      MiInsertAndUnlockStandbyPages(BugCheckParameter2, v117, 16LL, CachedCommit);
      v29 = 0;
    }
    v54 = v29++;
    v92 = v29;
    v117[v54] = v33;
LABEL_78:
    v16 = v114;
    if ( (unsigned __int64)++v13 > v114 )
      break;
    v24 = v95;
    v26 = BugCheckParameter2;
  }
  if ( v29 )
  {
    v75 = v29;
    v60 = BugCheckParameter2;
    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v117, v75, (unsigned __int8)v96);
  }
  else
  {
    v60 = BugCheckParameter2;
  }
  v30 = v100;
LABEL_93:
  if ( v108 )
  {
    if ( (_BYTE)CurrentIrql == 17 )
      v61 = v93;
    else
      v61 = 17;
    MiUnlockProtoPoolPage(v108, v61);
  }
  if ( (*(_DWORD *)(v5 + 192) & 0x8000) != 0 )
  {
    MmCheckCachedPageStates(v106 + (*(_DWORD *)(v5 + 96) & 0x3FFFF), (unsigned int)v109[10], 2LL);
    v86 = v110;
    if ( (unsigned __int64)v110 <= v16 )
    {
      do
      {
        if ( *v86 < 0 )
        {
          v87 = *v86 & 0x7FFFFFFFFFFFFFFFLL;
          *v86 = v87;
          v88 = 48 * v87 - 0x58000000000LL;
          v89 = MiLockPageInline(v88);
          MiRemoveLockedPageChargeAndDecRef(v88);
          _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v89 < 2u )
          {
            v90 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v90->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v90);
          }
          __writecr8(v89);
        }
        ++v86;
      }
      while ( (unsigned __int64)v86 <= v16 );
      v28 = v111;
      v5 = v115;
      v60 = BugCheckParameter2;
      v30 = v100;
    }
  }
  if ( v60 )
    MiDecayPfnFullyInitialized(v60);
  if ( v28 )
    MiReleasePageFileInfo(v30, v28, 0);
  if ( v116 && (*(_DWORD *)(v5 + 192) & 0x1000000) != 0 )
    MiReleaseFaultState(v112, 17, 0LL);
  if ( (*(_DWORD *)(v5 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(v5 + 200));
  if ( *(int *)(v5 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v5 + 56), 0, 0);
  MiFreeInPageSupportBlock((char *)v5);
  if ( v99 )
  {
    v91 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v99 + 40) >> 40) & 0x3FFLL));
    MiReleaseFreshPage(v99);
    if ( (ULONG_PTR *)v91 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v91 + 7360), 1uLL);
    MiReturnCommit(v91, 1LL);
  }
  result = (unsigned int)v95;
  if ( v95 < 0 )
  {
    if ( (v4 & 3) == 1 )
      return 3221226548LL;
  }
  else if ( (v8 & 1) != 0 )
  {
    return (unsigned int)v94;
  }
  else
  {
    return 3221226548LL;
  }
  return result;
}
