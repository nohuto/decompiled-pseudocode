/*
 * XREFs of MiStealPage @ 0x1400C3928
 * Callers:
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 * Callees:
 *     MiTbFlushType @ 0x1400241C0 (MiTbFlushType.c)
 *     MiGetPagePrivilege @ 0x140024CF0 (MiGetPagePrivilege.c)
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DFB8 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiHyperSpaceSize @ 0x140075EC0 (MiHyperSpaceSize.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiClearPfnImageVerified @ 0x1400BB9EC (MiClearPfnImageVerified.c)
 *     MiVaIsPageFileHash @ 0x1400BD7F4 (MiVaIsPageFileHash.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     MiUnlockStealVm @ 0x1400C4688 (MiUnlockStealVm.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiWriteValidPteNewPage @ 0x1400FA008 (MiWriteValidPteNewPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 *     MiReplacePageOfProtoPool @ 0x14012858C (MiReplacePageOfProtoPool.c)
 *     MiLockStealSystemVm @ 0x14012CDC0 (MiLockStealSystemVm.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     MiSmallVaStillMapsFrame @ 0x1401396D8 (MiSmallVaStillMapsFrame.c)
 *     MiPrepareToStealNonPagedPool @ 0x14013C614 (MiPrepareToStealNonPagedPool.c)
 *     KeSwapDirectoryTableBase @ 0x14019DBCC (KeSwapDirectoryTableBase.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiStealPage(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        int a3,
        __int64 *a4,
        int a5,
        ULONG_PTR *a6)
{
  ULONG_PTR v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 LeafVa; // r9
  _KPROCESS *v14; // r11
  int v15; // r8d
  unsigned __int64 v16; // r10
  int v17; // r10d
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r13
  unsigned int v22; // ebx
  __int64 v23; // rdi
  int v24; // edx
  __int64 *v25; // rax
  int v26; // ecx
  unsigned int v27; // r12d
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // edx
  unsigned int v31; // edx
  __int64 Page; // rax
  __int64 PageChain; // r14
  unsigned __int8 v34; // r15
  unsigned int v35; // r11d
  int v36; // r9d
  signed __int64 v37; // rdi
  int v38; // r10d
  volatile signed __int64 *v39; // r11
  unsigned int v40; // ebx
  ULONG_PTR v41; // rbx
  __int16 v42; // dx
  int v43; // r11d
  int v44; // ecx
  char v45; // bl
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  ULONG_PTR v49; // rbx
  int v50; // r11d
  unsigned int v51; // eax
  int v52; // r14d
  unsigned __int64 v53; // rax
  ULONG_PTR v54; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // r8d
  _QWORD *v59; // r11
  unsigned int v60; // eax
  int v61; // edx
  __int64 v62; // rcx
  ULONG_PTR *v63; // r8
  int v64; // eax
  int v65; // r10d
  int v66; // r8d
  char v67; // al
  __int64 PteFromCopyList; // rax
  _QWORD *v69; // r13
  ULONG_PTR v70; // r10
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // r8d
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // r8
  __int64 v78; // r9
  unsigned __int8 v79; // al
  unsigned __int8 v80; // bl
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rbx
  volatile signed __int64 *v86; // r9
  unsigned __int64 v87; // rax
  _KPROCESS *v88; // rdx
  int v89; // ecx
  LONG *SharedVm; // rbx
  _KPROCESS *v91; // rax
  unsigned __int64 v92; // r10
  unsigned __int64 v93; // rax
  __int64 v94; // r10
  __int64 v95; // rcx
  __int64 v96; // r11
  int v97; // r9d
  char v98; // al
  unsigned __int8 v99; // r10
  __int64 v100; // rcx
  char WsleContents; // al
  char v102; // r10
  __int64 v103; // rcx
  int v104; // r8d
  unsigned int v105; // r9d
  int PagePrivilege; // eax
  bool v107; // zf
  bool v108; // cf
  __int64 IsPageFileHash; // rax
  __int64 v110; // rbx
  unsigned __int8 v111; // bl
  struct _KPRCB *v112; // rcx
  struct _KPRCB *v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  char v117; // r11
  char v118; // r11
  struct _KPRCB *v119; // rcx
  char v120; // dl
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v122; // rcx
  struct _KPRCB *v123; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v125; // di
  struct _KPRCB *v126; // rcx
  unsigned __int8 v127[8]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v128; // [rsp+48h] [rbp-B8h]
  unsigned int v129; // [rsp+50h] [rbp-B0h]
  __int64 *v130; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v131; // [rsp+60h] [rbp-A0h]
  volatile signed __int64 *v132; // [rsp+68h] [rbp-98h]
  ULONG_PTR v133; // [rsp+70h] [rbp-90h]
  __int64 v134; // [rsp+78h] [rbp-88h]
  int v135; // [rsp+80h] [rbp-80h]
  __int64 v136; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  int v138; // [rsp+98h] [rbp-68h] BYREF
  int v139; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v140; // [rsp+A0h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v142; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v143; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v144; // [rsp+D0h] [rbp-30h]
  ULONG_PTR *v145; // [rsp+D8h] [rbp-28h]
  _QWORD v146[5]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+8h]
  _KPROCESS *v148; // [rsp+110h] [rbp+10h]
  __int64 v149; // [rsp+118h] [rbp+18h]
  unsigned __int64 DeepFreezeStartTime; // [rsp+120h] [rbp+20h]
  _QWORD v151[15]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v152; // [rsp+1A8h] [rbp+A8h]
  _QWORD v153[24]; // [rsp+1B0h] [rbp+B0h] BYREF

  v143 = BugCheckParameter2;
  v130 = a4;
  v8 = BugCheckParameter2;
  v145 = a6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset((char *)v151 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(v8 + 8);
  v152 = -1LL;
  v10 = v9 | 0x8000000000000000uLL;
  LODWORD(v151[0]) = a3;
  v132 = (volatile signed __int64 *)v10;
  v11 = 0LL;
  v144 = 0LL;
  v135 = 0;
  v140 = 0LL;
  v12 = (__int64)(v10 << 25) >> 16;
  v131 = v12;
  LeafVa = MiGetLeafVa(v12);
  v15 = (_DWORD)v14 + 1;
  if ( v12 < v16 || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    v17 = v15 | LODWORD(v151[1]);
  else
    v17 = ((_DWORD)v14 + 8) | LODWORD(v151[1]);
  LODWORD(v151[1]) = v17;
  v18 = (unsigned __int128)((__int64)(v8 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v19 = (__int64)(v8 + 0x58000000000LL) / 48;
  v133 = v19;
  v128 = -1LL;
  if ( a6 )
    *a6 = -1LL;
  v20 = (*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL;
  Process = v14;
  v21 = *(_QWORD *)(qword_140465E88 + 8 * v20);
  v136 = v21;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_6;
  if ( LeafVa <= qword_140465BE0 && LeafVa >= qword_1404672B0 )
  {
    v65 = v17 | 8;
    if ( ((unsigned __int8)v65 & (unsigned __int8)v15) != 0 )
    {
      v17 = v65 | 2;
      if ( v12 >= qword_140465BD8 && v12 < qword_140465BD8 + MiHyperSpaceSize() )
        v17 |= 0x100u;
    }
    else
    {
      v17 = v65 | 4;
    }
LABEL_6:
    v17 |= 0x1000u;
    LODWORD(v151[1]) = v17;
  }
  LOBYTE(v18) = a2;
  if ( (v17 & 0x1000) != 0 )
  {
    v22 = MiLockStealUserVm(v8, a2, v10, (__int64)v151);
    if ( v22 == 1 )
    {
      v22 = 0;
      v23 = v151[3];
      v24 = v151[6];
      v134 = v151[3];
      Process = KeGetCurrentThread()->ApcState.Process;
      v25 = v130;
      v129 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v22 = MiLockStealSystemVm(v8, v18, v10, v151);
    if ( v22 == 1 )
    {
      v23 = v151[3];
      v24 = v151[6];
      v22 = 0;
      v134 = v151[3];
      v66 = 1;
      v129 = 1;
      v67 = *(_BYTE *)(v151[3] + 184LL) & 7;
      if ( v67 == 7 )
      {
        v25 = v130;
        if ( !v130[2] )
        {
          v54 = v128;
          v52 = 2;
          goto LABEL_83;
        }
        v129 = 2;
      }
      else
      {
        v107 = ((v67 - 1) & 0xFD) == 0;
        v25 = v130;
        if ( !v107 )
        {
          if ( LODWORD(v151[6]) == 1 )
            v66 = 2;
          v129 = v66;
        }
      }
      if ( LODWORD(v151[6]) == 3 )
      {
        if ( (v151[1] & 1) != 0 )
          v26 = LODWORD(v151[1]) | 0xA;
        else
          v26 = LODWORD(v151[1]) | 0xC;
        LODWORD(v151[1]) = v26;
LABEL_11:
        if ( v25[2] )
        {
          v27 = *(unsigned __int8 *)(v8 + 34) >> 6;
          if ( a5 == -1 )
          {
            v28 = MiPageToNode((__int64)(v8 + 0x58000000000LL) / 48);
            v29 = 0;
            v30 = (v28 << byte_14046574D) | (((*(_QWORD *)(v8 + 40) >> 36) & 3) << byte_14046574E);
          }
          else
          {
            v29 = 48;
            v30 = a5 & ~dword_1404657B0;
          }
          v31 = dword_1404657B0 & v19 | v30;
          if ( v152 == -1 )
          {
            Page = MiGetPage(v21, v31, v29);
            v128 = Page;
            if ( Page == -1 )
            {
              v54 = -1LL;
              v52 = 2;
              goto LABEL_83;
            }
            PageChain = 48 * Page - 0x58000000000LL;
LABEL_17:
            if ( PageChain == v8 )
            {
              v54 = v128;
              v22 = 1;
              v52 = 2;
              goto LABEL_83;
            }
            v34 = MiLockPageInline(v8);
            if ( (MiFlags & 0x8000) != 0 )
            {
              PagePrivilege = MiGetPagePrivilege(v8, 1, 0LL);
              v35 = 0;
              if ( PagePrivilege )
              {
                v36 = LODWORD(v151[1]) | 0x2000;
                LODWORD(v151[1]) |= 0x2000u;
LABEL_21:
                v37 = 0LL;
                if ( *(_WORD *)(v8 + 32) == 1 )
                {
                  v38 = v151[6];
                  if ( ((*(_BYTE *)(v8 + 35) & 8) != 0 || (*(_BYTE *)v8 & 1) == 0)
                    && LODWORD(v151[6]) != 2
                    && (v36 & 0x26) == 0
                    || (*(_BYTE *)(v8 + 34) & 7) != 6
                    || v21 != *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                    {
                      v108 = v34 < 2u;
LABEL_301:
                      if ( v108 )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        v35 = 0;
                      }
                    }
LABEL_303:
                    __writecr8(v34);
                    goto LABEL_304;
                  }
                  v39 = v132;
                  if ( (v36 & 0x20) == 0 )
                    v37 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v132);
                  v40 = v129;
                  if ( v38 == 3 || (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v129 != 1 )
                  {
LABEL_30:
                    if ( v38 != 2 )
                    {
                      if ( (v36 & 0x20) != 0 )
                      {
                        v81 = MiPrepareToStealNonPagedPool(v8, v39);
                        v35 = 0;
                        v37 = v81;
                        if ( !v81 )
                        {
                          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( !KiIrqlFlags )
                            goto LABEL_303;
                          v107 = (KiIrqlFlags & 1) == 0;
                          goto LABEL_219;
                        }
                      }
                      else if ( ((v36 & 8) == 0 || (v36 & 0x100) != 0) && ((v37 & 0x42) != 0 || (v36 & 0x2000) != 0) )
                      {
                        if ( (v36 & 0x100) != 0 )
                        {
                          MiWriteValidPteNewProtection((unsigned __int64)v39);
                        }
                        else
                        {
                          LODWORD(v151[1]) = v36 | 0x40;
                          if ( MiPteInShadowRange((unsigned __int64)v39) && (unsigned int)MiPteHasShadow(v57) )
                            v58 = 1;
                          *v59 = v56;
                          if ( v58 )
                            MiWritePteShadow(v59, v56);
                          v135 = 1;
                        }
                        v60 = MiTbFlushType(v134);
                        KeFlushSingleTb(v131, v60, v40);
                      }
                    }
                    if ( v40 == 1 )
                    {
                      if ( (v151[1] & 4) != 0 )
                        v40 = 2;
                      v129 = v40;
                    }
                    MiLockNestedPageAtDpcInline(PageChain);
                    MiFinalizePageAttribute(PageChain, v27, 1u);
                    if ( LODWORD(v151[6]) != 2 )
                    {
                      v41 = v133;
                      goto LABEL_38;
                    }
                    IsPageFileHash = MiVaIsPageFileHash(v21, v131);
                    v35 = 0;
                    v110 = IsPageFileHash;
                    if ( IsPageFileHash )
                    {
                      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(IsPageFileHash + 232), &LockHandle);
                      if ( v110 == MiVaIsPageFileHash(v136, v131) )
                      {
                        v41 = v133;
                        if ( (unsigned int)MiSmallVaStillMapsFrame(v131, v133) )
                        {
LABEL_38:
                          MiCopyPfnEntryEx(PageChain, (__int128 *)v8);
                          if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v41 )
                            *(_QWORD *)(PageChain + 40) ^= (*(_QWORD *)(PageChain + 40) ^ v128) & 0xFFFFFFFFFLL;
                          _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          v42 = v151[1];
                          if ( (v151[1] & 0x20) == 0 && LODWORD(v151[6]) != 2 )
                          {
                            if ( (v151[1] & 0x200) == 0 )
                            {
                              if ( (v151[1] & 8) == 0 && !v129
                                || (v64 = v151[1] & 0xA, v64 == 10)
                                || (v151[1] & 0x100) != 0 )
                              {
                                *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                              }
                              else if ( (v64 != 8 || v129) && (LODWORD(v151[6]) != 3 || (v151[1] & 4) == 0) )
                              {
                                goto LABEL_48;
                              }
                            }
                            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
                            {
                              v113 = KeGetCurrentPrcb();
                              _InterlockedAnd((volatile signed __int32 *)v113->SchedulerAssist, 0xFFFEFFFF);
                              KiRemoveSystemWorkPriorityKick(v113);
                            }
                            __writecr8(v34);
                            v42 = v151[1];
                            v34 = 17;
                          }
LABEL_48:
                          if ( (v42 & 0x200) == 0 )
                          {
                            v43 = 0;
                            v127[0] = 17;
                            v136 = 0LL;
                            goto LABEL_50;
                          }
                          v136 = MiLockProtoPoolPage(v131, v127);
                          v85 = v136;
                          if ( !v136 )
                          {
LABEL_272:
                            MiSetOriginalPtePfnFromFreeList(PageChain + 16, v75, v77, v78);
                            goto LABEL_304;
                          }
                          if ( *(_WORD *)(v136 + 32) <= 2u )
                          {
                            v37 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v132);
                            if ( (v37 & 0x42) == 0 )
                            {
                              v42 = v151[1];
                              v41 = v133;
                              goto LABEL_50;
                            }
                            v138 = v43;
                            if ( _interlockedbittestandset64((volatile signed __int32 *)(v85 + 24), 0x3FuLL) )
                            {
                              do
                              {
                                do
                                  KeYieldProcessorEx(&v138);
                                while ( *(__int64 *)(v85 + 24) < 0 );
                              }
                              while ( _interlockedbittestandset64((volatile signed __int32 *)(v85 + 24), 0x3FuLL) );
                              v8 = v143;
                              v86 = v132;
                            }
                            if ( *(_WORD *)(v85 + 32) <= 2u )
                            {
                              MiWriteValidPteNewProtection((unsigned __int64)v86);
                              KeFlushSingleTb(v131, 0LL, 1LL);
                              v87 = MiCaptureDirtyBitToPfn(v85);
                              _InterlockedAnd64((volatile signed __int64 *)(v85 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                              if ( v87 )
                                MiReleasePageFileInfo(
                                  *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v85 + 40) >> 40) & 0x3FFLL)),
                                  v87,
                                  1);
                              v139 = 0;
                              while ( _interlockedbittestandset64((volatile signed __int32 *)(PageChain + 24), 0x3FuLL) )
                              {
                                do
                                  KeYieldProcessorEx(&v139);
                                while ( *(__int64 *)(PageChain + 24) < 0 );
                              }
                              MiCaptureDirtyBitToPfn(PageChain);
                              _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                              v42 = v151[1];
                              v43 = 0;
                              v41 = v133;
LABEL_50:
                              if ( (v42 & 0x200) == 0
                                && (LODWORD(v151[6]) != 3 || (v42 & 4) == 0)
                                && ((v42 & 0xA) != 8 || v129 != v43) )
                              {
                                if ( v34 != 17 )
                                {
                                  MiLockNestedPageAtDpcInline(PageChain);
                                  v42 = v151[1];
                                }
                                v44 = v34 != 17 ? 4 : 0;
                                v45 = v44 | 2;
                                if ( (v42 & 0x2000) == 0 )
                                  v45 = v44;
                                MiCopyPage(v128, v133, v130, v45);
                                if ( (v45 & 4) != 0 )
                                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                v48 = LODWORD(v151[1]);
                                if ( (v151[1] & 0x20) == 0 && v34 != 17 )
                                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                                goto LABEL_62;
                              }
                              PteFromCopyList = MiGetPteFromCopyList(v130, v128, v41);
                              v69 = (_QWORD *)PteFromCopyList;
                              if ( (v151[1] & 0x200) != 0 )
                              {
                                v71 = MiReplacePageOfProtoPool(v131, v41, v128, ((PteFromCopyList << 25) - v140) >> 16);
                                goto LABEL_130;
                              }
                              v70 = v133;
                              CurrentThread = KeGetCurrentThread();
                              v146[1] = v131;
                              v146[3] = v41;
                              v146[2] = ((PteFromCopyList << 25) - v140) >> 16;
                              v146[4] = v128;
                              v146[0] = v134;
                              v149 = 0LL;
                              DeepFreezeStartTime = 0LL;
                              v148 = CurrentThread->ApcState.Process;
                              v71 = 1;
                              LODWORD(v130) = 1;
                              if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v133 )
                              {
                                if ( (*(_BYTE *)(v134 + 187) & 2) != 0
                                  || _interlockedbittestandset(
                                       (volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[4] + 1,
                                       1u) )
                                {
                                  v71 = 0;
                                  goto LABEL_130;
                                }
                                v88 = v148;
                                v89 = LODWORD(v151[1]) | 0x400;
                                LODWORD(v151[1]) |= 0x400u;
                                if ( v148->DirectoryTableBase >> 12 != v70 )
                                {
                                  HIDWORD(v149) = 1;
                                  DeepFreezeStartTime = v148[2].DeepFreezeStartTime;
                                  LODWORD(v151[1]) = v89 | 0x4000;
                                }
                                LOBYTE(v88) = 17;
                                MiReleaseFaultState(&v151[3], v88, 0LL);
                                KeSwapDirectoryTableBase(v148, HIDWORD(v149), v146);
                                SharedVm = MiGetSharedVm(v134);
                                ExAcquireSpinLockExclusive(SharedVm);
                                v91 = Process;
                                SharedVm[1] = 0;
                                _InterlockedAnd(
                                  (volatile signed __int32 *)&v91[2].ActiveProcessors.Bitmap[4] + 1,
                                  0xFFFFFFFD);
                                v71 = (int)v130;
                              }
                              else
                              {
                                MiReplacePageTablePage(v146);
                              }
                              if ( (int)v149 < 0 )
                                v71 = 0;
LABEL_130:
                              if ( !MiPteInShadowRange((unsigned __int64)v69) )
                                goto LABEL_131;
                              if ( (unsigned int)MiPteHasShadow(v73) )
                              {
                                v74 = 1;
                                if ( HIBYTE(word_1404658EC) != v117 )
                                  goto LABEL_131;
                              }
                              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
                              {
                                goto LABEL_131;
                              }
                              if ( (v72 & 1) != 0 )
                                v72 |= 0x8000000000000000uLL;
LABEL_131:
                              *v69 = v72;
                              if ( v74 )
                                MiWritePteShadow(v69, v72);
                              if ( !MiPteInShadowRange((unsigned __int64)(v69 + 1)) )
                                goto LABEL_134;
                              if ( (unsigned int)MiPteHasShadow(v76) )
                              {
                                v78 = 1LL;
                                if ( HIBYTE(word_1404658EC) == v118 )
                                  goto LABEL_266;
                              }
                              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
                              {
LABEL_266:
                                if ( (v75 & 1) != 0 )
                                  v75 |= 0x8000000000000000uLL;
                              }
LABEL_134:
                              *v77 = v75;
                              if ( (_DWORD)v78 )
                                MiWritePteShadow(v77, v75);
                              if ( v71 )
                              {
                                if ( (v151[1] & 0x200) != 0 )
                                {
                                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                                  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
                                  MiLockNestedPageAtDpcInline(PageChain);
                                }
                                else
                                {
                                  v79 = MiLockPageInline(v8);
                                  v46 = 0xC000000000000001uLL;
                                  v80 = v79;
                                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                                  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
                                  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v79 < 2u )
                                  {
                                    v119 = KeGetCurrentPrcb();
                                    _InterlockedAnd((volatile signed __int32 *)v119->SchedulerAssist, 0xFFFEFFFF);
                                    KiRemoveSystemWorkPriorityKick(v119);
                                  }
                                  __writecr8(v80);
                                  v34 = 17;
                                }
                                v48 = LODWORD(v151[1]);
LABEL_62:
                                v49 = v37 ^ (v37 ^ (v128 << 12)) & 0xFFFFFFFFF000LL;
                                if ( (v48 & 0x20) == 0 )
                                {
                                  if ( (v48 & 0x400) == 0 )
                                  {
                                    if ( (v48 & 0x40) == 0 )
                                    {
                                      if ( (v48 & 0x200) == 0 && (v48 & 0x10) != 0 )
                                        MiLockNestedPageAtDpcInline(PageChain);
                                      MiWriteValidPteNewPage(v132, v49, 0LL);
                                      LOWORD(v48) = v151[1];
                                      goto LABEL_69;
                                    }
                                    if ( !MiPteInShadowRange((unsigned __int64)v132) )
                                    {
LABEL_97:
                                      *v63 = v49;
                                      if ( v61 )
                                        MiWritePteShadow(v63, v49);
                                      LOWORD(v48) = v151[1];
                                      goto LABEL_70;
                                    }
                                    if ( (unsigned int)MiPteHasShadow(v62) )
                                    {
                                      v61 = 1;
                                      if ( HIBYTE(word_1404658EC) != (_BYTE)v50 )
                                        goto LABEL_97;
                                    }
                                    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
                                    {
                                      goto LABEL_97;
                                    }
                                    if ( (v49 & 1) != 0 )
                                      v49 |= 0x8000000000000000uLL;
                                    goto LABEL_97;
                                  }
                                  if ( (v48 & 0x4000) == 0 )
                                  {
LABEL_69:
                                    v50 = 0;
LABEL_70:
                                    if ( v135 != v50 )
                                    {
LABEL_73:
                                      if ( (v48 & 0x200) != 0 )
                                      {
                                        _InterlockedAnd64(
                                          (volatile signed __int64 *)(PageChain + 24),
                                          0x7FFFFFFFFFFFFFFFuLL);
                                        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                        MiUnlockProtoPoolPage(v136, v127[0]);
                                        v34 = 17;
                                      }
                                      else if ( (v48 & 0x50) == 0x10 )
                                      {
                                        _InterlockedAnd64(
                                          (volatile signed __int64 *)(PageChain + 24),
                                          0x7FFFFFFFFFFFFFFFuLL);
                                      }
                                      if ( ((*(_QWORD *)(v8 + 40) >> 54) & 7) == 3 )
                                      {
                                        v120 = 12;
                                        if ( v34 == 17 )
                                          v120 = 8;
                                        MiClearPfnImageVerified(v8, v120);
                                      }
                                      v52 = 2;
                                      if ( LODWORD(v151[6]) == 2 )
                                      {
                                        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                                        OldIrql = LockHandle.OldIrql;
                                        if ( KiIrqlFlags
                                          && (KiIrqlFlags & 1) != 0
                                          && KeGetCurrentIrql() >= 2u
                                          && LockHandle.OldIrql < 2u )
                                        {
                                          v122 = KeGetCurrentPrcb();
                                          _InterlockedAnd((volatile signed __int32 *)v122->SchedulerAssist, 0xFFFEFFFF);
                                          KiRemoveSystemWorkPriorityKick(v122);
                                        }
                                        __writecr8(OldIrql);
                                      }
                                      if ( v34 == 17 )
                                        v34 = MiLockPageInline(v8);
                                      *(_QWORD *)(v8 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
                                      *(_BYTE *)(v8 + 34) &= 0xC7u;
                                      *(_BYTE *)(v8 + 35) &= ~0x20u;
                                      *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
                                      *(_WORD *)(v8 + 32) = 0;
                                      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
                                      {
                                        v123 = KeGetCurrentPrcb();
                                        _InterlockedAnd((volatile signed __int32 *)v123->SchedulerAssist, 0xFFFEFFFF);
                                        KiRemoveSystemWorkPriorityKick(v123);
                                      }
                                      v53 = v34;
                                      v22 = 1;
                                      v11 = v144;
LABEL_82:
                                      __writecr8(v53);
                                      v54 = v128;
LABEL_83:
                                      MiUnlockStealVm(v151);
                                      if ( v11 )
                                        MiReleaseFreshPage(v11);
                                      MiLockPageInline(v8);
                                      if ( v22 == 1 )
                                      {
                                        if ( v145 )
                                          *v145 = v54;
                                      }
                                      else
                                      {
                                        if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
                                          v22 = v52;
                                        if ( v22 == v52 && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
                                          return 0;
                                      }
                                      return v22;
                                    }
                                    v51 = MiTbFlushType(v134);
                                    KeFlushSingleTb(v131, v51, v129);
LABEL_72:
                                    LOWORD(v48) = v151[1];
                                    goto LABEL_73;
                                  }
                                  v92 = Process[2].DeepFreezeStartTime;
                                  if ( v92 )
                                  {
                                    v93 = MI_READ_PTE_LOCK_FREE(((v92 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                                    v95 = 0LL;
                                    if ( ((v93 >> 12) & 0xFFFFFFFFFLL) == v96 )
                                      v95 = v94;
                                    v50 = 0;
                                    if ( v95 )
                                      goto LABEL_70;
                                  }
                                  v52 = 2;
                                  v22 = 2;
                                  v11 = v8;
                                  MiSetOriginalPtePfnFromFreeList(v8 + 16, v46, v47, v48);
LABEL_305:
                                  if ( !v11 )
                                  {
                                    v54 = v128;
                                    goto LABEL_83;
                                  }
                                  v125 = MiLockPageInline(v11);
                                  *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 5;
                                  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v125 < 2u )
                                  {
                                    v126 = KeGetCurrentPrcb();
                                    _InterlockedAnd((volatile signed __int32 *)v126->SchedulerAssist, 0xFFFEFFFF);
                                    KiRemoveSystemWorkPriorityKick(v126);
                                  }
                                  v53 = v125;
                                  goto LABEL_82;
                                }
                                MiLockNestedPageAtDpcInline(PageChain);
                                if ( v37 == _InterlockedCompareExchange64(v132, v49 | 0x20, v37) )
                                {
                                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                                  goto LABEL_72;
                                }
                                MiSetOriginalPtePfnFromFreeList(PageChain + 16, v82, v83, v84);
                                *(_BYTE *)(PageChain + 34) = *(_BYTE *)(PageChain + 34) & 0xF8 | 5;
                                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                v35 = 0;
                                goto LABEL_238;
                              }
                              if ( (v151[1] & 0x200) != 0 )
                                MiUnlockProtoPoolPage(v136, v127[0]);
                              goto LABEL_272;
                            }
                            _InterlockedAnd64((volatile signed __int64 *)(v85 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          }
                          MiUnlockProtoPoolPage(v85, v127[0]);
                          MiSetOriginalPtePfnFromFreeList(PageChain + 16, v114, v115, v116);
                          v35 = 0;
LABEL_304:
                          v11 = PageChain;
                          v22 = v35;
                          v52 = 2;
                          goto LABEL_305;
                        }
                      }
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      v35 = 0;
                      v111 = LockHandle.OldIrql;
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                      {
                        v112 = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)v112->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(v112);
                        v35 = 0;
                      }
                      __writecr8(v111);
                    }
                    _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_238:
                    if ( !KiIrqlFlags )
                      goto LABEL_303;
                    v107 = (KiIrqlFlags & 1) == 0;
LABEL_219:
                    if ( !v107 && KeGetCurrentIrql() >= 2u )
                    {
                      v108 = v34 < 2u;
                      goto LABEL_301;
                    }
                    goto LABEL_303;
                  }
                  if ( (v36 & 0x10) != 0 )
                  {
                    v36 |= 0x208u;
                    LODWORD(v151[1]) = v36;
                    goto LABEL_30;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v35 = 0;
                }
                else
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
                if ( !KiIrqlFlags )
                  goto LABEL_303;
                v107 = (KiIrqlFlags & 1) == 0;
                goto LABEL_219;
              }
            }
            else
            {
              v35 = 0;
            }
            v36 = v151[1];
            goto LABEL_21;
          }
          v104 = (*(_QWORD *)(v8 + 40) >> 58) + 1;
          if ( v27 == 2 )
          {
            v105 = 28;
          }
          else
          {
            v105 = 4;
            if ( !v27 )
              v105 = 12;
          }
          v142 = 1LL;
          PageChain = MiGetPageChain(v21, v23, v104, v105, v29, v152, &v142);
          if ( PageChain )
          {
            v128 = (PageChain + 0x58000000000LL) / 48;
            goto LABEL_17;
          }
          v54 = -1LL;
          v22 = 0;
        }
        else
        {
          v22 = 0;
          if ( (v26 & 0x20) == 0 && (*(_BYTE *)(v8 + 34) & 0x10) == 0 )
          {
            v97 = 2;
            if ( v24 == 2
              || (v26 & 8) != 0
              || (v98 = MI_READ_PTE_LOCK_FREE(v10), v100 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL, v100 == v19)
              || (v98 & 0x42) != 0
              || (v99 & *(_BYTE *)(v8 + 35)) != 0
              || (WsleContents = MiGetWsleContents(v100, v131), (WsleContents & 0xF) == v102) )
            {
              v54 = v128;
              v52 = v97;
            }
            else
            {
              memset(v153, 0, 0xB8uLL);
              LODWORD(v153[0]) = MiTbFlushType(v134);
              WORD2(v153[0]) = 4;
              v153[2] = 0LL;
              LODWORD(v153[1]) = 20;
              v153[3] = 0LL;
              if ( dword_140466068 )
                MI_WSLE_LOG_ACCESS(v103, (_BYTE *)v10);
              MiInsertTbFlushEntry((__int64)v153, v131, 1LL, 0);
              v54 = v128;
              v52 = 2;
              if ( !MiFreeWsleList(v134, (__int64)v153, 0) )
                v22 = 2;
            }
            goto LABEL_83;
          }
          v54 = v128;
        }
        v52 = 2;
        goto LABEL_83;
      }
LABEL_10:
      LOBYTE(v26) = v151[1];
      goto LABEL_11;
    }
  }
  MiLockPageInline(v8);
  if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
    return 0;
  return v22;
}
