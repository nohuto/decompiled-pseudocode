/*
 * XREFs of MiStealPage @ 0x1400A0834
 * Callers:
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 * Callees:
 *     MiTbFlushType @ 0x140023DD0 (MiTbFlushType.c)
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DF18 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiHyperSpaceSize @ 0x140075C50 (MiHyperSpaceSize.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MiCopyPfnEntryEx @ 0x14009D550 (MiCopyPfnEntryEx.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiUnlockStealVm @ 0x1400A1594 (MiUnlockStealVm.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiFinalizePageAttribute @ 0x1400A3F48 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiVaIsPageFileHash @ 0x1400DD974 (MiVaIsPageFileHash.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiWriteValidPteNewPage @ 0x1400F6568 (MiWriteValidPteNewPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     MiReplacePageTablePage @ 0x140121430 (MiReplacePageTablePage.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiReplacePageOfProtoPool @ 0x140127B6C (MiReplacePageOfProtoPool.c)
 *     MiLockStealSystemVm @ 0x14012C2F0 (MiLockStealSystemVm.c)
 *     MiGetPteFromCopyList @ 0x1401379BC (MiGetPteFromCopyList.c)
 *     MiSmallVaStillMapsFrame @ 0x140139038 (MiSmallVaStillMapsFrame.c)
 *     MiPrepareToStealNonPagedPool @ 0x14013BFF4 (MiPrepareToStealNonPagedPool.c)
 *     KeSwapDirectoryTableBase @ 0x14019D44C (KeSwapDirectoryTableBase.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiStealPage(ULONG_PTR BugCheckParameter2, char a2, int a3, __int64 *a4, int a5, ULONG_PTR *a6)
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
  ULONG_PTR v21; // r13
  unsigned int v22; // ebx
  int v23; // edi
  int v24; // edx
  __int64 *v25; // rax
  int v26; // ecx
  unsigned int v27; // r12d
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // edx
  __int64 v31; // rdx
  __int64 Page; // rax
  __int64 PageChain; // r14
  unsigned __int8 v34; // r15
  unsigned int v35; // r11d
  int v36; // r9d
  signed __int64 v37; // rdi
  int v38; // r10d
  volatile signed __int64 *v39; // r11
  unsigned int v40; // ebx
  __int64 v41; // r9
  ULONG_PTR v42; // rbx
  __int16 v43; // dx
  int v44; // r11d
  int v45; // ecx
  char v46; // bl
  unsigned __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  ULONG_PTR v50; // rbx
  int v51; // r11d
  unsigned int v52; // eax
  int v53; // r14d
  unsigned __int64 v54; // rax
  ULONG_PTR v55; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // r8d
  _QWORD *v60; // r11
  unsigned int v61; // eax
  int v62; // edx
  __int64 v63; // rcx
  ULONG_PTR *v64; // r8
  int v65; // eax
  int v66; // r10d
  unsigned int v67; // r8d
  char v68; // al
  __int64 PteFromCopyList; // rax
  _QWORD *v70; // r13
  ULONG_PTR v71; // r10
  int v72; // ebx
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // r8d
  __int64 v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // r8
  __int64 v79; // r9
  unsigned __int8 v80; // al
  unsigned __int8 v81; // bl
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  ULONG_PTR v86; // rbx
  volatile signed __int64 *v87; // r9
  unsigned __int64 v88; // rax
  _KPROCESS *v89; // rdx
  int v90; // ecx
  LONG *SharedVm; // rbx
  _KPROCESS *v92; // rax
  unsigned __int64 v93; // r10
  unsigned __int64 v94; // rax
  __int64 v95; // r10
  __int64 v96; // rcx
  __int64 v97; // r11
  int v98; // r9d
  char v99; // al
  unsigned __int8 v100; // r10
  __int64 v101; // rcx
  char WsleContents; // al
  char v103; // r10
  __int64 v104; // rcx
  int v105; // r8d
  int v106; // r9d
  int PagePrivilege; // eax
  bool v108; // zf
  bool v109; // cf
  __int64 IsPageFileHash; // rax
  __int64 v111; // rbx
  unsigned __int8 v112; // bl
  struct _KPRCB *v113; // rcx
  struct _KPRCB *v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  char v118; // r11
  char v119; // r11
  struct _KPRCB *v120; // rcx
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
  ULONG_PTR v136; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  int v138; // [rsp+98h] [rbp-68h] BYREF
  int v139; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v140; // [rsp+A0h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v142; // [rsp+C0h] [rbp-40h] BYREF
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
  v21 = *(_QWORD *)(qword_140466188 + 8 * v20);
  v136 = v21;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_6;
  if ( LeafVa <= qword_140465EE0 && LeafVa >= qword_1404675B0 )
  {
    v66 = v17 | 8;
    if ( ((unsigned __int8)v66 & (unsigned __int8)v15) != 0 )
    {
      v17 = v66 | 2;
      if ( v12 >= qword_140465ED8 && v12 < qword_140465ED8 + MiHyperSpaceSize() )
        v17 |= 0x100u;
    }
    else
    {
      v17 = v66 | 4;
    }
LABEL_6:
    v17 |= 0x1000u;
    LODWORD(v151[1]) = v17;
  }
  LOBYTE(v18) = a2;
  if ( (v17 & 0x1000) != 0 )
  {
    v22 = MiLockStealUserVm(v8);
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
      v67 = 1;
      v129 = 1;
      v68 = *(_BYTE *)(v151[3] + 184LL) & 7;
      if ( v68 == 7 )
      {
        v25 = v130;
        if ( !v130[2] )
        {
          v55 = v128;
          v53 = 2;
          goto LABEL_84;
        }
        v129 = 2;
      }
      else
      {
        v108 = ((v68 - 1) & 0xFD) == 0;
        v25 = v130;
        if ( !v108 )
        {
          if ( LODWORD(v151[6]) == 1 )
            v67 = 2;
          v129 = v67;
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
            v28 = MiPageToNode((__int64)(v8 + 0x58000000000LL) / 48, 0);
            v29 = 0;
            v30 = (v28 << byte_140465A4D) | (((*(_QWORD *)(v8 + 40) >> 36) & 3) << byte_140465A4E);
          }
          else
          {
            v29 = 48;
            v30 = a5 & ~dword_140465AB0;
          }
          v31 = dword_140465AB0 & (unsigned int)v19 | v30;
          if ( v152 == -1 )
          {
            Page = MiGetPage(v21, v31, v29);
            v128 = Page;
            if ( Page == -1 )
            {
              v55 = -1LL;
              v53 = 2;
              goto LABEL_84;
            }
            PageChain = 48 * Page - 0x58000000000LL;
LABEL_17:
            if ( PageChain == v8 )
            {
              v55 = v128;
              v22 = 1;
              v53 = 2;
              goto LABEL_84;
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
                    || v21 != *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                    {
                      v109 = v34 < 2u;
LABEL_299:
                      if ( v109 )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        v35 = 0;
                      }
                    }
LABEL_301:
                    __writecr8(v34);
                    goto LABEL_302;
                  }
                  v39 = v132;
                  if ( (v36 & 0x20) == 0 )
                    v37 = MI_READ_PTE_LOCK_FREE(v132);
                  v40 = v129;
                  if ( v38 == 3 || (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v129 != 1 )
                  {
LABEL_30:
                    if ( v38 != 2 )
                    {
                      if ( (v36 & 0x20) != 0 )
                      {
                        v82 = MiPrepareToStealNonPagedPool(v8, v39);
                        v35 = 0;
                        v37 = v82;
                        if ( !v82 )
                        {
                          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( !KiIrqlFlags )
                            goto LABEL_301;
                          v108 = (KiIrqlFlags & 1) == 0;
                          goto LABEL_220;
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
                          if ( MiPteInShadowRange((unsigned __int64)v39) && (unsigned int)MiPteHasShadow(v58) )
                            v59 = 1;
                          *v60 = v57;
                          if ( v59 )
                            MiWritePteShadow(v60, v57);
                          v135 = 1;
                        }
                        v61 = MiTbFlushType(v134);
                        KeFlushSingleTb(v131, v61, v40);
                      }
                    }
                    if ( v40 == 1 )
                    {
                      if ( (v151[1] & 4) != 0 )
                        v40 = 2;
                      v129 = v40;
                    }
                    MiLockNestedPageAtDpcInline(PageChain);
                    MiFinalizePageAttribute(PageChain, v27, 1LL, v41);
                    if ( LODWORD(v151[6]) != 2 )
                    {
                      v42 = v133;
                      goto LABEL_38;
                    }
                    IsPageFileHash = MiVaIsPageFileHash(v21, v131);
                    v35 = 0;
                    v111 = IsPageFileHash;
                    if ( IsPageFileHash )
                    {
                      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(IsPageFileHash + 232), &LockHandle);
                      if ( v111 == MiVaIsPageFileHash(v136, v131) )
                      {
                        v42 = v133;
                        if ( (unsigned int)MiSmallVaStillMapsFrame(v131, v133) )
                        {
LABEL_38:
                          MiCopyPfnEntryEx(PageChain, (__int128 *)v8);
                          if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v42 )
                            *(_QWORD *)(PageChain + 40) ^= (*(_QWORD *)(PageChain + 40) ^ v128) & 0xFFFFFFFFFLL;
                          _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          v43 = v151[1];
                          if ( (v151[1] & 0x20) == 0 && LODWORD(v151[6]) != 2 )
                          {
                            if ( (v151[1] & 0x200) == 0 )
                            {
                              if ( (v151[1] & 8) == 0 && !v129
                                || (v65 = v151[1] & 0xA, v65 == 10)
                                || (v151[1] & 0x100) != 0 )
                              {
                                *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                              }
                              else if ( (v65 != 8 || v129) && (LODWORD(v151[6]) != 3 || (v151[1] & 4) == 0) )
                              {
                                goto LABEL_48;
                              }
                            }
                            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
                            {
                              v114 = KeGetCurrentPrcb();
                              _InterlockedAnd((volatile signed __int32 *)v114->SchedulerAssist, 0xFFFEFFFF);
                              KiRemoveSystemWorkPriorityKick(v114);
                            }
                            __writecr8(v34);
                            v43 = v151[1];
                            v34 = 17;
                          }
LABEL_48:
                          if ( (v43 & 0x200) == 0 )
                          {
                            v44 = 0;
                            v127[0] = 17;
                            v136 = 0LL;
                            goto LABEL_50;
                          }
                          v136 = MiLockProtoPoolPage(v131, v127);
                          v86 = v136;
                          if ( !v136 )
                          {
LABEL_273:
                            MiSetOriginalPtePfnFromFreeList(PageChain + 16, v76, v78, v79);
                            goto LABEL_302;
                          }
                          if ( *(_WORD *)(v136 + 32) <= 2u )
                          {
                            v37 = MI_READ_PTE_LOCK_FREE(v132);
                            if ( (v37 & 0x42) == 0 )
                            {
                              v43 = v151[1];
                              v42 = v133;
                              goto LABEL_50;
                            }
                            v138 = v44;
                            if ( _interlockedbittestandset64((volatile signed __int32 *)(v86 + 24), 0x3FuLL) )
                            {
                              do
                              {
                                do
                                  KeYieldProcessorEx(&v138);
                                while ( *(__int64 *)(v86 + 24) < 0 );
                              }
                              while ( _interlockedbittestandset64((volatile signed __int32 *)(v86 + 24), 0x3FuLL) );
                              v8 = v143;
                              v87 = v132;
                            }
                            if ( *(_WORD *)(v86 + 32) <= 2u )
                            {
                              MiWriteValidPteNewProtection((unsigned __int64)v87);
                              KeFlushSingleTb(v131, 0, 1u);
                              v88 = MiCaptureDirtyBitToPfn(v86);
                              _InterlockedAnd64((volatile signed __int64 *)(v86 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                              if ( v88 )
                                MiReleasePageFileInfo(
                                  *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v86 + 40) >> 40) & 0x3FFLL)),
                                  v88,
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
                              v43 = v151[1];
                              v44 = 0;
                              v42 = v133;
LABEL_50:
                              if ( (v43 & 0x200) == 0
                                && (LODWORD(v151[6]) != 3 || (v43 & 4) == 0)
                                && ((v43 & 0xA) != 8 || v129 != v44) )
                              {
                                if ( v34 != 17 )
                                {
                                  MiLockNestedPageAtDpcInline(PageChain);
                                  v43 = v151[1];
                                }
                                v45 = v34 != 17 ? 4 : 0;
                                v46 = v45 | 2;
                                if ( (v43 & 0x2000) == 0 )
                                  v46 = v45;
                                MiCopyPage(v128, v133, v130, v46);
                                if ( (v46 & 4) != 0 )
                                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                v49 = LODWORD(v151[1]);
                                if ( (v151[1] & 0x20) == 0 && v34 != 17 )
                                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                                goto LABEL_62;
                              }
                              PteFromCopyList = MiGetPteFromCopyList(v130, v128, v42);
                              v70 = (_QWORD *)PteFromCopyList;
                              if ( (v151[1] & 0x200) != 0 )
                              {
                                v72 = MiReplacePageOfProtoPool(v131, v42, v128, ((PteFromCopyList << 25) - v140) >> 16);
                                goto LABEL_131;
                              }
                              v71 = v133;
                              CurrentThread = KeGetCurrentThread();
                              v146[1] = v131;
                              v146[3] = v42;
                              v146[2] = ((PteFromCopyList << 25) - v140) >> 16;
                              v146[4] = v128;
                              v146[0] = v134;
                              v149 = 0LL;
                              DeepFreezeStartTime = 0LL;
                              v148 = CurrentThread->ApcState.Process;
                              v72 = 1;
                              LODWORD(v130) = 1;
                              if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v133 )
                              {
                                if ( (*(_BYTE *)(v134 + 187) & 2) != 0
                                  || _interlockedbittestandset(
                                       (volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[4] + 1,
                                       1u) )
                                {
                                  v72 = 0;
                                  goto LABEL_131;
                                }
                                v89 = v148;
                                v90 = LODWORD(v151[1]) | 0x400;
                                LODWORD(v151[1]) |= 0x400u;
                                if ( v148->DirectoryTableBase >> 12 != v71 )
                                {
                                  HIDWORD(v149) = 1;
                                  DeepFreezeStartTime = v148[2].DeepFreezeStartTime;
                                  LODWORD(v151[1]) = v90 | 0x4000;
                                }
                                LOBYTE(v89) = 17;
                                MiReleaseFaultState(&v151[3], v89, 0LL);
                                KeSwapDirectoryTableBase(v148, HIDWORD(v149), v146);
                                SharedVm = MiGetSharedVm(v134);
                                ExAcquireSpinLockExclusive(SharedVm);
                                v92 = Process;
                                SharedVm[1] = 0;
                                _InterlockedAnd(
                                  (volatile signed __int32 *)&v92[2].ActiveProcessors.Bitmap[4] + 1,
                                  0xFFFFFFFD);
                                v72 = (int)v130;
                              }
                              else
                              {
                                MiReplacePageTablePage(v146);
                              }
                              if ( (int)v149 < 0 )
                                v72 = 0;
LABEL_131:
                              if ( !MiPteInShadowRange((unsigned __int64)v70) )
                                goto LABEL_132;
                              if ( (unsigned int)MiPteHasShadow(v74) )
                              {
                                v75 = 1;
                                if ( HIBYTE(word_140465BEC) != v118 )
                                  goto LABEL_132;
                              }
                              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
                              {
                                goto LABEL_132;
                              }
                              if ( (v73 & 1) != 0 )
                                v73 |= 0x8000000000000000uLL;
LABEL_132:
                              *v70 = v73;
                              if ( v75 )
                                MiWritePteShadow(v70, v73);
                              if ( !MiPteInShadowRange((unsigned __int64)(v70 + 1)) )
                                goto LABEL_135;
                              if ( (unsigned int)MiPteHasShadow(v77) )
                              {
                                v79 = 1LL;
                                if ( HIBYTE(word_140465BEC) == v119 )
                                  goto LABEL_267;
                              }
                              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
                              {
LABEL_267:
                                if ( (v76 & 1) != 0 )
                                  v76 |= 0x8000000000000000uLL;
                              }
LABEL_135:
                              *v78 = v76;
                              if ( (_DWORD)v79 )
                                MiWritePteShadow(v78, v76);
                              if ( v72 )
                              {
                                if ( (v151[1] & 0x200) != 0 )
                                {
                                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                                  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
                                  MiLockNestedPageAtDpcInline(PageChain);
                                }
                                else
                                {
                                  v80 = MiLockPageInline(v8);
                                  v47 = 0xC000000000000001uLL;
                                  v81 = v80;
                                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                                  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
                                  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v80 < 2u )
                                  {
                                    v120 = KeGetCurrentPrcb();
                                    _InterlockedAnd((volatile signed __int32 *)v120->SchedulerAssist, 0xFFFEFFFF);
                                    KiRemoveSystemWorkPriorityKick(v120);
                                  }
                                  __writecr8(v81);
                                  v34 = 17;
                                }
                                v49 = LODWORD(v151[1]);
LABEL_62:
                                v50 = v37 ^ (v37 ^ (v128 << 12)) & 0xFFFFFFFFF000LL;
                                if ( (v49 & 0x20) == 0 )
                                {
                                  if ( (v49 & 0x400) == 0 )
                                  {
                                    if ( (v49 & 0x40) == 0 )
                                    {
                                      if ( (v49 & 0x200) == 0 && (v49 & 0x10) != 0 )
                                        MiLockNestedPageAtDpcInline(PageChain);
                                      MiWriteValidPteNewPage(v132, v50, 0LL);
                                      LOWORD(v49) = v151[1];
                                      goto LABEL_69;
                                    }
                                    if ( !MiPteInShadowRange((unsigned __int64)v132) )
                                    {
LABEL_98:
                                      *v64 = v50;
                                      if ( v62 )
                                        MiWritePteShadow(v64, v50);
                                      LOWORD(v49) = v151[1];
                                      goto LABEL_70;
                                    }
                                    if ( (unsigned int)MiPteHasShadow(v63) )
                                    {
                                      v62 = 1;
                                      if ( HIBYTE(word_140465BEC) != (_BYTE)v51 )
                                        goto LABEL_98;
                                    }
                                    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
                                    {
                                      goto LABEL_98;
                                    }
                                    if ( (v50 & 1) != 0 )
                                      v50 |= 0x8000000000000000uLL;
                                    goto LABEL_98;
                                  }
                                  if ( (v49 & 0x4000) == 0 )
                                  {
LABEL_69:
                                    v51 = 0;
LABEL_70:
                                    if ( v135 != v51 )
                                    {
LABEL_73:
                                      if ( (v49 & 0x200) != 0 )
                                      {
                                        _InterlockedAnd64(
                                          (volatile signed __int64 *)(PageChain + 24),
                                          0x7FFFFFFFFFFFFFFFuLL);
                                        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                        MiUnlockProtoPoolPage(v136, v127[0]);
                                        v34 = 17;
                                      }
                                      else if ( (v49 & 0x50) == 0x10 )
                                      {
                                        _InterlockedAnd64(
                                          (volatile signed __int64 *)(PageChain + 24),
                                          0x7FFFFFFFFFFFFFFFuLL);
                                      }
                                      if ( ((*(_QWORD *)(v8 + 40) >> 54) & 7) == 3 )
                                        MiClearPfnImageVerified(v8);
                                      v53 = 2;
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
                                      v54 = v34;
                                      v22 = 1;
                                      v11 = v144;
LABEL_83:
                                      __writecr8(v54);
                                      v55 = v128;
LABEL_84:
                                      MiUnlockStealVm(v151);
                                      if ( v11 )
                                        MiReleaseFreshPage(v11);
                                      MiLockPageInline(v8);
                                      if ( v22 == 1 )
                                      {
                                        if ( v145 )
                                          *v145 = v55;
                                      }
                                      else
                                      {
                                        if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
                                          v22 = v53;
                                        if ( v22 == v53 && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
                                          return 0;
                                      }
                                      return v22;
                                    }
                                    v52 = MiTbFlushType(v134);
                                    KeFlushSingleTb(v131, v52, v129);
LABEL_72:
                                    LOWORD(v49) = v151[1];
                                    goto LABEL_73;
                                  }
                                  v93 = Process[2].DeepFreezeStartTime;
                                  if ( v93 )
                                  {
                                    v94 = MI_READ_PTE_LOCK_FREE(((v93 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                                    v96 = 0LL;
                                    if ( ((v94 >> 12) & 0xFFFFFFFFFLL) == v97 )
                                      v96 = v95;
                                    v51 = 0;
                                    if ( v96 )
                                      goto LABEL_70;
                                  }
                                  v53 = 2;
                                  v22 = 2;
                                  v11 = v8;
                                  MiSetOriginalPtePfnFromFreeList(v8 + 16, v47, v48, v49);
LABEL_303:
                                  if ( !v11 )
                                  {
                                    v55 = v128;
                                    goto LABEL_84;
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
                                  v54 = v125;
                                  goto LABEL_83;
                                }
                                MiLockNestedPageAtDpcInline(PageChain);
                                if ( v37 == _InterlockedCompareExchange64(v132, v50 | 0x20, v37) )
                                {
                                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                                  goto LABEL_72;
                                }
                                MiSetOriginalPtePfnFromFreeList(PageChain + 16, v83, v84, v85);
                                *(_BYTE *)(PageChain + 34) = *(_BYTE *)(PageChain + 34) & 0xF8 | 5;
                                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                v35 = 0;
                                goto LABEL_239;
                              }
                              if ( (v151[1] & 0x200) != 0 )
                                MiUnlockProtoPoolPage(v136, v127[0]);
                              goto LABEL_273;
                            }
                            _InterlockedAnd64((volatile signed __int64 *)(v86 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          }
                          MiUnlockProtoPoolPage(v86, v127[0]);
                          MiSetOriginalPtePfnFromFreeList(PageChain + 16, v115, v116, v117);
                          v35 = 0;
LABEL_302:
                          v11 = PageChain;
                          v22 = v35;
                          v53 = 2;
                          goto LABEL_303;
                        }
                      }
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      v35 = 0;
                      v112 = LockHandle.OldIrql;
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                      {
                        v113 = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)v113->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(v113);
                        v35 = 0;
                      }
                      __writecr8(v112);
                    }
                    _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_239:
                    if ( !KiIrqlFlags )
                      goto LABEL_301;
                    v108 = (KiIrqlFlags & 1) == 0;
LABEL_220:
                    if ( !v108 && KeGetCurrentIrql() >= 2u )
                    {
                      v109 = v34 < 2u;
                      goto LABEL_299;
                    }
                    goto LABEL_301;
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
                  goto LABEL_301;
                v108 = (KiIrqlFlags & 1) == 0;
                goto LABEL_220;
              }
            }
            else
            {
              v35 = 0;
            }
            v36 = v151[1];
            goto LABEL_21;
          }
          v105 = (*(_QWORD *)(v8 + 40) >> 58) + 1;
          if ( v27 == 2 )
          {
            v106 = 28;
          }
          else
          {
            v106 = 4;
            if ( !v27 )
              v106 = 12;
          }
          v142 = 1LL;
          PageChain = MiGetPageChain(v21, v23, v105, v106, v29, v152, (__int64)&v142);
          if ( PageChain )
          {
            v128 = (PageChain + 0x58000000000LL) / 48;
            goto LABEL_17;
          }
          v55 = -1LL;
          v22 = 0;
        }
        else
        {
          v22 = 0;
          if ( (v26 & 0x20) == 0 && (*(_BYTE *)(v8 + 34) & 0x10) == 0 )
          {
            v98 = 2;
            if ( v24 == 2
              || (v26 & 8) != 0
              || (v99 = MI_READ_PTE_LOCK_FREE(v10), v101 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL, v101 == v19)
              || (v99 & 0x42) != 0
              || (v100 & *(_BYTE *)(v8 + 35)) != 0
              || (WsleContents = MiGetWsleContents(v101, v131), (WsleContents & 0xF) == v103) )
            {
              v55 = v128;
              v53 = v98;
            }
            else
            {
              memset(v153, 0, 0xB8uLL);
              LODWORD(v153[0]) = MiTbFlushType(v134);
              WORD2(v153[0]) = 4;
              v153[2] = 0LL;
              LODWORD(v153[1]) = 20;
              v153[3] = 0LL;
              if ( dword_140466368 )
                MI_WSLE_LOG_ACCESS(v104, (_BYTE *)v10);
              MiInsertTbFlushEntry((__int64)v153, v131, 1LL, 0);
              v55 = v128;
              v53 = 2;
              if ( !MiFreeWsleList(v134, (__int64)v153, 0) )
                v22 = 2;
            }
            goto LABEL_84;
          }
          v55 = v128;
        }
        v53 = 2;
        goto LABEL_84;
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
