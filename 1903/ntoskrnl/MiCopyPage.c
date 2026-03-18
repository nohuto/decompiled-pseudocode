/*
 * XREFs of MiCopyPage @ 0x14002C5D0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiCopyHeaderIfResident @ 0x1400E2B4C (MiCopyHeaderIfResident.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiSwapStackPageNoDpc @ 0x140134888 (MiSwapStackPageNoDpc.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x1402CCFA8 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3D30 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x1409EF93C (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MiAbortCombineScan @ 0x1400B8A28 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400B8B90 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     MiAllocateHyperSpace @ 0x14011C564 (MiAllocateHyperSpace.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1401C7AB0 (KeCopyPage.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeCopyPrivilegedPage @ 0x1402A46BC (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x1402A4778 (KeSetPagePrivilege.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, __int64 *a3, char a4)
{
  char v7; // bl
  ULONG_PTR v8; // r13
  ULONG_PTR v9; // rdi
  unsigned int PagePrivilege; // eax
  __int64 v11; // r8
  int v12; // r14d
  unsigned __int64 v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  int v17; // r14d
  int v18; // edi
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  char v21; // al
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  BOOL v25; // r14d
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int8 v34; // bl
  __int64 v35; // rdx
  unsigned __int64 HyperSpace; // rax
  _QWORD *MmInternal; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _BOOL8 v42; // rcx
  __int64 v43; // rdi
  ULONG_PTR v44; // r8
  char v45; // al
  int v46; // eax
  unsigned __int8 CurrentIrql; // al
  bool v48; // cf
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // rcx
  char v51; // al
  int v52; // eax
  unsigned __int8 v53; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  bool v55; // zf
  struct _KPRCB *v56; // rcx
  char v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh]
  int v60; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __int64 v65; // [rsp+68h] [rbp-98h]
  __int128 v66; // [rsp+70h] [rbp-90h] BYREF
  __int128 v67; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v68[24]; // [rsp+90h] [rbp-70h] BYREF

  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v67 = 0uLL;
  v7 = 0;
  v66 = 0uLL;
  v8 = 48 * a2 - 0x58000000000LL;
  v9 = 48 * a1 - 0x58000000000LL;
  v59 = -1073741823;
  BugCheckParameter2 = v9;
  v60 = a4 & 4;
  PagePrivilege = MiGetPagePrivilege(v8, v60, (unsigned __int64 *)&v67);
  v11 = PagePrivilege;
  if ( PagePrivilege )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v7 = 2;
    }
    else if ( (MiFlags & 0x10000) != 0
           && (PagePrivilege & 1) != 0
           && (a4 & 8) == 0
           && (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 )
    {
      v7 = 2;
    }
    else if ( (MiFlags & 0x40000) == 0 || (v7 = 2, (PagePrivilege & 2) == 0 || (a4 & 8) != 0) )
    {
      v7 = 4;
    }
    v12 = a4 & 2;
  }
  else
  {
    v12 = a4 & 2;
    if ( (a4 & 2) == 0 )
      v7 = 4;
  }
  v13 = 0xFFFFF68000000000uLL;
  if ( (v7 & 2) != 0 )
  {
    v58 = 17;
    v42 = v12 != 0;
    if ( (MiFlags & 0x40000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v42, 4LL, PagePrivilege, 0xFFFFF68000000000uLL);
      LOBYTE(v42) = v12 != 0;
    }
    v43 = 0LL;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_82;
    v44 = BugCheckParameter2;
    if ( v12 )
    {
      v66 = v67;
LABEL_77:
      v46 = v60;
      goto LABEL_78;
    }
    *(_QWORD *)&v66 = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16;
    if ( (unsigned __int64)v66 >= 0xFFFF800000000000uLL )
    {
LABEL_76:
      LOBYTE(v42) = v12 != 0;
      goto LABEL_77;
    }
    v7 |= 8u;
    *((_QWORD *)&v66 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
    if ( !v60 )
    {
      v45 = MiLockPageInline(BugCheckParameter2);
      v44 = BugCheckParameter2;
      v58 = v45;
    }
    MiMarkPfnVerified(v44);
    MiAbortCombineScan(BugCheckParameter2);
    v46 = v60;
    v44 = BugCheckParameter2;
    if ( v60 )
    {
      LOBYTE(v42) = v12 != 0;
LABEL_78:
      if ( (a4 & 0x20) != 0 )
      {
        if ( !v46 )
        {
          v51 = MiLockPageInline(v44);
          v44 = BugCheckParameter2;
          LOBYTE(v42) = v12 != 0;
          v58 = v51;
        }
        v43 = (((*(_QWORD *)(v44 + 40) & 0xFFFFFFFFFLL) << 12) + (*(_DWORD *)(v44 + 8) & 0xFFF)) | 1;
      }
LABEL_82:
      v52 = KeCopyPrivilegedPage(a1, (unsigned int)&v66, a2, (unsigned int)&v67, v43, v42);
      v59 = v52;
      if ( v52 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v52);
      v53 = v58;
      v9 = BugCheckParameter2;
      if ( v58 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v58 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v53 = v58;
        }
        __writecr8(v53);
      }
      if ( (MiFlags & 0x40000) != 0
        && !v12
        && (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
      {
        v59 = KeSetPagePrivilege(a1, &v66, 4LL);
        if ( v59 < 0 )
          KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
      }
      goto LABEL_5;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v48 = CurrentIrql < 2u;
      v49 = v58;
      if ( v48 || (unsigned __int8)v58 >= 2u )
        goto LABEL_75;
      v50 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v50);
      v44 = BugCheckParameter2;
    }
    v49 = v58;
LABEL_75:
    __writecr8(v49);
    v58 = 17;
    goto LABEL_76;
  }
LABEL_5:
  LOBYTE(v14) = (*(_QWORD *)(v8 + 40) >> 54) & 7;
  if ( (_BYTE)v14 == 3 )
  {
    if ( v12 )
      LOBYTE(v14) = MiClearPfnImageVerified(v8);
    if ( (v7 & 4) == 0 )
    {
      LOBYTE(v14) = (*(_QWORD *)(v9 + 40) >> 54) & 7;
      if ( (_BYTE)v14 != 3 )
        LOBYTE(v14) = MiMarkPfnVerified(v9);
    }
  }
  if ( v59 < 0 )
  {
    v15 = *(unsigned __int8 *)(v8 + 34) >> 6;
    if ( *(unsigned __int8 *)(v9 + 34) >> 6 != (_DWORD)v15 )
      MiChangePageAttribute(v9, v15, 0LL);
    if ( !a3 )
    {
      a3 = &v63;
      if ( (a4 & 1) == 0 )
        goto LABEL_37;
      v16 = 2;
      LOBYTE(v64) = 17;
      HIDWORD(v63) = 2;
      while ( 1 )
      {
        v65 = MiReservePtes(&qword_1404669C0, v16);
        if ( v65 )
          break;
        v55 = v16 == 2;
        v16 -= 2;
        HIDWORD(v63) = v16;
        if ( v55 )
          goto LABEL_37;
      }
      if ( !v16 )
      {
LABEL_37:
        v35 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v35 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LOBYTE(v64) = v35;
        HyperSpace = MiAllocateHyperSpace(2LL, v35, v11, v13);
        v63 = 0x200000000LL;
        v65 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        BYTE1(v64) = 1;
      }
    }
    memset(v68, 0, 0xB8uLL);
    v17 = 2;
    v18 = 1;
    if ( a2 == -1LL )
      v17 = 1;
    v19 = *(unsigned int *)a3;
    if ( (unsigned int)(v17 + v19) > *((_DWORD *)a3 + 1) )
    {
      v38 = a3[2] << 25;
      LODWORD(v68[1]) = 20;
      v68[3] = 0LL;
      MiInsertTbFlushEntry(v68, v38 >> 16, v19);
      MiFlushTbList(v68, v39, v40, v41);
      v19 = 0LL;
    }
    v20 = a3[2] + 8 * v19;
    *(_DWORD *)a3 = v19 + v17;
    v21 = *(_BYTE *)(BugCheckParameter2 + 34) >> 6;
    if ( v21 )
    {
      if ( v21 == 2 )
        v22 = 28;
      else
        v22 = 4;
    }
    else
    {
      v22 = 12;
    }
    MiMakeValidPte(v20, a1, v22 | 0xA0000000);
    v25 = MiPteInShadowRange(v20);
    if ( v25 )
    {
      if ( (unsigned int)MiPteHasShadow(v24) )
      {
        if ( !HIBYTE(word_140465BEC) && (v23 & 1) != 0 )
          v23 |= 0x8000000000000000uLL;
        *(_QWORD *)v20 = v23;
        MiWritePteShadow(v20, v23);
LABEL_23:
        if ( a2 != -1LL )
        {
          v26 = *(_BYTE *)(v8 + 34) >> 6;
          if ( v26 )
          {
            if ( v26 == 2 )
              v18 = 25;
          }
          else
          {
            v18 = 9;
          }
          MiMakeValidPte(v20, a2, v18 | 0x20000000);
          if ( !MiPteInShadowRange(v20 + 8) )
            goto LABEL_28;
          if ( !(unsigned int)MiPteHasShadow(v28) )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v27 & 1) != 0 )
            {
              v27 |= 0x8000000000000000uLL;
            }
LABEL_28:
            *(_QWORD *)(v20 + 8) = v27;
            goto LABEL_29;
          }
          if ( !HIBYTE(word_140465BEC) && (v27 & 1) != 0 )
            v27 |= 0x8000000000000000uLL;
          *(_QWORD *)(v20 + 8) = v27;
          MiWritePteShadow(v20 + 8, v27);
        }
LABEL_29:
        KeCopyPage((__int64)(v20 << 25) >> 16, ((__int64)(v20 << 25) >> 16) + 4096);
        v30 = ZeroPte;
        if ( v25 )
        {
          if ( (unsigned int)MiPteHasShadow(v29) )
          {
            if ( !HIBYTE(word_140465BEC) && (v30 & 1) != 0 )
              v30 |= 0x8000000000000000uLL;
            *(_QWORD *)v20 = v30;
            MiWritePteShadow(v20, v30);
LABEL_31:
            v31 = (_QWORD *)(v20 + 8);
            if ( MiPteInShadowRange((unsigned __int64)v31) )
            {
              if ( (unsigned int)MiPteHasShadow(v33) )
              {
                if ( !HIBYTE(word_140465BEC) && (v32 & 1) != 0 )
                  v32 |= 0x8000000000000000uLL;
                *v31 = v32;
                MiWritePteShadow(v31, v32);
                goto LABEL_33;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v32 & 1) != 0 )
              {
                v32 |= 0x8000000000000000uLL;
              }
            }
            *v31 = v32;
LABEL_33:
            v14 = &v63;
            if ( a3 == &v63 )
            {
              v34 = *((_BYTE *)a3 + 8);
              if ( v34 == 17 )
              {
                LOBYTE(v14) = MiReleasePtes(&qword_1404669C0, a3[2], 2LL);
              }
              else
              {
                MmInternal = KeGetCurrentPrcb()->MmInternal;
                if ( MmInternal )
                {
                  MmInternal[1543] = 0LL;
                  v34 = *((_BYTE *)a3 + 8);
                }
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
                {
                  v56 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v56->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v56);
                }
                LOBYTE(v14) = v34;
                __writecr8(v34);
              }
            }
            return (char)v14;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v30 & 1) != 0 )
          {
            v30 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v20 = v30;
        goto LABEL_31;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v23 & 1) != 0 )
      {
        v23 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v20 = v23;
    goto LABEL_23;
  }
  return (char)v14;
}
