/*
 * XREFs of MiCopyPage @ 0x1400B1B90
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiCopyHeaderIfResident @ 0x140092DB0 (MiCopyHeaderIfResident.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiSwapStackPageNoDpc @ 0x14012D744 (MiSwapStackPageNoDpc.c)
 *     MiTradeActivePage @ 0x14012DFF4 (MiTradeActivePage.c)
 *     MiSplitDirectMapPage @ 0x1402B6F14 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 *     MiInitializeSystemImagePage @ 0x1409B9190 (MiInitializeSystemImagePage.c)
 *     MiTradeBootImagePage @ 0x1409B96AC (MiTradeBootImagePage.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiIsAddressGlobal @ 0x1400B2220 (MiIsAddressGlobal.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     MiAllocateHyperSpace @ 0x1400B39C0 (MiAllocateHyperSpace.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF400 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1401C0B30 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x14028DD7C (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14028DE10 (KeSetPagePrivilege.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, unsigned int *a3, char a4)
{
  char v6; // bl
  ULONG_PTR v7; // rsi
  __int64 v8; // r13
  int v9; // edi
  int PagePrivilege; // eax
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // r12d
  int v14; // esi
  int *v15; // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // dl
  unsigned __int64 HyperSpace; // rax
  ULONG_PTR v19; // r11
  int v20; // ebx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  char v23; // al
  signed int v24; // r12d
  __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  char v34; // al
  int v35; // eax
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  unsigned __int64 *v38; // r8
  unsigned __int64 v39; // rdx
  _KPROCESS *Process; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 *v43; // rdi
  unsigned __int8 v44; // bl
  _QWORD *MmInternal; // rcx
  unsigned int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  _BOOL8 v51; // rcx
  int v52; // edi
  int v53; // eax
  unsigned __int8 CurrentIrql; // al
  bool v55; // cf
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // rcx
  char v58; // al
  int v59; // eax
  unsigned __int8 v60; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  bool v62; // zf
  int v64; // eax
  struct _KPRCB *v68; // rcx
  char v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+34h] [rbp-CCh]
  int v73; // [rsp+48h] [rbp-B8h]
  int v75; // [rsp+58h] [rbp-A8h] BYREF
  int v76; // [rsp+5Ch] [rbp-A4h]
  __int16 v77; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v78; // [rsp+68h] [rbp-98h]
  ULONG_PTR v79; // [rsp+70h] [rbp-90h]
  __int128 v80; // [rsp+80h] [rbp-80h] BYREF
  __int128 v81; // [rsp+90h] [rbp-70h] BYREF
  int v82; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v83; // [rsp+A4h] [rbp-5Ch]
  __int64 v84; // [rsp+A8h] [rbp-58h]
  __int64 v85; // [rsp+B0h] [rbp-50h]
  __int64 v86; // [rsp+B8h] [rbp-48h]

  v6 = 0;
  v7 = 48 * a2 - 0x58000000000LL;
  v79 = v7;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = -1073741823;
  v71 = a4 & 4;
  v73 = v71 != 0 ? 4 : 0;
  PagePrivilege = MiGetPagePrivilege(v7);
  v12 = 2LL;
  v13 = 4;
  if ( PagePrivilege )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v6 = 2;
    }
    else if ( (MiFlags & 0x10000) != 0
           && (PagePrivilege & 1) != 0
           && (a4 & 8) == 0
           && (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) == 0 )
    {
      v6 = 2;
    }
    else if ( (MiFlags & 0x40000) == 0 || (v6 = 2, (PagePrivilege & 2) == 0 || (a4 & 8) != 0) )
    {
      v6 = 4;
    }
    v14 = a4 & 2;
  }
  else
  {
    v14 = a4 & 2;
    if ( (a4 & 2) == 0 )
      v6 = 4;
  }
  if ( (v6 & 2) != 0 )
  {
    v70 = 17;
    *((_QWORD *)&v80 + 1) = 0LL;
    v51 = v14 != 0;
    if ( (MiFlags & 0x40000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v51, 0xFFFFF68000000000uLL, 2LL, v11);
      LOBYTE(v51) = v14 != 0;
    }
    v52 = 0;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_111;
    if ( v14 )
    {
      v53 = v71;
      v80 = v81;
      goto LABEL_107;
    }
    *(_QWORD *)&v80 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
    if ( (unsigned __int64)v80 >= 0xFFFF800000000000uLL )
    {
      *((_QWORD *)&v80 + 1) = 0LL;
LABEL_105:
      v53 = v71;
LABEL_106:
      LOBYTE(v51) = v14 != 0;
LABEL_107:
      if ( (a4 & 0x20) != 0 )
      {
        if ( !v53 )
        {
          v58 = MiLockPageInline(v8);
          LOBYTE(v51) = v14 != 0;
          v70 = v58;
        }
        v52 = ((*(_DWORD *)(v8 + 40) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
      }
LABEL_111:
      v59 = KeCopyPrivilegedPage(a1, (unsigned int)&v80, a2, (unsigned int)&v81, v52, v51);
      v9 = v59;
      if ( v59 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v59);
      v60 = v70;
      if ( v70 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v70 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v60 = v70;
        }
        __writecr8(v60);
      }
      if ( (MiFlags & 0x40000) != 0 && !v14 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
      {
        v9 = KeSetPagePrivilege(a1, &v80, 4LL);
        if ( v9 < 0 )
          KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
      }
      goto LABEL_5;
    }
    v6 |= 8u;
    *((_QWORD *)&v80 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
    if ( !v71 )
      v70 = MiLockPageInline(v8);
    MiMarkPfnVerified(v8, 4u);
    MiAbortCombineScan(v8);
    v53 = v71;
    if ( v71 )
      goto LABEL_106;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v55 = CurrentIrql < 2u;
      v56 = v70;
      if ( v55 || (unsigned __int8)v70 >= 2u )
        goto LABEL_104;
      v57 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v57);
    }
    v56 = v70;
LABEL_104:
    __writecr8(v56);
    v70 = 17;
    goto LABEL_105;
  }
LABEL_5:
  LOBYTE(v15) = (*(_QWORD *)(v79 + 40) >> 54) & 7;
  if ( (_BYTE)v15 == 3 )
  {
    if ( v14 )
      LOBYTE(v15) = MiClearPfnImageVerified(v79, v73);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v15) = (*(_QWORD *)(v8 + 40) >> 54) & 7;
      if ( (_BYTE)v15 != 3 )
        LOBYTE(v15) = MiMarkPfnVerified(v8, v73);
    }
  }
  if ( v9 < 0 )
  {
    v16 = *(unsigned __int8 *)(v79 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v16 )
      MiChangePageAttribute(v8, v16, 0LL);
    if ( !a3 )
    {
      a3 = (unsigned int *)&v75;
      if ( (a4 & 1) == 0 )
        goto LABEL_11;
      v46 = 2;
      v75 = 0;
      v76 = 2;
      v77 = 17;
      while ( 1 )
      {
        v78 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)v46);
        if ( v78 )
          break;
        v62 = v46 == 2;
        v46 -= 2;
        v76 = v46;
        if ( v62 )
          goto LABEL_11;
      }
      if ( !v46 )
      {
LABEL_11:
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LOBYTE(v77) = v17;
        HyperSpace = MiAllocateHyperSpace();
        v75 = 0;
        v78 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v76 = 2;
        HIBYTE(v77) = 1;
      }
    }
    v19 = a2;
    v20 = 2;
    if ( a2 == -1LL )
      v20 = 1;
    v21 = *a3;
    if ( (int)v21 + v20 > a3[1] )
    {
      v47 = *((_QWORD *)a3 + 2) << 25;
      v84 = 20LL;
      v82 = 0;
      v83 = 0;
      v85 = 0LL;
      v86 = 0LL;
      MiInsertTbFlushEntry(&v82, v47 >> 16, v21);
      MiFlushTbList(&v82, v48, v49, v50);
      v19 = a2;
      v21 = 0LL;
      *a3 = 0;
    }
    v22 = *((_QWORD *)a3 + 2) + 8 * v21;
    *a3 = v21 + v20;
    v23 = *(_BYTE *)(v8 + 34) >> 6;
    if ( v23 )
    {
      if ( v23 == 2 )
        v13 = 28;
    }
    else
    {
      v13 = 12;
    }
    v24 = v13 | 0xA0000000;
    v25 = v24 & 0x1F;
    v26 = ((a1 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v25] & 0xFFFF000000000E7FuLL | 0x21;
    v27 = 0xFFFFF6FB40000000uLL;
    v28 = 0xFFFFF6FB7FFFFFFFuLL;
    v29 = 0xFFFFF6FB7DBEDF68uLL;
    if ( v22 < 0xFFFFF68000000000uLL || v22 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_136;
    if ( v22 >= 0xFFFFF6FB40000000uLL && v22 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v26 = v22 == 0xFFFFF6FB7DBEDF68uLL
          ? ((a1 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v25] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
          : ((a1 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v25] & 0x7FFF000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v22) )
        v26 |= 4uLL;
    }
    if ( v22 <= 0xFFFFF6BFFFFFFF78uLL )
      v26 |= 4uLL;
    if ( (unsigned int)MiIsAddressGlobal((__int64)(v22 << 25) >> 16, v29, v12) )
LABEL_136:
      v26 |= 0x100uLL;
    LOBYTE(v28) = (v24 & 5) == 4;
    if ( ((unsigned __int8)v28 & (v24 < 0)) != 0 )
      v26 |= 0x42uLL;
    v30 = 0xA000000000000LL;
    v31 = 0xFAFFFFFFFFFFFEFFuLL;
    v32 = v26 & 0xFAFFFFFFFFFFFEFFuLL | ((word_14043B26C & 1 | 0xA000000000000LL) << 8);
    if ( v22 < 0xFFFFF6FB7DBED000uLL || v22 > 0xFFFFF6FB7DBED7F8uLL )
    {
      v33 = 0x8000000000000000uLL;
    }
    else
    {
      if ( (unsigned int)MiPteHasShadow(v28, v32) )
      {
        if ( !HIBYTE(word_14043B26C) )
          v32 |= 0x8000000000000000uLL;
        *(_QWORD *)v22 = v32;
        MiWritePteShadow(v22);
        v30 = 0xA000000000000LL;
        v27 = 0xFFFFF6FB40000000uLL;
        v31 = 0xFAFFFFFFFFFFFEFFuLL;
        v33 = 0x8000000000000000uLL;
LABEL_31:
        if ( v19 == -1LL )
          goto LABEL_43;
        v34 = *(_BYTE *)(v79 + 34) >> 6;
        if ( v34 )
        {
          if ( v34 == 2 )
            v35 = 25;
          else
            v35 = 1;
        }
        else
        {
          v35 = 9;
        }
        v36 = ((v19 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v35] & 0xFFFF000000000E7FuLL | 0x21;
        if ( v22 < 0xFFFFF68000000000uLL || v22 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_149;
        if ( v22 >= v27 && v22 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          v36 = v22 == 0xFFFFF6FB7DBEDF68uLL
              ? ((v19 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v35] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
              : ((v19 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v35] & 0x7FFF000000000E7FLL | 0x21;
          v64 = MiUserPdeOrAbove(v22);
          v30 = 0xA000000000000LL;
          if ( v64 )
            v36 |= 4uLL;
        }
        if ( v22 <= 0xFFFFF6BFFFFFFF78uLL )
          v36 |= 4uLL;
        if ( (unsigned int)MiIsAddressGlobal((__int64)(v22 << 25) >> 16, v32, v30) )
LABEL_149:
          v36 |= 0x100uLL;
        v37 = v30 | word_14043B26C & 1;
        v38 = (unsigned __int64 *)(v22 + 8);
        v39 = v31 & v36 | (v37 << 8);
        if ( v22 + 8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v38 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v33, v39) )
          {
            if ( !HIBYTE(word_14043B26C) )
              v39 |= 0x8000000000000000uLL;
            *v38 = v39;
            MiWritePteShadow(v38);
LABEL_43:
            KeCopyPage((__int64)(v22 << 25) >> 16, ((__int64)(v22 << 25) >> 16) + 4096);
            v41 = ZeroPte;
            if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (unsigned int)MiPteHasShadow(Process, ZeroPte) )
              {
                if ( !HIBYTE(word_14043B26C) && (v41 & 1) != 0 )
                  v41 |= 0x8000000000000000uLL;
                *(_QWORD *)v22 = v41;
                MiWritePteShadow(v22);
LABEL_45:
                v42 = ZeroPte;
                v43 = (__int64 *)(v22 + 8);
                if ( (unsigned __int64)v43 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v43 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  if ( (unsigned int)MiPteHasShadow(Process, ZeroPte) )
                  {
                    if ( !HIBYTE(word_14043B26C) && (v42 & 1) != 0 )
                      v42 |= 0x8000000000000000uLL;
                    *v43 = v42;
                    MiWritePteShadow(v43);
                    goto LABEL_47;
                  }
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                    && (v42 & 1) != 0 )
                  {
                    v42 |= 0x8000000000000000uLL;
                  }
                }
                *v43 = v42;
LABEL_47:
                v15 = &v75;
                if ( a3 == (unsigned int *)&v75 )
                {
                  v44 = *((_BYTE *)a3 + 8);
                  if ( v44 == 17 )
                  {
                    LOBYTE(v15) = MiReleasePtes((__int64)&qword_14043C060, *((_QWORD *)a3 + 2), 2u);
                  }
                  else
                  {
                    MmInternal = KeGetCurrentPrcb()->MmInternal;
                    if ( MmInternal )
                    {
                      MmInternal[1543] = 0LL;
                      v44 = *((_BYTE *)a3 + 8);
                    }
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
                    {
                      v68 = KeGetCurrentPrcb();
                      _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
                      KiRemoveSystemWorkPriorityKick(v68);
                    }
                    LOBYTE(v15) = v44;
                    __writecr8(v44);
                  }
                }
                return (char)v15;
              }
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v41 & 1) != 0 )
                v41 |= 0x8000000000000000uLL;
            }
            *(_QWORD *)v22 = v41;
            goto LABEL_45;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
            v39 |= 0x8000000000000000uLL;
        }
        *v38 = v39;
        goto LABEL_43;
      }
      v33 = 0x8000000000000000uLL;
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        v32 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v22 = v32;
    goto LABEL_31;
  }
  return (char)v15;
}
