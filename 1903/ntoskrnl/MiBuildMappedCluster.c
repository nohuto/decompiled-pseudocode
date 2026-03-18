/*
 * XREFs of MiBuildMappedCluster @ 0x1400A2B5C
 * Callers:
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x1400A469C (MiReferencePageForModifiedWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteCompletePfn @ 0x1400DE110 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400DFA84 (MiReleaseWriteInProgressCharges.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiBuildMappedCluster(_QWORD *a1, unsigned __int64 *a2, int a3)
{
  int v3; // r12d
  unsigned __int64 *v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r9
  int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // r12
  unsigned __int8 v26; // bl
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rsi
  unsigned __int64 *result; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // r9
  int v34; // r10d
  unsigned __int64 v35; // rax
  ULONG_PTR v36; // rsi
  __int16 v37; // r10
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r10
  char *PoolWithTag; // rax
  unsigned __int64 *v44; // r13
  unsigned __int64 *v45; // rsi
  unsigned __int64 *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // r12
  __int64 i; // r15
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rax
  ULONG_PTR v54; // r14
  __int16 v55; // r9
  int v56; // eax
  unsigned __int64 v57; // rax
  unsigned __int8 v58; // bl
  unsigned __int64 v59; // r11
  __int64 v60; // rsi
  unsigned __int64 v61; // r15
  ULONG_PTR v62; // rbx
  unsigned __int8 v63; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v65; // r14
  ULONG_PTR v66; // rbx
  unsigned __int8 v67; // r15
  struct _KPRCB *v68; // rcx
  unsigned __int64 v69; // [rsp+28h] [rbp-59h]
  __int64 v70; // [rsp+30h] [rbp-51h]
  unsigned __int64 v71; // [rsp+38h] [rbp-49h]
  unsigned __int64 v72; // [rsp+40h] [rbp-41h]
  unsigned __int64 v73; // [rsp+48h] [rbp-39h]
  unsigned __int64 v74; // [rsp+50h] [rbp-31h]
  unsigned __int64 *v75; // [rsp+58h] [rbp-29h]
  __int64 v76; // [rsp+60h] [rbp-21h]
  unsigned __int64 v77; // [rsp+68h] [rbp-19h]
  int v78; // [rsp+70h] [rbp-11h] BYREF
  int v79; // [rsp+74h] [rbp-Dh] BYREF
  unsigned __int64 v80; // [rsp+78h] [rbp-9h]
  unsigned __int64 *v81; // [rsp+80h] [rbp-1h]
  char *v82; // [rsp+88h] [rbp+7h]
  unsigned __int64 v83; // [rsp+90h] [rbp+Fh]
  unsigned __int64 *v86; // [rsp+F0h] [rbp+6Fh]
  int v88; // [rsp+F8h] [rbp+77h]
  int v89; // [rsp+F8h] [rbp+77h]
  unsigned __int8 v90; // [rsp+100h] [rbp+7Fh] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[5];
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v81 = a2 + 6;
  v75 = a2 + 6;
  v9 = v5 | 0x8000000000000000uLL;
  v83 = (v8 >> 63) + v8;
  v72 = v9;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v74 = v9;
  v76 = *(_QWORD *)(qword_140466188 + 8 * ((v7 >> 40) & 0x3FF));
  if ( qword_140465B00 && (v6 & 0x10) == 0 )
    v6 &= ~qword_140465B00;
  v11 = v6 >> 16;
  if ( v10 < *(_QWORD *)(v11 + 8) )
    v10 = *(_QWORD *)(v11 + 8);
  v12 = v10;
  if ( v10 < v9 - 120 )
    v12 = v9 - 120;
  v80 = v7 & 0xFFFFFFFFFLL;
  v70 = MiMapPageInHyperSpaceWorker(v7 & 0xFFFFFFFFFLL, &v90, 0x80000000);
  LODWORD(v82) = v9;
  v13 = v70 + (v9 & 0xFFF);
  v71 = v9;
  v14 = v9;
  v15 = v9;
  if ( v3 )
    v14 = v10;
  if ( v9 > v14 )
  {
    while ( 1 )
    {
      v13 -= 8LL;
      v40 = MI_READ_PTE_LOCK_FREE(v13);
      if ( (v40 & 0xC01) != 0x800 )
        break;
      if ( qword_140465B00 )
      {
        if ( (v40 & 0x10) != 0 )
          v40 &= ~0x10uLL;
        else
          v40 &= ~qword_140465B00;
      }
      if ( (*(_QWORD *)(48 * ((v40 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
        || (*(_BYTE *)(48 * ((v40 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(48 * ((v40 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32)
        || v76 != *(_QWORD *)(qword_140466188
                            + 8
                            * ((*(_QWORD *)(48 * ((v40 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 40) & 0x3FFLL)) )
      {
        break;
      }
      v9 -= 8LL;
      v59 = v9;
      if ( v9 < v12 )
        v59 = v41;
      v71 = v59;
      if ( v9 <= v42 )
        break;
      v71 = v59;
    }
    v4 = a2;
    v3 = a3;
    v15 = v71;
    v72 = v9;
  }
  v16 = *(unsigned int *)(v11 + 44);
  v17 = ((unsigned __int16)v13 ^ (unsigned __int16)v15) & 0xFFF ^ v13;
  v18 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v19 = *(_QWORD *)(v11 + 8) + 8 * v16;
  if ( v18 > v19 )
    v18 = *(_QWORD *)(v11 + 8) + 8 * v16;
  v77 = v18;
  v20 = v18;
  if ( v18 > v15 + 128 )
    v20 = v15 + 128;
  if ( !v3 )
  {
    v18 = v15 + 8;
    v77 = v15 + 8;
  }
  v73 = v15;
  v21 = v15 + 8;
  if ( v3 )
    v21 = v20;
  v22 = v15;
  v69 = v21;
  v23 = 1;
  v88 = 1;
  if ( v15 < v18 )
  {
    v24 = v74;
    v69 = v21;
    do
    {
      v25 = v75;
      if ( v22 == v24 )
      {
        v19 = v83;
        *v75++ = v83;
      }
      else
      {
        if ( v23 == 3 && (__int64)(((char *)v75 - (char *)v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
          goto LABEL_55;
        v32 = MI_READ_PTE_LOCK_FREE(v17);
        if ( (v32 & 0xC01) != 0x800 )
          goto LABEL_55;
        v35 = v32;
        if ( qword_140465B00 )
        {
          if ( (v32 & 0x10) != 0 )
            v35 = v32 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v35 = v32 & ~qword_140465B00;
        }
        v19 = 6 * ((v35 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * ((v35 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        {
          v24 = v74;
          v17 -= 8LL;
          v22 = v33 - 8;
LABEL_136:
          v23 = v88;
          goto LABEL_23;
        }
        v36 = 48 * ((v35 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v78 = v34;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v78);
          while ( *(__int64 *)(v36 + 24) < 0 );
        }
        if ( v32 != MI_READ_PTE_LOCK_FREE(v17) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v24 = v74;
          v17 -= 8LL;
          v21 = v69;
          v22 -= 8LL;
          goto LABEL_136;
        }
        if ( (*(_BYTE *)(v36 + 34) & 0x10) == 0
          || *(_WORD *)(v36 + 32) != v37
          || v76 != *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v36 + 40) >> 40) & 0x3FFLL)) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v21 = v69;
LABEL_55:
          v27 = v70;
          goto LABEL_56;
        }
        if ( v22 < v69 )
        {
          if ( v38 )
          {
            LOBYTE(v19) = 2;
            MiUnmapPageInHyperSpaceWorker(v38, v19, 0x80000000LL);
            v88 = MiReferencePageForModifiedWrite(v36);
            v27 = MiMapPageInHyperSpaceWorker(v80, 0LL, 0x80000000);
            v23 = v88;
            v17 = v27 + (v17 & 0xFFF);
            v70 = v27;
          }
          else
          {
            v23 = MiReferencePageForModifiedWrite(v36);
            v88 = v23;
            v27 = v70;
          }
          if ( !v23 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v21 = v69;
LABEL_56:
            v26 = v90;
            if ( v27 )
            {
              LOBYTE(v19) = v90;
              MiUnmapPageInHyperSpaceWorker(v27, v19, 0x80000000LL);
              v27 = 0LL;
            }
            v22 = v73;
            v39 = v74;
            if ( v73 >= v74 )
              goto LABEL_25;
            v60 = ((char *)v75 - (char *)v4 - 48) >> 3;
            if ( v60 )
            {
              if ( v75 > v4 + 6 )
              {
                v61 = (unsigned __int64)v81;
                do
                {
                  v62 = 48 * *--v25 - 0x58000000000LL;
                  v63 = MiLockPageInline(v62);
                  MiWriteCompletePfn(v62);
                  _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v63 < 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                  __writecr8(v63);
                }
                while ( (unsigned __int64)v25 > v61 );
                v4 = a2;
                v18 = v77;
                v75 = v25;
              }
              MiReleaseWriteInProgressCharges(v76, v60, 1LL);
              v39 = v74;
            }
            v21 = v69;
            if ( v69 == v71 + 8 )
            {
              v18 = v39 + 8;
              v77 = v39 + 8;
              v21 = v39 + 8;
            }
            else if ( v18 > v39 + 128 )
            {
              v21 = v39 + 128;
            }
            v71 = v39;
            v69 = v21;
            v70 = MiMapPageInHyperSpaceWorker(v80, &v90, 0x80000000);
            v17 = v70 + ((unsigned __int16)v82 & 0xFFF) - 8LL;
            v24 = v74;
            v22 = v74 - 8;
            goto LABEL_136;
          }
          if ( qword_140465B00 )
          {
            if ( (v32 & 0x10) != 0 )
              v32 &= ~0x10uLL;
            else
              v32 &= ~qword_140465B00;
          }
          v22 = v73;
          *v75++ = (v32 >> 12) & 0xFFFFFFFFFLL;
        }
        else
        {
          v23 = v88;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v24 = v74;
        v21 = v69;
      }
LABEL_23:
      v22 += 8LL;
      v17 += 8LL;
      v73 = v22;
    }
    while ( v22 < v18 );
  }
  v26 = v90;
  v27 = v70;
LABEL_25:
  if ( v27 )
  {
    LOBYTE(v19) = v26;
    MiUnmapPageInHyperSpaceWorker(v27, v19, 0x80000000LL);
    v22 = v73;
  }
  if ( v22 <= v69 )
    v21 = v22;
  v28 = (__int64)(v21 - v71) >> 3;
  if ( v88 == 3 )
    goto LABEL_32;
  v29 = v72;
  if ( v22 <= v69 && v72 >= v71 )
    goto LABEL_32;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((__int64)(v22 - v72) >> 3) + 48, 0x65576D4Du);
  v82 = PoolWithTag;
  v44 = (unsigned __int64 *)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_32;
  v45 = (unsigned __int64 *)(PoolWithTag + 48);
  v46 = v81;
  v86 = v81;
  v89 = 1;
  v47 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v90, 0x80000000);
  LOWORD(v49) = v72;
  while ( 2 )
  {
    v50 = v47;
    for ( i = v47 + (v49 & 0xFFF); ; i += 8LL )
    {
      while ( 1 )
      {
        if ( v29 >= v73 )
        {
          v58 = v90;
          goto LABEL_95;
        }
        if ( v29 < v69 && v29 >= v71 )
        {
          v57 = *v46++;
          v86 = v46;
          *v45 = v57;
          goto LABEL_87;
        }
        if ( v89 == 3 && (__int64)(((char *)v45 - (char *)v44 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
          goto LABEL_104;
        v52 = MI_READ_PTE_LOCK_FREE(i);
        if ( (v52 & 0xC01) != 0x800 )
          goto LABEL_104;
        v53 = v52;
        if ( qword_140465B00 )
        {
          if ( (v52 & 0x10) != 0 )
            v53 = v52 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v53 = v52 & ~qword_140465B00;
        }
        v48 = 6 * ((v53 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * ((v53 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
          break;
LABEL_144:
        v46 = v86;
      }
      v54 = 48 * ((v53 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v79 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v79);
        while ( *(__int64 *)(v54 + 24) < 0 );
      }
      if ( v52 != MI_READ_PTE_LOCK_FREE(i) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v29 = v72;
        goto LABEL_144;
      }
      if ( (*(_BYTE *)(v54 + 34) & 0x10) == 0
        || *(_WORD *)(v54 + 32) != v55
        || v76 != *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v54 + 40) >> 40) & 0x3FFLL)) )
      {
        break;
      }
      if ( v50 )
      {
        LOBYTE(v48) = 2;
        MiUnmapPageInHyperSpaceWorker(v50, v48, 0x80000000LL);
        v89 = MiReferencePageForModifiedWrite(v54);
        v50 = MiMapPageInHyperSpaceWorker(v80, 0LL, 0x80000000);
        i = v50 + (i & 0xFFF);
        v56 = v89;
      }
      else
      {
        v56 = MiReferencePageForModifiedWrite(v54);
        v89 = v56;
      }
      if ( !v56 )
        break;
      if ( qword_140465B00 )
      {
        if ( (v52 & 0x10) != 0 )
          v52 &= ~0x10uLL;
        else
          v52 &= ~qword_140465B00;
      }
      *v45 = (v52 >> 12) & 0xFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v46 = v86;
      v29 = v72;
LABEL_87:
      v29 += 8LL;
      v72 = v29;
      ++v45;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = v72;
LABEL_104:
    v58 = v90;
    if ( v50 )
    {
      LOBYTE(v48) = v90;
      MiUnmapPageInHyperSpaceWorker(v50, v48, 0x80000000LL);
      v50 = 0LL;
    }
    v49 = v71;
    if ( v29 < v71 )
    {
      v65 = ((char *)v45 - (char *)v44 - 48) >> 3;
      if ( v65 )
      {
        if ( v45 > v44 + 6 )
        {
          do
          {
            v66 = 48 * *--v45 - 0x58000000000LL;
            v67 = MiLockPageInline(v66);
            MiWriteCompletePfn(v66);
            _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v67 < 2u )
            {
              v68 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v68);
            }
            __writecr8(v67);
          }
          while ( v45 > v44 + 6 );
          v44 = (unsigned __int64 *)v82;
          v49 = v71;
        }
        MiReleaseWriteInProgressCharges(v76, v65, 1LL);
      }
      v46 = v81;
      v29 = v49;
      v72 = v49;
      v86 = v81;
      v47 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v90, 0x80000000);
      continue;
    }
    break;
  }
LABEL_95:
  if ( v50 )
  {
    LOBYTE(v48) = v58;
    MiUnmapPageInHyperSpaceWorker(v50, v48, 0x80000000LL);
  }
  v4 = v44;
  v28 = ((char *)v45 - (char *)v44 - 48) >> 3;
LABEL_32:
  v30 = v28 << 12;
  *v4 = 0LL;
  v4[4] = 0LL;
  *((_WORD *)v4 + 4) = 8 * ((v30 >> 12) + 6);
  *((_WORD *)v4 + 5) = 2;
  result = v4;
  v4[5] = (unsigned int)v30;
  return result;
}
