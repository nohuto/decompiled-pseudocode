/*
 * XREFs of MiBuildReservationCluster @ 0x140162A00
 * Callers:
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 * Callees:
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiUpdatePageFileHighInPte @ 0x1400BBAB0 (MiUpdatePageFileHighInPte.c)
 *     MiReferencePageForModifiedWrite @ 0x1400CA7E0 (MiReferencePageForModifiedWrite.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014D374 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14014D404 (MiRefPageFileSpaceBitmaps.c)
 *     MiGetPageForWriteCluster @ 0x140163030 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x140163208 (MiAddToReservationCluster.c)
 *     MiReleasePageFileSectionInfo @ 0x1401633D0 (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x14016340C (MiGetPageFileSectionForReservation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v6; // rsi
  __int16 v7; // bx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int8 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned int v15; // esi
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rdx
  ULONG_PTR v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // r15
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 updated; // rbx
  unsigned __int64 v30; // r12
  unsigned int v31; // r8d
  __int64 v32; // r12
  int v33; // r13d
  int v34; // eax
  __int64 v35; // r9
  int v36; // r9d
  __int64 v37; // rax
  int v38; // r13d
  unsigned int v39; // r8d
  __int64 v40; // r15
  unsigned __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rbx
  __int64 *v44; // r14
  int v45; // r12d
  int v46; // r9d
  __int64 v47; // rax
  _QWORD *v48; // r15
  __int64 *v49; // rdx
  unsigned __int64 v50; // rbx
  ULONG_PTR v51; // r14
  unsigned __int8 v52; // di
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // r8d
  __int64 v56; // rdi
  _DWORD *v57; // rax
  __int64 v59; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v61; // rbx
  struct _KPRCB *v62; // rcx
  struct _KPRCB *v63; // rcx
  struct _KPRCB *v64; // rcx
  struct _KPRCB *v65; // rcx
  struct _KPRCB *v66; // rcx
  int v67; // [rsp+28h] [rbp-99h]
  int v68; // [rsp+48h] [rbp-79h] BYREF
  int v69; // [rsp+4Ch] [rbp-75h]
  void *Src; // [rsp+50h] [rbp-71h]
  __int64 v71; // [rsp+58h] [rbp-69h] BYREF
  int v72; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v73; // [rsp+64h] [rbp-5Dh]
  __int64 v74; // [rsp+68h] [rbp-59h]
  __int64 v75; // [rsp+70h] [rbp-51h]
  ULONG_PTR v76; // [rsp+78h] [rbp-49h]
  _DWORD *v77[5]; // [rsp+80h] [rbp-41h] BYREF
  _OWORD v78[7]; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD *v79; // [rsp+128h] [rbp+67h]

  v79 = a1;
  memset(v77, 0, sizeof(v77));
  memset(v78, 0, 0x28uLL);
  v69 = 0;
  v6 = *(_QWORD *)(a2 + 256);
  v7 = *(_WORD *)(a2 + 204);
  MiRefPageFileSpaceBitmaps((KSPIN_LOCK *)a2, (__int64)v77);
  LODWORD(v71) = 0;
  v8 = v7 & 0xF;
  Src = a1;
  v9 = 5 * v8;
  v10 = *(_QWORD *)(v6 + 40 * v8 + 2768);
  if ( v10 == 0xFFFFFFFFFLL )
    goto LABEL_117;
  while ( 1 )
  {
    v11 = 48 * v10 - 0x58000000000LL;
    v12 = MiLockPageInline(v11);
    if ( v10 != *(_QWORD *)(v6 + 8 * v9 + 2768) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v12);
      goto LABEL_85;
    }
    v13 = *(_QWORD *)(v11 + 16);
    if ( qword_140465800 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140465800;
    v14 = HIDWORD(v13);
    if ( (unsigned int)v14 >= LODWORD(v77[1]) )
      break;
    if ( !_bittest64((const signed __int64 *)v77[2], v14) )
    {
      MiReferencePageForModifiedWrite(v11, 1);
      v15 = 1;
      *a1 = v10;
      if ( *a3 == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          v63 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v63);
        }
        __writecr8(v12);
        goto LABEL_118;
      }
      v16 = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
      v17 = *(_QWORD *)(v11 + 16);
      v18 = *(_QWORD *)(v11 + 40) & 0xFFFFFFFFFLL;
      v75 = 48 * v18 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v75);
      v19 = v75;
      *(_QWORD *)(v75 + 24) ^= (*(_QWORD *)(v75 + 24) ^ (*(_QWORD *)(v75 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        v64 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v64);
      }
      __writecr8(v12);
      if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
      {
        if ( !(unsigned int)MiGetPageFileSectionForReservation(v16, v78, 0LL) )
          goto LABEL_68;
        v59 = *(_QWORD *)(v11 + 24) >> 62;
        v69 = 1;
        if ( (v59 & 1) != 0 )
          goto LABEL_68;
      }
      else
      {
        v78[1] = 0LL;
      }
      v20 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
      v76 = v20;
      v21 = v20;
      if ( v20 )
      {
        MiMakeValidPte(v20, v18, 536870913);
        if ( !MiPteInShadowRange(v21) )
        {
LABEL_14:
          *(_QWORD *)v21 = v22;
          if ( v23 )
            MiWritePteShadow(v21);
          v24 = 8 * ((v16 >> 3) & 0x1FF);
          v25 = v24 + ((__int64)(v21 << 25) >> 16);
          v74 = v25;
          if ( v69 )
            v26 = 8 * ((*((_QWORD *)&v78[1] + 1) >> 3) & 0x1FFLL);
          else
            v26 = 4088LL;
          v27 = v17 & 0xFFFFFFFFFC00FC1FuLL;
          v28 = (v26 - v24) >> 3;
          updated = v27;
          v30 = v27;
          v31 = *a3;
          v73 = v31;
          if ( (unsigned int)v28 >= v31 - 1 )
            LODWORD(v28) = v31 - 1;
          if ( qword_140465800 && (v27 & 0x10) == 0 )
            v30 = v27 & ~qword_140465800;
          v32 = HIDWORD(v30);
          if ( v32 + (unsigned __int64)(unsigned int)v28 >= LODWORD(v77[1]) )
            LODWORD(v28) = LODWORD(v77[1]) - v32 - 1;
          v33 = v71;
          v34 = 0;
          v68 = 0;
          v35 = v25;
          if ( (_DWORD)v28 )
          {
            do
            {
              ++v32;
              v71 = v35 + 8;
              updated = MiUpdatePageFileHighInPte(updated, v32);
              v37 = MiGetPageForWriteCluster(
                      (unsigned int)&v77[1],
                      v36,
                      updated,
                      v36,
                      v67,
                      (__int64)&v68,
                      (__int64)&v72);
              if ( v37 == -1 )
                break;
              LODWORD(v28) = v28 - 1;
              ++v15;
              *++v79 = v37;
              if ( v37 == qword_140466548 )
                ++v33;
              if ( v72 == 3 && v15 >= 0x10 )
                break;
              v35 = v71;
            }
            while ( (_DWORD)v28 );
            LOWORD(v25) = v74;
            v31 = v73;
            v34 = v68;
          }
          v15 -= v34;
          v38 = v33 - v34;
          v39 = v31 - v15;
          LODWORD(v71) = v38;
          if ( v69 )
            v40 = v24 - 8 * ((*(_QWORD *)&v78[1] >> 3) & 0x1FFLL);
          else
            v40 = v25 & 0xFFF;
          v41 = v27;
          v42 = v40 >> 3;
          if ( (unsigned int)v42 >= v39 )
            v42 = v39;
          if ( qword_140465800 && (v27 & 0x10) == 0 )
            v41 = v27 & ~qword_140465800;
          v43 = HIDWORD(v41);
          if ( (unsigned int)v42 > (unsigned __int64)(v43 - 1) )
            v42 = (unsigned int)(v43 - 1);
          if ( (_DWORD)v42 )
          {
            v44 = (__int64 *)((char *)Src + 8 * v42);
            memmove(v44, Src, 8LL * v15);
            v68 = 0;
            v45 = v74;
            do
            {
              --v43;
              v45 -= 8;
              v27 = MiUpdatePageFileHighInPte(v27, v43);
              v47 = MiGetPageForWriteCluster((unsigned int)&v77[1], v45, v27, v46, v67, (__int64)&v68, (__int64)&v72);
              if ( v47 == -1 )
                break;
              --v44;
              LODWORD(v42) = v42 - 1;
              ++v15;
              *v44 = v47;
              if ( v47 == qword_140466548 )
                ++v38;
            }
            while ( (v72 != 3 || v15 < 0x10) && (_DWORD)v42 );
            v48 = Src;
            v15 -= v68;
            LODWORD(v71) = v38 - v68;
            v49 = &v44[v68];
            if ( Src != v49 )
              memmove(Src, v49, 8LL * v15);
          }
          else
          {
            v48 = Src;
          }
          v50 = *(_QWORD *)(48LL * *v48 - 0x58000000000LL + 16);
          if ( qword_140465800 && (v50 & 0x10) == 0 )
            v50 &= ~qword_140465800;
          v14 = HIDWORD(v50);
          MiReleasePtes((__int64)&qword_1404666C0, v76, 1u);
          goto LABEL_54;
        }
        if ( (unsigned int)MiPteHasShadow() )
        {
          v23 = 1;
          if ( HIBYTE(word_1404658EC) )
            goto LABEL_14;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          goto LABEL_14;
        }
        if ( (v22 & 1) != 0 )
          v22 |= 0x8000000000000000uLL;
        goto LABEL_14;
      }
LABEL_68:
      v48 = Src;
LABEL_54:
      v51 = v75;
      v52 = MiLockPageInline(v75);
      MiDecrementShareCount(v51);
      _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v52 < 2u )
      {
        v65 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v65);
      }
      __writecr8(v52);
      if ( v69 )
        MiReleasePageFileSectionInfo(v78, v53);
      goto LABEL_57;
    }
    MiUnlinkPageFromList(v11, 0);
    v61 = *(_QWORD *)(v11 + 16);
    *(_QWORD *)(v11 + 16) = v61 & 0xFFFFFFFFFFFFFFFDuLL;
    MiInsertPageInList(v11, 8u);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v62 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v62);
    }
    __writecr8(v12);
    MiReleasePageFileInfo(v6, v61, 0);
LABEL_85:
    v10 = *(_QWORD *)(v6 + 8 * v9 + 2768);
    if ( v10 == 0xFFFFFFFFFLL )
      goto LABEL_117;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    v66 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v66);
  }
  __writecr8(v12);
LABEL_117:
  v15 = 0;
  LODWORD(v14) = 0;
LABEL_118:
  v48 = a1;
LABEL_57:
  v54 = *a3;
  if ( v15 < (unsigned int)v54 && v15 && v15 + (unsigned __int64)(unsigned int)v14 < LODWORD(v77[1]) )
  {
    if ( (unsigned __int64)(unsigned int)v14 + v54 > LODWORD(v77[1]) )
      v55 = LODWORD(v77[1]) - v14;
    else
      v55 = *a3;
    v56 = a2;
    v15 += MiAddToReservationCluster(
             a2,
             (unsigned int)&v77[1],
             v55 - v15,
             (unsigned int)v14 + v15,
             (__int64)&v48[v15],
             (__int64)&v71);
  }
  else
  {
    v56 = a2;
  }
  v57 = MiDerefPageFileSpaceBitmaps(v56, v77, 0);
  if ( v57 )
    ExFreePoolWithTag(v57, 0);
  *a3 = v15;
  *a4 = v15 - v71;
  return (unsigned int)v14;
}
