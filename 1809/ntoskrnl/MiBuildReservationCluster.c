/*
 * XREFs of MiBuildReservationCluster @ 0x1401501BC
 * Callers:
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14014F9FC (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014FBA8 (MiDerefPageFileSpaceBitmaps.c)
 *     MiGetPageForWriteCluster @ 0x140150760 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x14015096C (MiAddToReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x1401577DC (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x140157D9C (MiReleasePageFileSectionInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  struct _KEVENT *v4; // rsi
  __int16 v5; // bx
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned __int8 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // esi
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rdx
  ULONG_PTR v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // r15
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 updated; // rbx
  unsigned __int64 v31; // r12
  unsigned int v32; // r8d
  __int64 v33; // r12
  int v34; // r13d
  int v35; // eax
  __int64 v36; // r9
  int v37; // r9d
  __int64 v38; // rax
  int v39; // r13d
  unsigned int v40; // r8d
  __int64 v41; // r15
  unsigned __int64 v42; // rbx
  __int64 v43; // r15
  __int64 v44; // rbx
  __int64 *v45; // r14
  int v46; // r12d
  int v47; // r9d
  __int64 v48; // rax
  _QWORD *v49; // r15
  __int64 *v50; // rdx
  unsigned __int64 v51; // rbx
  ULONG_PTR v52; // r14
  unsigned __int8 v53; // di
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // r8d
  __int64 v57; // rdi
  _DWORD *v58; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v61; // rbx
  struct _KPRCB *v62; // rcx
  struct _KPRCB *v63; // rcx
  struct _KPRCB *v64; // rcx
  __int64 v65; // rax
  struct _KPRCB *v66; // rcx
  struct _KPRCB *v67; // rcx
  int v68; // [rsp+28h] [rbp-99h]
  int v69; // [rsp+48h] [rbp-79h] BYREF
  int v70; // [rsp+4Ch] [rbp-75h]
  void *Src; // [rsp+50h] [rbp-71h]
  __int64 v72; // [rsp+58h] [rbp-69h] BYREF
  int v73; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v74; // [rsp+64h] [rbp-5Dh]
  __int64 v75; // [rsp+68h] [rbp-59h]
  __int64 v76; // [rsp+70h] [rbp-51h]
  ULONG_PTR v77; // [rsp+78h] [rbp-49h]
  _DWORD *v78; // [rsp+80h] [rbp-41h] BYREF
  unsigned int v79; // [rsp+88h] [rbp-39h] BYREF
  const signed __int64 *v80; // [rsp+90h] [rbp-31h]
  _BYTE v81[16]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v82; // [rsp+B8h] [rbp-9h]
  _QWORD *v83; // [rsp+128h] [rbp+67h]

  v83 = a1;
  v4 = *(struct _KEVENT **)(a2 + 256);
  v5 = *(_WORD *)(a2 + 204);
  v70 = 0;
  MiRefPageFileSpaceBitmaps((KSPIN_LOCK *)a2, (__int64)&v78);
  LODWORD(v72) = 0;
  v7 = v5 & 0xF;
  Src = a1;
  v8 = 5 * v7;
  v9 = *((_QWORD *)&v4[115].Header.WaitListHead.Flink + 5 * v7);
  if ( v9 == 0xFFFFFFFFFLL )
    goto LABEL_117;
  while ( 1 )
  {
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = MiLockPageInline(v10);
    if ( v9 != *((_QWORD *)&v4[115].Header.WaitListHead.Flink + v8) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v11);
      goto LABEL_80;
    }
    v12 = *(_QWORD *)(v10 + 16);
    if ( qword_14043B180 && (v12 & 0x10) == 0 )
      v12 &= ~qword_14043B180;
    v13 = HIDWORD(v12);
    if ( (unsigned int)v13 >= v79 )
      break;
    if ( !_bittest64(v80, v13) )
    {
      MiReferencePageForModifiedWrite(v10, 1);
      v16 = 1;
      *a1 = v9;
      if ( *a3 == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          v63 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v63);
        }
        __writecr8(v11);
        goto LABEL_118;
      }
      v17 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
      v18 = *(_QWORD *)(v10 + 16);
      v19 = *(_QWORD *)(v10 + 40) & 0xFFFFFFFFFLL;
      v76 = 48 * v19 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v76, v14, v15);
      v20 = v76;
      *(_QWORD *)(v76 + 24) ^= (*(_QWORD *)(v76 + 24) ^ (*(_QWORD *)(v76 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v64 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v64);
      }
      __writecr8(v11);
      if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
      {
        if ( !(unsigned int)MiGetPageFileSectionForReservation(v17, v81, 0LL) )
          goto LABEL_94;
        v65 = *(_QWORD *)(v10 + 24) >> 62;
        v70 = 1;
        if ( (v65 & 1) != 0 )
          goto LABEL_94;
      }
      else
      {
        v82 = 0LL;
      }
      v21 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
      v77 = v21;
      v22 = v21;
      if ( v21 )
      {
        MiMakeValidPte(v21, v19, 536870913);
        if ( !MiPteInShadowRange(v22) )
        {
LABEL_14:
          *(_QWORD *)v22 = v23;
          if ( v24 )
            MiWritePteShadow(v22, v23);
          v25 = 8 * ((v17 >> 3) & 0x1FF);
          v26 = v25 + ((__int64)(v22 << 25) >> 16);
          v75 = v26;
          if ( v70 )
            v27 = 8 * ((*((_QWORD *)&v82 + 1) >> 3) & 0x1FFLL);
          else
            v27 = 4088LL;
          v28 = v18 & 0xFFFFFFFFFC00FC1FuLL;
          v29 = (v27 - v25) >> 3;
          updated = v28;
          v31 = v28;
          v32 = *a3;
          v74 = v32;
          if ( (unsigned int)v29 >= v32 - 1 )
            LODWORD(v29) = v32 - 1;
          if ( qword_14043B180 && (v28 & 0x10) == 0 )
            v31 = v28 & ~qword_14043B180;
          v33 = HIDWORD(v31);
          if ( v33 + (unsigned __int64)(unsigned int)v29 >= v79 )
            LODWORD(v29) = v79 - v33 - 1;
          v34 = v72;
          v35 = 0;
          v69 = 0;
          v36 = v26;
          if ( (_DWORD)v29 )
          {
            do
            {
              ++v33;
              v72 = v36 + 8;
              updated = MiUpdatePageFileHighInPte(updated, v33);
              v38 = MiGetPageForWriteCluster((unsigned int)&v79, v37, updated, v37, v68, (__int64)&v69, (__int64)&v73);
              if ( v38 == -1 )
                break;
              LODWORD(v29) = v29 - 1;
              ++v16;
              *++v83 = v38;
              if ( v38 == qword_14043BE88 )
                ++v34;
              if ( v73 == 3 && v16 >= 0x10 )
                break;
              v36 = v72;
            }
            while ( (_DWORD)v29 );
            LOWORD(v26) = v75;
            v32 = v74;
            v35 = v69;
          }
          v16 -= v35;
          v39 = v34 - v35;
          v40 = v32 - v16;
          LODWORD(v72) = v39;
          if ( v70 )
            v41 = v25 - 8 * (((unsigned __int64)v82 >> 3) & 0x1FF);
          else
            v41 = v26 & 0xFFF;
          v42 = v28;
          v43 = v41 >> 3;
          if ( (unsigned int)v43 >= v40 )
            v43 = v40;
          if ( qword_14043B180 && (v28 & 0x10) == 0 )
            v42 = v28 & ~qword_14043B180;
          v44 = HIDWORD(v42);
          if ( (unsigned int)v43 > (unsigned __int64)(v44 - 1) )
            v43 = (unsigned int)(v44 - 1);
          if ( (_DWORD)v43 )
          {
            v45 = (__int64 *)((char *)Src + 8 * v43);
            memmove(v45, Src, 8LL * v16);
            v69 = 0;
            v46 = v75;
            do
            {
              --v44;
              v46 -= 8;
              v28 = MiUpdatePageFileHighInPte(v28, v44);
              v48 = MiGetPageForWriteCluster((unsigned int)&v79, v46, v28, v47, v68, (__int64)&v69, (__int64)&v73);
              if ( v48 == -1 )
                break;
              --v45;
              LODWORD(v43) = v43 - 1;
              ++v16;
              *v45 = v48;
              if ( v48 == qword_14043BE88 )
                ++v39;
            }
            while ( (v73 != 3 || v16 < 0x10) && (_DWORD)v43 );
            v49 = Src;
            v16 -= v69;
            LODWORD(v72) = v39 - v69;
            v50 = &v45[v69];
            if ( Src != v50 )
              memmove(Src, v50, 8LL * v16);
          }
          else
          {
            v49 = Src;
          }
          v51 = *(_QWORD *)(48LL * *v49 - 0x58000000000LL + 16);
          if ( qword_14043B180 && (v51 & 0x10) == 0 )
            v51 &= ~qword_14043B180;
          v13 = HIDWORD(v51);
          MiReleasePtes((__int64)&qword_14043C060, v77, 1u);
          goto LABEL_54;
        }
        if ( (unsigned int)MiPteHasShadow() )
        {
          v24 = 1;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_14;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        {
          goto LABEL_14;
        }
        if ( (v23 & 1) != 0 )
          v23 |= 0x8000000000000000uLL;
        goto LABEL_14;
      }
LABEL_94:
      v49 = Src;
LABEL_54:
      v52 = v76;
      v53 = MiLockPageInline(v76);
      MiDecrementShareCount(v52);
      _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v53 < 2u )
      {
        v66 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v66);
      }
      __writecr8(v53);
      if ( v70 )
        MiReleasePageFileSectionInfo(v81, v54);
      goto LABEL_57;
    }
    MiUnlinkPageFromList(v10, 0);
    v61 = *(_QWORD *)(v10 + 16);
    *(_QWORD *)(v10 + 16) = v61 & 0xFFFFFFFFFFFFFFFDuLL;
    MiInsertPageInList(v10, 8);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v62 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v62);
    }
    __writecr8(v11);
    MiReleasePageFileInfo(v4, v61, 0);
LABEL_80:
    v9 = *((_QWORD *)&v4[115].Header.WaitListHead.Flink + v8);
    if ( v9 == 0xFFFFFFFFFLL )
      goto LABEL_117;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    v67 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v67->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v67);
  }
  __writecr8(v11);
LABEL_117:
  v16 = 0;
  LODWORD(v13) = 0;
LABEL_118:
  v49 = a1;
LABEL_57:
  v55 = *a3;
  if ( v16 < (unsigned int)v55 && v16 && v16 + (unsigned __int64)(unsigned int)v13 < v79 )
  {
    if ( (unsigned __int64)(unsigned int)v13 + v55 > v79 )
      v56 = v79 - v13;
    else
      v56 = *a3;
    v57 = a2;
    v16 += MiAddToReservationCluster(
             a2,
             (unsigned int)&v79,
             v56 - v16,
             (unsigned int)v13 + v16,
             (__int64)&v49[v16],
             (__int64)&v72);
  }
  else
  {
    v57 = a2;
  }
  v58 = MiDerefPageFileSpaceBitmaps(v57, &v78, 0);
  if ( v58 )
    ExFreePoolWithTag(v58, 0);
  *a3 = v16;
  *a4 = v16 - v72;
  return (unsigned int)v13;
}
