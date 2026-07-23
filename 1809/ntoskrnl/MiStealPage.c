/*
 * XREFs of MiStealPage @ 0x1400EBFC4
 * Callers:
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiVaIsPageFileHash @ 0x14009D9C8 (MiVaIsPageFileHash.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiLockStealSystemVm @ 0x1400E99F8 (MiLockStealSystemVm.c)
 *     MiUnlockStealVm @ 0x1400ECDE4 (MiUnlockStealVm.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiWriteValidPteNewPage @ 0x1400EEBAC (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiReplacePageTablePage @ 0x14011BEFC (MiReplacePageTablePage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     MiReplacePageOfProtoPool @ 0x140124E6C (MiReplacePageOfProtoPool.c)
 *     MiGetPteFromCopyList @ 0x14012D8D8 (MiGetPteFromCopyList.c)
 *     MiSmallVaStillMapsFrame @ 0x140134AC4 (MiSmallVaStillMapsFrame.c)
 *     KeSwapDirectoryTableBase @ 0x140160FB0 (KeSwapDirectoryTableBase.c)
 *     MiPrepareToStealNonPagedPool @ 0x14016B7BC (MiPrepareToStealNonPagedPool.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiStealPage(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        int a3,
        unsigned int *a4,
        int a5,
        ULONG_PTR *a6)
{
  ULONG_PTR v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  __int64 v11; // r15
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v13; // r10
  _KPROCESS *v14; // r11
  int v15; // ebx
  int v16; // r8d
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r13
  unsigned int v20; // ebx
  int v21; // edx
  unsigned int *v22; // rax
  int v23; // ecx
  unsigned int v24; // r12d
  __int64 v25; // rbx
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  __int64 Page; // rax
  __int64 PageChain; // r14
  unsigned __int8 v30; // r15
  unsigned int v31; // r11d
  int v32; // r9d
  signed __int64 v33; // rdi
  int v34; // r10d
  volatile signed __int64 *v35; // r11
  unsigned int v36; // ebx
  ULONG_PTR v37; // rbx
  int v38; // r10d
  __int64 v39; // r11
  __int16 v40; // dx
  int v41; // ecx
  char v42; // bl
  __int16 v43; // r9
  ULONG_PTR v44; // rbx
  int v45; // r11d
  unsigned int v46; // eax
  unsigned __int64 v47; // rax
  ULONG_PTR v48; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // r8d
  _QWORD *v53; // r11
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  ULONG_PTR *v57; // r8
  int v58; // r8d
  int v59; // r8d
  char v60; // al
  int v61; // eax
  __int64 PteFromCopyList; // rax
  _QWORD *v63; // r13
  ULONG_PTR v64; // r10
  int v65; // ebx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // r8d
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // r8
  int v73; // r9d
  unsigned __int8 v74; // bl
  unsigned __int8 v75; // di
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // r8
  volatile signed __int64 *v80; // r9
  unsigned __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  int v84; // ecx
  LONG *SharedVm; // rbx
  _KPROCESS *v86; // rax
  unsigned __int64 v87; // r10
  unsigned __int64 v88; // rax
  __int64 v89; // r10
  __int64 v90; // rcx
  __int64 v91; // r11
  char v92; // al
  unsigned __int8 v93; // r11
  __int64 v94; // rcx
  char WsleContents; // al
  __int64 v96; // r9
  char v97; // r11
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // r10
  int v101; // eax
  unsigned int v102; // r9d
  int PagePrivilege; // eax
  char v104; // al
  bool v105; // zf
  bool v106; // cf
  __int64 IsPageFileHash; // rax
  __int64 v108; // rbx
  unsigned __int8 v109; // bl
  struct _KPRCB *v110; // rcx
  struct _KPRCB *v111; // rcx
  int v112; // r9d
  char v113; // r11
  char v114; // r11
  struct _KPRCB *v115; // rcx
  char v116; // dl
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v118; // rcx
  struct _KPRCB *v119; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v121; // rcx
  unsigned __int8 v122[8]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v123; // [rsp+48h] [rbp-B8h]
  unsigned int v124; // [rsp+50h] [rbp-B0h]
  unsigned int *v125; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v126; // [rsp+60h] [rbp-A0h]
  volatile signed __int64 *v127; // [rsp+68h] [rbp-98h]
  __int64 v128; // [rsp+70h] [rbp-90h]
  ULONG_PTR v129; // [rsp+78h] [rbp-88h]
  int v130; // [rsp+80h] [rbp-80h]
  __int64 v131; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  int v133; // [rsp+98h] [rbp-68h] BYREF
  int v134; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v135; // [rsp+A0h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v137; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v138; // [rsp+C8h] [rbp-38h]
  __int64 v139; // [rsp+D0h] [rbp-30h]
  ULONG_PTR *v140; // [rsp+D8h] [rbp-28h]
  _QWORD v141[5]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+8h]
  _KPROCESS *v143; // [rsp+110h] [rbp+10h]
  __int64 v144; // [rsp+118h] [rbp+18h]
  unsigned __int64 v145; // [rsp+120h] [rbp+20h]
  __int64 v146[16]; // [rsp+130h] [rbp+30h] BYREF
  int v147; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v148; // [rsp+1B4h] [rbp+B4h]
  __int64 v149; // [rsp+1B8h] [rbp+B8h]
  __int64 v150; // [rsp+1C0h] [rbp+C0h]
  __int64 v151; // [rsp+1C8h] [rbp+C8h]

  v138 = BugCheckParameter2;
  v140 = a6;
  v8 = BugCheckParameter2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v125 = a4;
  memset(v146, 0, sizeof(v146));
  v9 = *(_QWORD *)(v8 + 8);
  v146[15] = -1LL;
  v10 = v9 | 0x8000000000000000uLL;
  LODWORD(v146[0]) = a3;
  v127 = (volatile signed __int64 *)v10;
  v11 = 0LL;
  v139 = 0LL;
  v130 = 0;
  v135 = 0LL;
  v126 = (__int64)(v10 << 25) >> 16;
  LeafVa = MiGetLeafVa(v126);
  v15 = (_DWORD)v14 + 1;
  if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
    v16 = v15 | LODWORD(v146[1]);
  else
    v16 = ((_DWORD)v14 + 8) | LODWORD(v146[1]);
  LODWORD(v146[1]) = v16;
  v17 = (__int64)(v8 + 0x58000000000LL) / 48;
  v129 = v17;
  v123 = -1LL;
  if ( a6 )
    *a6 = -1LL;
  v18 = (*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL;
  Process = v14;
  v19 = *(_QWORD *)(qword_14043B808 + 8 * v18);
  v131 = v19;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_6;
  if ( LeafVa <= qword_14043B5F0 && LeafVa >= qword_14043CB80 )
  {
    v58 = v16 | 8;
    if ( ((unsigned __int8)v58 & (unsigned __int8)v15) != 0 )
    {
      v16 = v58 | 2;
      if ( v13 >= qword_14043B5E8 && v13 < qword_14043B5E8 + 276840448 )
        v16 |= 0x100u;
    }
    else
    {
      v16 = v58 | 4;
    }
LABEL_6:
    v16 |= 0x1000u;
    LODWORD(v146[1]) = v16;
  }
  if ( (v16 & 0x1000) != 0 )
  {
    v20 = MiLockStealUserVm(v8);
    if ( v20 == 1 )
    {
      v21 = v146[6];
      v128 = v146[3];
      Process = KeGetCurrentThread()->ApcState.Process;
      v22 = v125;
      v124 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v20 = MiLockStealSystemVm(v8, a2, v10, (__int64)v146);
    if ( v20 == 1 )
    {
      v21 = v146[6];
      v20 = 0;
      v128 = v146[3];
      v59 = 1;
      v124 = 1;
      v60 = *(_BYTE *)(v146[3] + 184) & 7;
      if ( v60 == 7 )
      {
        v22 = v125;
        if ( !*((_QWORD *)v125 + 2) )
        {
          v48 = v123;
          goto LABEL_83;
        }
        v124 = 2;
      }
      else
      {
        v105 = ((v60 - 1) & 0xFD) == 0;
        v22 = v125;
        if ( !v105 )
        {
          if ( LODWORD(v146[6]) == 1 )
            v59 = 2;
          v124 = v59;
        }
      }
      if ( LODWORD(v146[6]) == 3 )
      {
        if ( (v146[1] & 1) != 0 )
          v23 = LODWORD(v146[1]) | 0xA;
        else
          v23 = LODWORD(v146[1]) | 0xC;
        LODWORD(v146[1]) = v23;
LABEL_11:
        if ( !*((_QWORD *)v22 + 2) )
        {
          v20 = 0;
          if ( (v23 & 0x20) == 0 && (*(_BYTE *)(v8 + 34) & 0x10) == 0 && v21 != 2 && (v23 & 8) == 0 )
          {
            v92 = MI_READ_PTE_LOCK_FREE(v10);
            v94 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
            if ( v94 != v17 && (v92 & 0x42) == 0 && (v93 & *(_BYTE *)(v8 + 35)) == 0 )
            {
              WsleContents = MiGetWsleContents(v94, v126);
              if ( (WsleContents & 0xF) != v97 )
              {
                v98 = MiTbFlushType(v96);
                v149 = 20LL;
                v147 = v98;
                v148 = 4;
                v150 = v100;
                v151 = v100;
                if ( dword_14043B9A8 != (_DWORD)v100 )
                  MI_WSLE_LOG_ACCESS(v99, (_BYTE *)v10);
                MiInsertTbFlushEntry((__int64)&v147, v126, 1LL, 0);
                v20 = 0;
                v48 = v123;
                if ( !MiFreeWsleList(v128, (__int64)&v147, 0) )
                  v20 = 2;
                goto LABEL_83;
              }
            }
          }
          goto LABEL_222;
        }
        v24 = *(unsigned __int8 *)(v8 + 34) >> 6;
        if ( a5 == -1 )
        {
          v25 = (*(_QWORD *)(v8 + 40) >> 36) & 3LL;
          v26 = ((unsigned int)MiPageToNode((__int64)(v8 + 0x58000000000LL) / 48, 0) << byte_14043B109) | dword_14043B148 & v17 | ((_DWORD)v25 << byte_14043B10A);
          v27 = 0;
        }
        else
        {
          v27 = 48;
          v26 = dword_14043B148 & v17 | a5 & ~dword_14043B148;
        }
        if ( v146[15] == -1 )
        {
          Page = MiGetPage(v19, v26, v27);
          v123 = Page;
          v20 = 0;
          if ( Page == -1 )
          {
            v48 = -1LL;
            goto LABEL_83;
          }
          PageChain = 48 * Page - 0x58000000000LL;
        }
        else
        {
          v101 = (*(_QWORD *)(v8 + 40) >> 58) + 1;
          if ( v24 == 2 )
          {
            v102 = 28;
          }
          else
          {
            v102 = 4;
            if ( !v24 )
              v102 = 12;
          }
          v137 = 1LL;
          PageChain = MiGetPageChain(v19, v128, v101, v102, v27, v146[15], &v137);
          if ( !PageChain )
          {
            v48 = -1LL;
            v20 = 0;
            goto LABEL_83;
          }
          v123 = (PageChain + 0x58000000000LL) / 48;
        }
        if ( PageChain == v8 )
        {
          v20 = 1;
          goto LABEL_222;
        }
        v30 = MiLockPageInline(v8);
        if ( (MiFlags & 0x8000) != 0 )
        {
          PagePrivilege = MiGetPagePrivilege(v8, 1, 0LL);
          v31 = 0;
          if ( PagePrivilege )
          {
            v32 = LODWORD(v146[1]) | 0x2000;
            LODWORD(v146[1]) |= 0x2000u;
LABEL_21:
            v33 = 0LL;
            if ( *(_WORD *)(v8 + 32) != 1
              || ((v34 = v146[6], (*(_BYTE *)(v8 + 35) & 8) != 0) || (*(_BYTE *)v8 & 1) == 0)
              && LODWORD(v146[6]) != 2
              && (v32 & 0x26) == 0
              || (*(_BYTE *)(v8 + 34) & 7) != 6
              || v19 != *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              {
                v106 = v30 < 2u;
LABEL_309:
                if ( v106 )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  v31 = 0;
                }
              }
LABEL_149:
              __writecr8(v30);
LABEL_150:
              v11 = PageChain;
              v20 = v31;
LABEL_151:
              if ( v11 )
              {
                v75 = MiLockPageInline(v11);
                *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v75 < 2u )
                {
                  v121 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v121->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v121);
                }
                v47 = v75;
                goto LABEL_82;
              }
LABEL_222:
              v48 = v123;
              goto LABEL_83;
            }
            v35 = v127;
            if ( (v32 & 0x20) == 0 )
              v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v127);
            v36 = v124;
            if ( v34 != 3 && (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v124 == 1 )
            {
              if ( (v32 & 0x10) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v104 = KiIrqlFlags;
                v31 = 0;
                if ( !KiIrqlFlags )
                  goto LABEL_149;
                goto LABEL_226;
              }
              v32 |= 0x208u;
              LODWORD(v146[1]) = v32;
            }
            if ( v34 == 2 )
              goto LABEL_35;
            if ( (v32 & 0x20) == 0 )
            {
              if ( ((v32 & 8) == 0 || (v32 & 0x100) != 0) && ((v33 & 0x42) != 0 || (v32 & 0x2000) != 0) )
              {
                if ( (v32 & 0x100) != 0 )
                {
                  MiWriteValidPteNewProtection((unsigned __int64)v35, v33 & 0xFFFFFFFFFFFFFFBDuLL);
                }
                else
                {
                  LODWORD(v146[1]) = v32 | 0x40;
                  if ( MiPteInShadowRange((unsigned __int64)v35) && (unsigned int)MiPteHasShadow(v51, v50) )
                    v52 = 1;
                  *v53 = v50;
                  if ( v52 )
                    MiWritePteShadow(v53);
                  v130 = 1;
                }
                v54 = MiTbFlushType(v128);
                KeFlushSingleTb(v126, v54, v36);
              }
LABEL_35:
              if ( v36 == 1 )
              {
                if ( (v146[1] & 4) != 0 )
                  v36 = 2;
                v124 = v36;
              }
              MiLockNestedPageAtDpcInline(PageChain);
              MiFinalizePageAttribute(PageChain, v24, 1u);
              if ( LODWORD(v146[6]) != 2 )
              {
                v37 = v129;
                goto LABEL_38;
              }
              IsPageFileHash = MiVaIsPageFileHash(v19, v126);
              v31 = 0;
              v108 = IsPageFileHash;
              if ( IsPageFileHash )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(IsPageFileHash + 232), &LockHandle);
                if ( v108 == MiVaIsPageFileHash(v131, v126) )
                {
                  v37 = v129;
                  if ( (unsigned int)MiSmallVaStillMapsFrame(v126, v129) )
                  {
LABEL_38:
                    MiCopyPfnEntryEx(PageChain, v8);
                    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v37 )
                      *(_QWORD *)(PageChain + 40) ^= (v123 ^ *(_QWORD *)(PageChain + 40)) & 0xFFFFFFFFFLL;
                    _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    v40 = v146[1];
                    if ( (v146[1] & 0x20) == 0 && LODWORD(v146[6]) != v38 )
                    {
                      if ( (v146[1] & 0x200) == 0 )
                      {
                        if ( (v146[1] & 8) == 0 && !v124 || (v61 = v146[1] & 0xA, v61 == 10) || (v146[1] & 0x100) != 0 )
                        {
                          *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                        }
                        else if ( (v61 != 8 || v124) && (LODWORD(v146[6]) != 3 || (v146[1] & 4) == 0) )
                        {
                          goto LABEL_48;
                        }
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( KiIrqlFlags
                        && (KiIrqlFlags & 1) != 0
                        && KeGetCurrentIrql() >= (unsigned __int8)v38
                        && v30 < (unsigned __int8)v38 )
                      {
                        v111 = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)v111->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(v111);
                        v39 = 0LL;
                      }
                      __writecr8(v30);
                      v40 = v146[1];
                      v30 = 17;
                    }
LABEL_48:
                    if ( (v40 & 0x200) == 0 )
                    {
                      v122[0] = 17;
                      v131 = v39;
                      goto LABEL_50;
                    }
                    v131 = MiLockProtoPoolPage(v126, v122);
                    v77 = v131;
                    if ( !v131 )
                      goto LABEL_281;
                    if ( *(_WORD *)(v131 + 32) <= 2u )
                    {
                      v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v127);
                      if ( (v33 & 0x42) == 0 )
                      {
                        v40 = v146[1];
                        v37 = v129;
                        goto LABEL_50;
                      }
                      v133 = v39;
                      if ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          do
                            KeYieldProcessorEx(&v133, v78, v79);
                          while ( *(__int64 *)(v77 + 24) < 0 );
                        }
                        while ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) );
                        v8 = v138;
                        v80 = v127;
                      }
                      if ( *(_WORD *)(v77 + 32) <= 2u )
                      {
                        MiWriteValidPteNewProtection((unsigned __int64)v80, v33 & 0xFFFFFFFFFFFFFFBDuLL);
                        KeFlushSingleTb(v126, 0LL, 1LL);
                        v81 = MiCaptureDirtyBitToPfn(v77);
                        _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        if ( v81 )
                          MiReleasePageFileInfo(
                            *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v77 + 40) >> 40) & 0x3FFLL)),
                            v81,
                            1);
                        v134 = 0;
                        while ( _interlockedbittestandset64((volatile signed __int32 *)(PageChain + 24), 0x3FuLL) )
                        {
                          do
                            KeYieldProcessorEx(&v134, v82, v83);
                          while ( *(__int64 *)(PageChain + 24) < 0 );
                        }
                        MiCaptureDirtyBitToPfn(PageChain);
                        _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        v40 = v146[1];
                        LODWORD(v39) = 0;
                        v37 = v129;
LABEL_50:
                        if ( (v40 & 0x200) == 0
                          && (LODWORD(v146[6]) != 3 || (v40 & 4) == 0)
                          && ((v40 & 0xA) != 8 || v124 != (_DWORD)v39) )
                        {
                          if ( v30 != 17 )
                          {
                            MiLockNestedPageAtDpcInline(PageChain);
                            v40 = v146[1];
                          }
                          v41 = v30 != 17 ? 4 : 0;
                          v42 = v41 | 2;
                          if ( (v40 & 0x2000) == 0 )
                            v42 = v41;
                          MiCopyPage(v123, v129, v125, v42);
                          if ( (v42 & 4) != 0 )
                            _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          v43 = v146[1];
                          if ( (v146[1] & 0x20) == 0 && v30 != 17 )
                            *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                          goto LABEL_62;
                        }
                        PteFromCopyList = MiGetPteFromCopyList(v125, v123, v37);
                        v63 = (_QWORD *)PteFromCopyList;
                        if ( (v146[1] & 0x200) != 0 )
                        {
                          v65 = MiReplacePageOfProtoPool(v126, v37, v123, ((PteFromCopyList << 25) - v135) >> 16);
                          goto LABEL_131;
                        }
                        v64 = v129;
                        CurrentThread = KeGetCurrentThread();
                        v141[3] = v37;
                        v141[4] = v123;
                        v141[2] = ((PteFromCopyList << 25) - v135) >> 16;
                        v65 = 1;
                        v141[0] = v128;
                        v141[1] = v126;
                        v144 = 0LL;
                        v145 = 0LL;
                        v143 = CurrentThread->ApcState.Process;
                        v66 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
                        LODWORD(v125) = 1;
                        if ( v66 == v129 )
                        {
                          if ( (*(_BYTE *)(v128 + 187) & 2) != 0 )
                          {
                            v65 = 0;
                            goto LABEL_131;
                          }
                          if ( _interlockedbittestandset(
                                 (volatile signed __int32 *)Process[2].ActiveProcessors.Bitmap + 1,
                                 1u) )
                          {
                            v65 = 0;
                            goto LABEL_131;
                          }
                          v84 = LODWORD(v146[1]) | 0x400;
                          LODWORD(v146[1]) |= 0x400u;
                          if ( v143->DirectoryTableBase >> 12 != v64 )
                          {
                            HIDWORD(v144) = 1;
                            v145 = v143[2].Affinity.Bitmap[0];
                            LODWORD(v146[1]) = v84 | 0x4000;
                          }
                          MiReleaseFaultState(&v146[3], 17, 0LL);
                          KeSwapDirectoryTableBase(v143, HIDWORD(v144), v141);
                          SharedVm = MiGetSharedVm(v128);
                          ExAcquireSpinLockExclusive(SharedVm);
                          v86 = Process;
                          SharedVm[1] = 0;
                          _InterlockedAnd((volatile signed __int32 *)v86[2].ActiveProcessors.Bitmap + 1, 0xFFFFFFFD);
                          v65 = (int)v125;
                        }
                        else
                        {
                          MiReplacePageTablePage(v141);
                        }
                        if ( (int)v144 < 0 )
                          v65 = 0;
LABEL_131:
                        if ( !MiPteInShadowRange((unsigned __int64)v63) )
                          goto LABEL_132;
                        if ( (unsigned int)MiPteHasShadow(v68, v67) )
                        {
                          v69 = v112;
                          if ( HIBYTE(word_14043B26C) != v113 )
                            goto LABEL_132;
                        }
                        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
                        {
                          goto LABEL_132;
                        }
                        if ( ((unsigned __int8)v67 & (unsigned __int8)v112) != 0 )
                          v67 |= 0x8000000000000000uLL;
LABEL_132:
                        *v63 = v67;
                        if ( v69 )
                          MiWritePteShadow(v63);
                        if ( !MiPteInShadowRange((unsigned __int64)(v63 + 1)) )
                          goto LABEL_135;
                        if ( (unsigned int)MiPteHasShadow(v71, v70) )
                        {
                          v73 = 1;
                          if ( HIBYTE(word_14043B26C) == v114 )
                            goto LABEL_275;
                        }
                        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
                        {
LABEL_275:
                          if ( (v70 & 1) != 0 )
                            v70 |= 0x8000000000000000uLL;
                        }
LABEL_135:
                        *v72 = v70;
                        if ( v73 )
                          MiWritePteShadow(v72);
                        if ( v65 )
                        {
                          if ( (v146[1] & 0x200) != 0 )
                          {
                            *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                            *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
                            MiLockNestedPageAtDpcInline(PageChain);
                          }
                          else
                          {
                            v74 = MiLockPageInline(v8);
                            *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                            *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
                            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v74 < 2u )
                            {
                              v115 = KeGetCurrentPrcb();
                              _InterlockedAnd((volatile signed __int32 *)v115->SchedulerAssist, 0xFFFEFFFF);
                              KiRemoveSystemWorkPriorityKick(v115);
                            }
                            __writecr8(v74);
                            v30 = 17;
                          }
                          v43 = v146[1];
LABEL_62:
                          v44 = v33 ^ (v33 ^ (v123 << 12)) & 0xFFFFFFFFF000LL;
                          if ( (v43 & 0x20) == 0 )
                          {
                            if ( (v43 & 0x400) == 0 )
                            {
                              if ( (v43 & 0x40) == 0 )
                              {
                                if ( (v43 & 0x200) == 0 && (v43 & 0x50) == 0x10 )
                                  MiLockNestedPageAtDpcInline(PageChain);
                                MiWriteValidPteNewPage(v127, v44, 0LL);
                                v43 = v146[1];
                                goto LABEL_69;
                              }
                              if ( !MiPteInShadowRange((unsigned __int64)v127) )
                              {
LABEL_97:
                                *v57 = v44;
                                if ( (_DWORD)v55 )
                                  MiWritePteShadow(v57);
                                v43 = v146[1];
                                goto LABEL_70;
                              }
                              if ( (unsigned int)MiPteHasShadow(v56, v55) )
                              {
                                LODWORD(v55) = 1;
                                if ( HIBYTE(word_14043B26C) != (_BYTE)v45 )
                                  goto LABEL_97;
                              }
                              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
                              {
                                goto LABEL_97;
                              }
                              if ( (v44 & 1) != 0 )
                                v44 |= 0x8000000000000000uLL;
                              goto LABEL_97;
                            }
                            if ( (v43 & 0x4000) == 0 )
                            {
LABEL_69:
                              v45 = 0;
LABEL_70:
                              if ( v130 != v45 )
                              {
LABEL_73:
                                if ( (v43 & 0x200) != 0 )
                                {
                                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                  MiUnlockProtoPoolPage(v131, v122[0]);
                                  v30 = 17;
                                }
                                else if ( (v43 & 0x50) == 0x10 )
                                {
                                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                }
                                if ( ((*(_QWORD *)(v8 + 40) >> 54) & 7) == 3 )
                                {
                                  v116 = 12;
                                  if ( v30 == 17 )
                                    v116 = 8;
                                  MiClearPfnImageVerified(v8, v116);
                                }
                                if ( LODWORD(v146[6]) == 2 )
                                {
                                  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
                                  OldIrql = LockHandle.OldIrql;
                                  if ( KiIrqlFlags
                                    && (KiIrqlFlags & 1) != 0
                                    && KeGetCurrentIrql() >= 2u
                                    && LockHandle.OldIrql < 2u )
                                  {
                                    v118 = KeGetCurrentPrcb();
                                    _InterlockedAnd((volatile signed __int32 *)v118->SchedulerAssist, 0xFFFEFFFF);
                                    KiRemoveSystemWorkPriorityKick(v118);
                                  }
                                  __writecr8(OldIrql);
                                }
                                if ( v30 == 17 )
                                  v30 = MiLockPageInline(v8);
                                *(_QWORD *)(v8 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
                                *(_BYTE *)(v8 + 34) &= 0xC7u;
                                *(_BYTE *)(v8 + 35) &= ~0x20u;
                                *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
                                *(_WORD *)(v8 + 32) = 0;
                                _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
                                {
                                  v119 = KeGetCurrentPrcb();
                                  _InterlockedAnd((volatile signed __int32 *)v119->SchedulerAssist, 0xFFFEFFFF);
                                  KiRemoveSystemWorkPriorityKick(v119);
                                }
                                v47 = v30;
                                v20 = 1;
                                v11 = v139;
LABEL_82:
                                __writecr8(v47);
                                v48 = v123;
LABEL_83:
                                MiUnlockStealVm(v146);
                                if ( v11 )
                                  MiReleaseFreshPage(v11);
                                MiLockPageInline(v8);
                                if ( v20 == 1 )
                                {
                                  if ( v140 )
                                    *v140 = v48;
                                }
                                else
                                {
                                  if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
                                    v20 = 2;
                                  if ( v20 == 2 && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
                                    return 0;
                                }
                                return v20;
                              }
                              v46 = MiTbFlushType(v128);
                              KeFlushSingleTb(v126, v46, v124);
LABEL_72:
                              v43 = v146[1];
                              goto LABEL_73;
                            }
                            v87 = Process[2].Affinity.Bitmap[0];
                            if ( v87 )
                            {
                              v88 = MI_READ_PTE_LOCK_FREE(((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                              v90 = 0LL;
                              if ( ((v88 >> 12) & 0xFFFFFFFFFLL) == v91 )
                                v90 = v89;
                              v45 = 0;
                              if ( v90 )
                                goto LABEL_70;
                            }
                            v20 = 2;
                            v11 = v8;
                            MiSetOriginalPtePfnFromFreeList((_QWORD *)(v8 + 16));
                            goto LABEL_151;
                          }
                          MiLockNestedPageAtDpcInline(PageChain);
                          if ( v33 == _InterlockedCompareExchange64(v127, v44 | 0x20, v33) )
                          {
                            _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                            *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                            goto LABEL_72;
                          }
                          MiSetOriginalPtePfnFromFreeList((_QWORD *)(PageChain + 16));
                          *(_BYTE *)(PageChain + 34) = *(_BYTE *)(PageChain + 34) & 0xF8 | 5;
                          _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          v31 = 0;
                          goto LABEL_246;
                        }
                        if ( (v146[1] & 0x200) != 0 )
                          MiUnlockProtoPoolPage(v131, v122[0]);
LABEL_281:
                        MiSetOriginalPtePfnFromFreeList((_QWORD *)(PageChain + 16));
                        goto LABEL_150;
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    }
                    MiUnlockProtoPoolPage(v77, v122[0]);
                    MiSetOriginalPtePfnFromFreeList((_QWORD *)(PageChain + 16));
                    v31 = 0;
                    goto LABEL_150;
                  }
                }
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
                v31 = 0;
                v109 = LockHandle.OldIrql;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                {
                  v110 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v110->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v110);
                  v31 = 0;
                }
                __writecr8(v109);
              }
              _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_246:
              if ( !KiIrqlFlags )
                goto LABEL_149;
              v105 = (KiIrqlFlags & 1) == 0;
              goto LABEL_227;
            }
            v76 = MiPrepareToStealNonPagedPool(v8, v35);
            v31 = 0;
            v33 = v76;
            if ( v76 )
              goto LABEL_35;
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v104 = KiIrqlFlags;
            if ( !KiIrqlFlags )
              goto LABEL_149;
LABEL_226:
            v105 = (v104 & 1) == 0;
LABEL_227:
            if ( !v105 && KeGetCurrentIrql() >= 2u )
            {
              v106 = v30 < 2u;
              goto LABEL_309;
            }
            goto LABEL_149;
          }
        }
        else
        {
          v31 = 0;
        }
        v32 = v146[1];
        goto LABEL_21;
      }
LABEL_10:
      LOBYTE(v23) = v146[1];
      goto LABEL_11;
    }
  }
  MiLockPageInline(v8);
  if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
    return 0;
  return v20;
}
