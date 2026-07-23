/*
 * XREFs of MiBuildMappedCluster @ 0x14007FF70
 * Callers:
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x140022CC4 (MiReleaseWriteInProgressCharges.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiBuildMappedCluster(_QWORD *a1, unsigned __int64 *a2, int a3)
{
  int v3; // r12d
  unsigned __int64 *v4; // r14
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdi
  int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // bl
  unsigned __int64 v26; // rsi
  __int64 v27; // rsi
  unsigned __int64 v28; // rsi
  unsigned __int64 *result; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r10
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  ULONG_PTR v35; // r15
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  int v38; // ecx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // r10
  __int64 v44; // r11
  __int64 v45; // rcx
  char *PoolWithTag; // rax
  unsigned __int64 *v47; // r14
  unsigned __int64 *v48; // rsi
  int v49; // ebx
  __int64 v50; // rcx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rbp
  unsigned __int64 v53; // rbx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  ULONG_PTR v57; // r14
  int v58; // eax
  unsigned __int8 v59; // bl
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rbp
  int v62; // eax
  unsigned __int64 v63; // r15
  __int64 v64; // rax
  __int64 v65; // rbx
  unsigned __int8 v66; // si
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v68; // r13
  __int64 v69; // rax
  __int64 v70; // rbx
  unsigned __int8 v71; // r14
  struct _KPRCB *v72; // rcx
  unsigned __int64 v73; // [rsp+20h] [rbp-A8h]
  __int64 v74; // [rsp+20h] [rbp-A8h]
  __int64 v75; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v76; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v77; // [rsp+30h] [rbp-98h]
  unsigned __int64 v78; // [rsp+38h] [rbp-90h]
  char *v79; // [rsp+38h] [rbp-90h]
  unsigned __int64 *v80; // [rsp+40h] [rbp-88h]
  __int64 v81; // [rsp+48h] [rbp-80h]
  int v82; // [rsp+50h] [rbp-78h] BYREF
  __int64 v83; // [rsp+58h] [rbp-70h]
  unsigned __int64 v84; // [rsp+60h] [rbp-68h]
  unsigned __int64 v85; // [rsp+68h] [rbp-60h]
  unsigned __int64 v86; // [rsp+70h] [rbp-58h]
  unsigned __int64 *v87; // [rsp+78h] [rbp-50h]
  unsigned __int64 *v89; // [rsp+D8h] [rbp+10h] BYREF
  int v90; // [rsp+E0h] [rbp+18h]
  unsigned __int8 v91; // [rsp+E8h] [rbp+20h] BYREF

  v90 = a3;
  v89 = a2;
  v3 = a3;
  v4 = a2;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[5];
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v87 = a2 + 6;
  v80 = a2 + 6;
  v9 = v5 | 0x8000000000000000uLL;
  v84 = (v8 >> 63) + v8;
  v86 = v9;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v73 = v9;
  v81 = *(_QWORD *)(qword_14043B808 + 8 * ((v7 >> 40) & 0x3FF));
  if ( qword_14043B180 && (v6 & 0x10) == 0 )
    v6 &= ~qword_14043B180;
  v11 = v6 >> 16;
  if ( v10 < *(_QWORD *)(v11 + 8) )
    v10 = *(_QWORD *)(v11 + 8);
  v12 = v10;
  if ( v10 < v9 - 120 )
    v12 = v9 - 120;
  v83 = v7 & 0xFFFFFFFFFLL;
  v75 = MiMapPageInHyperSpaceWorker(v7 & 0xFFFFFFFFFLL, &v91, 0x80000000LL);
  LODWORD(v85) = v9;
  v13 = v75 + (v9 & 0xFFF);
  v77 = v9;
  v14 = v9;
  v15 = v75;
  if ( v3 )
    v14 = v10;
  v16 = v9;
  if ( v9 > v14 )
  {
    do
    {
      v13 -= 8LL;
      v41 = MI_READ_PTE_LOCK_FREE(v13);
      if ( (v41 & 0xC01) != 0x800 )
        break;
      if ( qword_14043B180 )
      {
        if ( (v41 & 0x10) != 0 )
          v41 &= ~0x10uLL;
        else
          v41 &= ~qword_14043B180;
      }
      if ( (*(_QWORD *)(48 * ((v41 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        break;
      v45 = v44 + 48 * ((v41 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_BYTE *)(v45 + 34) & 0x10) == 0
        || *(_WORD *)(v45 + 32)
        || v81 != *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v45 + 40) >> 40) & 0x3FFLL)) )
      {
        break;
      }
      v9 -= 8LL;
      v16 = v9;
      if ( v9 < v12 )
        v16 = v43;
    }
    while ( v9 > v42 );
    v4 = v89;
    v3 = v90;
    v15 = v75;
    v77 = v16;
    v86 = v9;
  }
  v17 = *(unsigned int *)(v11 + 44);
  v18 = ((unsigned __int16)v13 ^ (unsigned __int16)v16) & 0xFFF ^ v13;
  v19 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v19 > *(_QWORD *)(v11 + 8) + 8 * v17 )
    v19 = *(_QWORD *)(v11 + 8) + 8 * v17;
  v78 = v19;
  v20 = v19;
  if ( v19 > v16 + 128 )
    v20 = v16 + 128;
  if ( !v3 )
  {
    v19 = v16 + 8;
    v78 = v16 + 8;
  }
  v21 = v16 + 8;
  v22 = v16;
  if ( v90 )
    v21 = v20;
  v23 = 1;
  v90 = 1;
  if ( v16 < v19 )
  {
    v24 = v73;
    do
    {
      if ( v22 == v24 )
      {
        *v80 = v84;
        v24 = v73;
        ++v80;
      }
      else
      {
        if ( v23 != 3 || (__int64)(((char *)v80 - (char *)v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
        {
          v30 = MI_READ_PTE_LOCK_FREE(v18);
          if ( (v30 & 0xC01) == 0x800 )
          {
            v33 = v30;
            if ( qword_14043B180 )
            {
              if ( (v30 & 0x10) != 0 )
                v33 = v30 & 0xFFFFFFFFFFFFFFEFuLL;
              else
                v33 = v30 & ~qword_14043B180;
            }
            v34 = 6 * ((v33 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(v32 + 48 * ((v33 >> 12) & 0xFFFFFFFFFLL)) & 0x20000000000000LL) == 0 )
            {
              v24 = v73;
              v18 -= 8LL;
              v22 -= 8LL;
              goto LABEL_23;
            }
            v35 = 48 * ((v33 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            LODWORD(v89) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v89, v34, v31);
              while ( *(__int64 *)(v35 + 24) < 0 );
            }
            if ( v30 != MI_READ_PTE_LOCK_FREE(v18) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), v36);
              v16 = v77;
              v18 -= 8LL;
              v24 = v73;
              v22 -= 8LL;
              goto LABEL_23;
            }
            if ( (*(_BYTE *)(v35 + 34) & 0x10) != 0
              && !*(_WORD *)(v35 + 32)
              && v81 == *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v35 + 40) >> 40) & 0x3FFLL)) )
            {
              if ( v22 >= v21 )
                goto LABEL_45;
              if ( v15 )
              {
                MiUnmapPageInHyperSpaceWorker(v15, 2u, 0x80000000LL);
                v90 = MiReferencePageForModifiedWrite(v35);
                v37 = MiMapPageInHyperSpaceWorker(v83, 0LL, 0x80000000LL);
                v38 = v90;
                v18 = v37 + (v18 & 0xFFF);
                v75 = v37;
                v15 = v37;
              }
              else
              {
                v62 = MiReferencePageForModifiedWrite(v35);
                v15 = v75;
                v38 = v62;
                v90 = v62;
              }
              if ( v38 )
              {
                if ( qword_14043B180 )
                {
                  if ( (v30 & 0x10) != 0 )
                    v30 &= ~0x10uLL;
                  else
                    v30 &= ~qword_14043B180;
                }
                v36 = 0x7FFFFFFFFFFFFFFFLL;
                *v80++ = (v30 >> 12) & 0xFFFFFFFFFLL;
LABEL_45:
                _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), v36);
                v16 = v77;
                v24 = v73;
                goto LABEL_23;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), v36);
            }
            v16 = v77;
          }
        }
        v25 = v91;
        if ( v15 )
        {
          MiUnmapPageInHyperSpaceWorker(v15, v91, 0x80000000LL);
          v15 = 0LL;
        }
        v39 = v73;
        if ( v22 >= v73 )
          goto LABEL_25;
        v40 = ((char *)v80 - (char *)v4 - 48) >> 3;
        if ( v40 )
        {
          if ( v80 > v4 + 6 )
          {
            v63 = (unsigned __int64)v80;
            do
            {
              v64 = *(_QWORD *)(v63 - 8);
              v63 -= 8LL;
              v65 = 48 * v64 - 0x58000000000LL;
              v66 = MiLockPageInline(v65);
              MiWriteCompletePfn(v65, 1);
              _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v66 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              __writecr8(v66);
            }
            while ( v63 > (unsigned __int64)(v4 + 6) );
            v19 = v78;
            v9 = v86;
            v80 = (unsigned __int64 *)v63;
            v16 = v77;
          }
          MiReleaseWriteInProgressCharges(v81, v40, 1);
          v39 = v73;
        }
        if ( v21 == v16 + 8 )
        {
          v19 = v39 + 8;
          v78 = v39 + 8;
          v21 = v39 + 8;
        }
        else if ( v19 > v39 + 128 )
        {
          v21 = v39 + 128;
        }
        v16 = v39;
        v77 = v39;
        v15 = MiMapPageInHyperSpaceWorker(v83, &v91, 0x80000000LL);
        v75 = v15;
        v18 = v15 + (v85 & 0xFFF) - 8;
        v24 = v73;
        v22 = v73 - 8;
      }
LABEL_23:
      v23 = v90;
      v18 += 8LL;
      v22 += 8LL;
    }
    while ( v22 < v19 );
  }
  v25 = v91;
LABEL_25:
  if ( v15 )
    MiUnmapPageInHyperSpaceWorker(v15, v25, 0x80000000LL);
  v26 = v21;
  if ( v22 <= v21 )
    v26 = v22;
  v27 = (__int64)(v26 - v16) >> 3;
  if ( v90 != 3 && (v22 > v21 || v9 < v16) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((__int64)(v22 - v9) >> 3) + 48, 0x65576D4Du);
    v79 = PoolWithTag;
    if ( PoolWithTag )
    {
      v47 = v87;
      v85 = (unsigned __int64)(PoolWithTag + 48);
      v48 = (unsigned __int64 *)(PoolWithTag + 48);
      v76 = v87;
      v49 = 1;
      v50 = a1[5] & 0xFFFFFFFFFLL;
      v90 = 1;
      v74 = MiMapPageInHyperSpaceWorker(v50, &v91, 0x80000000LL);
      v51 = v74;
      v52 = v74 + (v9 & 0xFFF);
      if ( v9 < v22 )
      {
        while ( v9 >= v21 || v9 < v16 )
        {
          if ( v49 != 3 || (__int64)(((char *)v48 - v79 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
          {
            v53 = MI_READ_PTE_LOCK_FREE(v52);
            if ( (v53 & 0xC01) == 0x800 )
            {
              v55 = v53;
              if ( qword_14043B180 )
              {
                if ( (v53 & 0x10) != 0 )
                  v55 = v53 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v55 = v53 & ~qword_14043B180;
              }
              v56 = 6 * ((v55 >> 12) & 0xFFFFFFFFFLL);
              if ( (*(_QWORD *)(48 * ((v55 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
                goto LABEL_97;
              v57 = 48 * ((v55 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v82 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v82, v56, v54);
                while ( *(__int64 *)(v57 + 24) < 0 );
              }
              if ( v53 != MI_READ_PTE_LOCK_FREE(v52) )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v47 = v76;
                goto LABEL_97;
              }
              if ( (*(_BYTE *)(v57 + 34) & 0x10) != 0
                && !*(_WORD *)(v57 + 32)
                && v81 == *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v57 + 40) >> 40) & 0x3FFLL)) )
              {
                if ( v51 )
                {
                  MiUnmapPageInHyperSpaceWorker(v51, 2u, 0x80000000LL);
                  v90 = MiReferencePageForModifiedWrite(v57);
                  v74 = MiMapPageInHyperSpaceWorker(v83, 0LL, 0x80000000LL);
                  v52 = v74 + (v52 & 0xFFF);
                  v51 = v74;
                  v58 = v90;
                }
                else
                {
                  v58 = MiReferencePageForModifiedWrite(v57);
                  v51 = v74;
                  v90 = v58;
                }
                if ( v58 )
                {
                  if ( qword_14043B180 )
                  {
                    if ( (v53 & 0x10) != 0 )
                      v53 &= ~0x10uLL;
                    else
                      v53 &= ~qword_14043B180;
                  }
                  *v48 = (v53 >> 12) & 0xFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v47 = v76;
                  goto LABEL_96;
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          v59 = v91;
          if ( v51 )
          {
            MiUnmapPageInHyperSpaceWorker(v51, v91, 0x80000000LL);
            v51 = 0LL;
          }
          if ( v9 >= v16 )
            goto LABEL_99;
          v61 = ((char *)v48 - v79 - 48) >> 3;
          v84 = v61;
          if ( v61 )
          {
            v68 = v85;
            if ( (unsigned __int64)v48 > v85 )
            {
              do
              {
                v69 = *--v48;
                v70 = 48 * v69 - 0x58000000000LL;
                v71 = MiLockPageInline(v70);
                MiWriteCompletePfn(v70, 1);
                _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v71 < 2u )
                {
                  v72 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v72->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v72);
                }
                __writecr8(v71);
              }
              while ( (unsigned __int64)v48 > v68 );
              v16 = v77;
              v61 = v84;
            }
            MiReleaseWriteInProgressCharges(v81, v61, 1);
          }
          v47 = v87;
          v9 = v16;
          v76 = v87;
          v74 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v91, 0x80000000LL);
          v51 = v74;
          v52 = v74 + (v16 & 0xFFF);
LABEL_97:
          v49 = v90;
          if ( v9 >= v22 )
            goto LABEL_98;
        }
        v60 = *v47++;
        v76 = v47;
        *v48 = v60;
LABEL_96:
        v52 += 8LL;
        v9 += 8LL;
        ++v48;
        goto LABEL_97;
      }
LABEL_98:
      v59 = v91;
LABEL_99:
      if ( v51 )
        MiUnmapPageInHyperSpaceWorker(v51, v59, 0x80000000LL);
      v4 = (unsigned __int64 *)v79;
      v27 = ((char *)v48 - v79 - 48) >> 3;
    }
  }
  v28 = v27 << 12;
  *v4 = 0LL;
  v4[4] = 0LL;
  *((_WORD *)v4 + 4) = 8 * ((v28 >> 12) + 6);
  *((_WORD *)v4 + 5) = 2;
  result = v4;
  v4[5] = (unsigned int)v28;
  return result;
}
