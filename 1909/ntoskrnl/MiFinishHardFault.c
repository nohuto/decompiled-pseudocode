/*
 * XREFs of MiFinishHardFault @ 0x1400CE220
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x14009553C (MiPfCompleteInPageSupport.c)
 * Callees:
 *     MiInsertAndUnlockStandbyPages @ 0x140026300 (MiInsertAndUnlockStandbyPages.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140054D80 (MiIsPfnCommitNotCharged.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiMakeTransitionPteValid @ 0x1400CBA2C (MiMakeTransitionPteValid.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x1400CBAE8 (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x1400CBD60 (MiRelockFaultState.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiFreeInPageSupportBlock @ 0x1400CEFD0 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x1400CF084 (MiRelockProtoPoolPage.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiInvalidateCollidedIos @ 0x14010CEEC (MiInvalidateCollidedIos.c)
 *     MiDecayPfnFullyInitialized @ 0x1401184D0 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14011CC34 (MiCreateDecayPfn.c)
 *     MiHandleInPageError @ 0x140133F10 (MiHandleInPageError.c)
 *     MiIsPteInStore @ 0x140158E7C (MiIsPteInStore.c)
 *     MiSyncCommitSignals @ 0x140193404 (MiSyncCommitSignals.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x1402C7B08 (MiMakeProtoReadOnly.c)
 *     MiSwapHardFaultPage @ 0x1402EC000 (MiSwapHardFaultPage.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r13
  __int64 v7; // r9
  int v9; // ebx
  __int64 v10; // rdx
  _DWORD *v11; // rax
  _DWORD *v12; // r8
  _DWORD *v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r12
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  ULONG_PTR v20; // rcx
  __int64 v21; // rax
  char *v22; // rdx
  int v23; // ebp
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 DecayPfn; // r10
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r14
  char v31; // al
  __int64 v32; // rax
  __int16 v33; // cx
  bool v34; // zf
  __int16 v35; // cx
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  int v38; // r12d
  unsigned __int64 v39; // rcx
  char v40; // al
  int v41; // r10d
  __int64 v42; // rbp
  signed __int64 v43; // rax
  struct _KPRCB *v44; // r8
  __int64 CachedCommit; // r9
  __int64 v46; // rcx
  struct _KPRCB *v47; // r8
  unsigned __int64 v48; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v50; // eax
  unsigned int v51; // ebp
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  ULONG_PTR v56; // r14
  unsigned __int8 v57; // al
  __int64 v59; // rbp
  char v60; // al
  unsigned __int64 v61; // r9
  __int64 v62; // r11
  int v63; // eax
  _DWORD *v64; // r11
  __int64 v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // r8
  __int64 v68; // r11
  unsigned __int8 v69; // r14
  __int64 v70; // r11
  __int64 v71; // rax
  ULONG_PTR v72; // r12
  char v73; // al
  int v74; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v76; // rtt
  __int64 *v77; // r15
  __int64 v78; // rax
  __int64 v79; // rbp
  unsigned __int8 v80; // r14
  struct _KPRCB *v81; // rcx
  __int64 v82; // rsi
  unsigned int v83; // [rsp+30h] [rbp-188h]
  char v84; // [rsp+34h] [rbp-184h] BYREF
  int v85; // [rsp+38h] [rbp-180h]
  int v86; // [rsp+3Ch] [rbp-17Ch]
  __int64 v87; // [rsp+40h] [rbp-178h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-170h]
  ULONG_PTR v89; // [rsp+50h] [rbp-168h]
  __int64 v90; // [rsp+58h] [rbp-160h]
  _DWORD *v91; // [rsp+60h] [rbp-158h]
  __int64 v92; // [rsp+68h] [rbp-150h]
  int v93; // [rsp+70h] [rbp-148h] BYREF
  int v94; // [rsp+74h] [rbp-144h] BYREF
  unsigned __int64 v95; // [rsp+78h] [rbp-140h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-138h]
  unsigned __int64 v97; // [rsp+88h] [rbp-130h]
  _DWORD *v98; // [rsp+90h] [rbp-128h]
  unsigned __int64 v99; // [rsp+98h] [rbp-120h]
  __int64 *v100; // [rsp+A0h] [rbp-118h]
  __int64 v101; // [rsp+A8h] [rbp-110h]
  __int64 v102; // [rsp+B0h] [rbp-108h]
  _QWORD *v103; // [rsp+C0h] [rbp-F8h]
  __int64 v104; // [rsp+C8h] [rbp-F0h]
  __int64 v105; // [rsp+D0h] [rbp-E8h]
  __int64 v106; // [rsp+D8h] [rbp-E0h]
  __int64 v107[16]; // [rsp+E0h] [rbp-D8h] BYREF

  v4 = *(_DWORD *)(a3 + 112);
  v106 = a1 + 56;
  v5 = a3;
  v104 = a3;
  v103 = a4;
  v7 = *(_QWORD *)(a1 + 56);
  v9 = 0;
  v10 = *(_QWORD *)(a3 + 152);
  v92 = *(_QWORD *)(a3 + 104);
  v11 = *(_DWORD **)(a3 + 232);
  v12 = (_DWORD *)(a3 + 272);
  v91 = v11;
  v13 = *(_DWORD **)(v5 + 256);
  v105 = v7;
  if ( v13 )
    v12 = v13;
  v98 = v12;
  v14 = v12 + 12;
  v15 = (v12[8] + v12[11]) & 0xFFF;
  v16 = (unsigned int)v12[10] + 4095LL;
  v100 = (__int64 *)(v12 + 12);
  v17 = (unsigned __int64)&v12[2 * ((unsigned __int64)(v15 + v16) >> 12) + 10];
  v18 = *(unsigned int *)(v5 + 188);
  v95 = v17;
  if ( (_DWORD)v18 == -1 )
    v19 = -1LL;
  else
    v19 = (unsigned __int64)&v12[2 * v18 + 12];
  v20 = *(_QWORD *)(v5 + 160);
  v90 = *(_QWORD *)(v5 + 248);
  v99 = *(_QWORD *)(v5 + 224);
  v21 = *(unsigned int *)(v5 + 192);
  v97 = v19;
  v89 = v20;
  if ( (v21 & 0x100000) != 0 || !v7 || (v21 & 8) != 0 )
    v85 = -1073740748;
  else
    v85 = 0;
  v84 = 17;
  if ( v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( (*(_DWORD *)(v5 + 192) & 0x1000000) == 0 )
    {
      if ( (*(_BYTE *)(v7 + 184) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v10);
      else
        KeLeaveCriticalRegionThread(v10);
    }
    MiRelockFaultState(a1 + 56, a2);
    LOBYTE(v21) = CurrentIrql;
    v20 = v89;
    *(_BYTE *)(a1 + 68) = CurrentIrql;
  }
  else
  {
    LOBYTE(v21) = 17;
    CurrentIrql = v21;
  }
  if ( v20 )
  {
    v22 = &v84;
    if ( (_BYTE)v21 != 17 )
      v22 = 0LL;
    MiRelockProtoPoolPage(v20, v22);
    v20 = v89;
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
  v86 = v23;
  LOBYTE(v87) = 17;
  if ( *(_QWORD *)(v5 + 16) != v5 + 16 )
  {
    v73 = MiInvalidateCollidedIos(v5);
    v20 = v89;
    v74 = v73 & 1;
    v9 = 2 * v74;
    if ( !v74 )
    {
      *(_DWORD *)(v5 + 80) = -1073741801;
      *(_QWORD *)(v5 + 88) = 0LL;
    }
  }
  if ( v20 )
  {
    v93 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      v72 = v89;
      do
      {
        do
          KeYieldProcessorEx(&v93);
        while ( *(__int64 *)(v72 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) );
      v17 = v95;
      v20 = v89;
    }
    MiRemoveLockedPageChargeAndDecRef(v20);
    _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v85 >= 0 && !(unsigned int)MiIsFaultPteIntact(a1, v99, (__int64)v91, (_QWORD *)(v5 + 168)) )
    v85 = -1073740748;
  if ( v23 >= 0
    && ((v24 = *(_DWORD *)(v5 + 192), (v24 & 8) != 0)
     || *(_QWORD *)(v5 + 256)
     || (_QWORD *)v17 != v14 && v19 > (unsigned __int64)(v98 + 14))
    && (*(_DWORD *)(v5 + 192) & 0x88000) == 0x80000
    && (*(_DWORD *)(v5 + 192) & 0xE00) != 0 )
  {
    DecayPfn = MiCreateDecayPfn((v24 >> 12) & 7);
    v25 = 0LL;
  }
  else
  {
    v25 = 0LL;
    DecayPfn = 0LL;
  }
  v27 = ZeroPte;
  v28 = 0LL;
  v83 = 0;
  v101 = ZeroPte;
  BugCheckParameter2 = DecayPfn;
  v102 = 0LL;
  if ( (unsigned __int64)v14 > v17 )
  {
    v56 = BugCheckParameter2;
    goto LABEL_84;
  }
  while ( 1 )
  {
    v29 = 0x10000000000000LL;
    v30 = 48LL * *v14 - 0x58000000000LL;
    if ( v30 == qword_140466550 )
    {
      v51 = v83;
      goto LABEL_73;
    }
    if ( (_DWORD)v28 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        MiInsertAndUnlockStandbyPages(DecayPfn, v107, v28, v87);
        v51 = 0;
        v83 = 0;
        --v14;
        goto LABEL_73;
      }
    }
    else
    {
      v55 = KeGetCurrentIrql();
      v87 = v55;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v55 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v94 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v94);
          while ( *(__int64 *)(v30 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
        v28 = v83;
        v25 = 0LL;
        DecayPfn = BugCheckParameter2;
        v29 = 0x10000000000000LL;
      }
    }
    v9 &= 0xFFFFFFCF;
    if ( (v4 & 1) != 0 && HIWORD(v4) )
      v4 = (unsigned __int16)v4 | ((HIWORD(v4) - 1) << 16);
    if ( (*(_QWORD *)(v30 + 24) & 0x4000000000000000LL) != 0 )
    {
      v9 |= 0x20u;
    }
    else
    {
      v31 = *(_BYTE *)(v30 + 35);
      if ( (v31 & 0x10) != 0 )
      {
        if ( v30 == v90 )
        {
          if ( v23 >= 0 )
            v23 = -1073741761;
          v86 = v23;
        }
      }
      else
      {
        if ( v23 >= 0 )
        {
          if ( (unsigned __int64)v14 < v97 )
            goto LABEL_44;
          if ( v30 == v90 )
            v85 = -1073740748;
        }
        *(_BYTE *)(v30 + 35) = v31 | 0x10;
      }
      v9 |= 0x10u;
    }
LABEL_44:
    *(_BYTE *)(v30 + 34) &= ~0x20u;
    *(_QWORD *)v30 = 0LL;
    if ( (v9 & 0x30) != 0 )
    {
      if ( (_DWORD)v28 )
      {
        MiInsertAndUnlockStandbyPages(DecayPfn, v107, v28, 0x11u);
        v51 = 0;
        v83 = 0;
      }
      else
      {
        v51 = v83;
      }
      if ( (v9 & 0x30) == 0x10 )
      {
        v9 &= ~4u;
        if ( (*(_DWORD *)(v5 + 192) & 0x10) == 0 || (v9 & 2) != 0 )
          v9 |= 4u;
        if ( (v9 & 4) != 0 && (*(_DWORD *)(v30 + 16) & 0x400LL) == 0 && !(unsigned int)MiIsPfnCommitNotCharged(v30) )
          MiChargeCommit(*(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v30 + 40) >> 40) & 0x3FFLL)), 1uLL, 4u);
        MiHandleInPageError(v30, v28, v25, v29);
      }
      MiRemoveLockedPageChargeAndDecRef(v30);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_119;
      v69 = v87;
      if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v87 >= 2u )
      {
LABEL_120:
        __writecr8(v69);
        goto LABEL_73;
      }
LABEL_190:
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_120;
    }
    v32 = v90;
    if ( v30 == v90 )
    {
      v59 = v92;
      v9 |= 1u;
      if ( v92 )
      {
        if ( (_DWORD)v28 )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, v107, v28, 0x11u);
          v83 = 0;
          v59 = v92;
        }
        MiSwapHardFaultPage(v91, v30, v59, v29);
        LODWORD(v28) = v83;
        v32 = v59;
        DecayPfn = BugCheckParameter2;
        v90 = v59;
        v30 = v59;
        v92 = 0LL;
      }
      if ( v85 >= 0 && v30 == v32 )
      {
        if ( (_DWORD)v28 )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, v107, v28, 0x11u);
          v51 = 0;
          v83 = 0;
        }
        else
        {
          v51 = v83;
        }
        MiAddLockedPageCharge(v30, 3);
        v60 = *(_BYTE *)(v30 + 34) & 0xFE;
        *(_QWORD *)(v30 + 24) ^= ((*(_QWORD *)(v30 + 24) + 1LL) ^ *(_QWORD *)(v30 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v30 + 34) = v60 | 6;
        MiRemoveLockedPageChargeAndDecRef(v30);
        v61 = *(_QWORD *)(v30 + 40);
        v62 = *(_QWORD *)(qword_140465E88 + 8 * ((v61 >> 40) & 0x3FF));
        v63 = *(_DWORD *)(v30 + 16);
        v102 = v62;
        if ( (v63 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v62, *(_QWORD *)(v30 + 16)) )
        {
          v71 = MiCaptureDirtyBitToPfn(v30);
          v61 = *(_QWORD *)(v30 + 40);
          v27 = v71;
          v101 = v71;
        }
        if ( (v61 & 0x200000000000000LL) != 0 )
        {
          v64 = v91;
          if ( ((*v91 >> 5) & 0x1F) == 0x18 )
            MiMakeProtoReadOnly(v91, v30);
          MiMakeTransitionPteValid((unsigned __int64)v64);
          if ( MiPteInShadowRange((unsigned __int64)v91) )
          {
            if ( !(unsigned int)MiPteHasShadow(v66) )
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v68 & 1) != 0 )
              {
                v65 |= 0x8000000000000000uLL;
              }
              goto LABEL_114;
            }
            if ( !HIBYTE(word_1404658EC) && (v68 & 1) != 0 )
              v65 |= 0x8000000000000000uLL;
            *v67 = v65;
            MiWritePteShadow(v67, v65);
          }
          else
          {
LABEL_114:
            *v67 = v65;
          }
          if ( v103 )
            *v103 = v68;
        }
LABEL_117:
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v51 )
          goto LABEL_73;
        if ( !KiIrqlFlags )
        {
LABEL_119:
          v69 = v87;
          goto LABEL_120;
        }
        v69 = v87;
        if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v87 >= 2u )
          goto LABEL_120;
        goto LABEL_190;
      }
    }
    if ( (*(_DWORD *)(v5 + 192) & 0x8000) != 0 )
    {
      *v14 |= 0x8000000000000000uLL;
LABEL_156:
      v51 = v83;
      goto LABEL_117;
    }
    v33 = *(_WORD *)(v30 + 32);
    if ( !v33 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, (v30 + 0x58000000000LL) / 48, *(_BYTE *)(v30 + 34) & 7, 0LL);
    v34 = v33 == 1;
    v35 = v33 - 1;
    *(_WORD *)(v30 + 32) = v35;
    if ( v34 && (*(_QWORD *)(v30 + 40) & 0x10000000000000LL) != 0 )
      goto LABEL_70;
    v36 = *(_QWORD *)(v30 + 40);
    if ( (v36 & 0x10000000000000LL) != 0 )
      goto LABEL_156;
    v37 = *(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v35 )
    {
      if ( v35 == 1 )
      {
        if ( !v37 && (*(_BYTE *)(v30 + 34) & 8) == 0 )
          goto LABEL_156;
      }
      else if ( v35 != 2 || !v37 || (*(_BYTE *)(v30 + 34) & 8) == 0 )
      {
        goto LABEL_156;
      }
      v38 = 0;
    }
    else
    {
      v38 = 1;
    }
    v39 = *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL;
    if ( v39 <= 0xFFFFF6BFFFFFFF78uLL && v39 >= 0xFFFFF68000000000uLL || (v40 = *(_BYTE *)(v30 + 35), (v40 & 0x20) == 0) )
    {
      if ( (v36 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v30 + 16) & 0x400LL) != 0 )
      {
        v41 = 1;
      }
      else if ( (unsigned int)MiIsPfnCommitNotCharged(v30) )
      {
        v41 = 1;
      }
      else if ( v38 == 1 && (v70 & 0x4000000000000000LL) != 0 )
      {
        v41 = 1;
      }
      v42 = *(_QWORD *)(qword_140465E88 + 8 * ((v36 >> 40) & 0x3FF));
      if ( v41 == 1 )
      {
        v43 = *(_QWORD *)(v42 + 7232);
        if ( v43 )
        {
          while ( 1 )
          {
            v76 = v43;
            v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 7232), v43 - 1, v43);
            if ( v76 == v43 )
              break;
            if ( !v43 )
              goto LABEL_61;
          }
        }
        else
        {
LABEL_61:
          if ( (ULONG_PTR *)v42 == &MiSystemPartition
            && (v44 = KeGetCurrentPrcb(),
                _m_prefetchw((const void *)&v44->CachedCommit),
                CachedCommit = v44->CachedCommit,
                (unsigned __int64)(CachedCommit + 1) <= 0x100) )
          {
            while ( 1 )
            {
              v46 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v44->CachedCommit,
                      CachedCommit + 1,
                      CachedCommit);
              if ( v46 == CachedCommit )
                break;
              CachedCommit = v46;
              if ( (unsigned __int64)(v46 + 1) > 0x100 )
                goto LABEL_75;
            }
          }
          else
          {
LABEL_75:
            v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 8424), 0xFFFFFFFFFFFFFFFFuLL);
            v53 = *(_QWORD *)(v42 + 7200);
            if ( v52 >= v53 && v52 - 1 < v53 || (v54 = *(_QWORD *)(v42 + 7192), v52 >= v54) && v52 - 1 < v54 )
              MiSyncCommitSignals(v42, 0LL);
          }
        }
      }
      if ( (ULONG_PTR *)v42 == &MiSystemPartition )
      {
        v47 = KeGetCurrentPrcb();
        v48 = 1LL;
        CachedResidentAvailable = (int)v47->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v50 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v47->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v34 = (_DWORD)CachedResidentAvailable == v50;
              LODWORD(CachedResidentAvailable) = v50;
              if ( v34 )
                goto LABEL_68;
            }
            while ( v50 != -1 && (unsigned __int64)(v50 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v47->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v48 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_14046A180, v48);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 8128), 1uLL);
      }
LABEL_68:
      LODWORD(v28) = v83;
      goto LABEL_69;
    }
    *(_BYTE *)(v30 + 35) = v40 & 0xDF;
LABEL_69:
    v34 = v38 == 0;
    v17 = v95;
    if ( v34 )
      goto LABEL_156;
LABEL_70:
    if ( (_DWORD)v28 == 16 )
    {
      MiInsertAndUnlockStandbyPages(BugCheckParameter2, v107, 0x10u, 0x11u);
      LODWORD(v28) = 0;
    }
    v83 = v28 + 1;
    v51 = v28 + 1;
    v107[(unsigned int)v28] = v30;
LABEL_73:
    if ( (unsigned __int64)++v14 > v17 )
      break;
    v28 = v83;
    v25 = 0LL;
    v23 = v86;
    DecayPfn = BugCheckParameter2;
  }
  v56 = BugCheckParameter2;
  if ( v51 )
    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v107, v51, v87);
  v23 = v86;
LABEL_84:
  if ( v89 )
  {
    if ( (_BYTE)CurrentIrql == 17 )
      v57 = v84;
    else
      v57 = 17;
    MiUnlockProtoPoolPage(v89, v57);
  }
  if ( (*(_DWORD *)(v5 + 192) & 0x8000) != 0 )
  {
    MmCheckCachedPageStates(v99 + (*(_DWORD *)(v5 + 96) & 0x3FFFF), (unsigned int)v98[10], 2u, 0LL);
    v77 = v100;
    if ( (unsigned __int64)v100 <= v17 )
    {
      do
      {
        if ( *v77 < 0 )
        {
          v78 = *v77 & 0x7FFFFFFFFFFFFFFFLL;
          *v77 = v78;
          v79 = 48 * v78 - 0x58000000000LL;
          v80 = MiLockPageInline(v79);
          MiRemoveLockedPageChargeAndDecRef(v79);
          _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v80 < 2u )
          {
            v81 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v81->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v81);
          }
          __writecr8(v80);
        }
        ++v77;
      }
      while ( (unsigned __int64)v77 <= v17 );
      v27 = v101;
      v5 = v104;
      v23 = v86;
      v56 = BugCheckParameter2;
    }
  }
  if ( v56 )
    MiDecayPfnFullyInitialized(v56);
  if ( v27 )
    MiReleasePageFileInfo(v102, v27, 0);
  if ( v105 && (*(_DWORD *)(v5 + 192) & 0x1000000) != 0 )
    MiReleaseFaultState(v106, 0x11u, 0LL);
  if ( (*(_DWORD *)(v5 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(v5 + 200));
  if ( *(int *)(v5 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v5 + 56), 0, 0);
  MiFreeInPageSupportBlock((PVOID)v5);
  if ( v92 )
  {
    v82 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v92 + 40) >> 40) & 0x3FFLL));
    MiReleaseFreshPage(v92);
    if ( (ULONG_PTR *)v82 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 8128), 1uLL);
    MiReturnCommit(v82, 1uLL);
  }
  if ( v23 < 0 )
  {
    if ( (v4 & 3) == 1 )
      return (unsigned int)-1073740748;
    return (unsigned int)v23;
  }
  else if ( (v9 & 1) != 0 )
  {
    return (unsigned int)v85;
  }
  else
  {
    return 3221226548LL;
  }
}
