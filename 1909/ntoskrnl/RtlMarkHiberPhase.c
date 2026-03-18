/*
 * XREFs of RtlMarkHiberPhase @ 0x140317FCC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14059D210 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfn @ 0x140124DA0 (MiVaToPfn.c)
 *     PopSetRange @ 0x14016005C (PopSetRange.c)
 *     KeAddTriageDumpDataBlock @ 0x14019A3D0 (KeAddTriageDumpDataBlock.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiSetNonPagedPoolNoSteal @ 0x1402CF3B8 (MiSetNonPagedPoolNoSteal.c)
 *     PopSetBootPhaseRange @ 0x14059B358 (PopSetBootPhaseRange.c)
 */

unsigned __int64 RtlMarkHiberPhase()
{
  unsigned int v0; // eax
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 v4; // r9
  ULONG_PTR v5; // r8
  __int64 v6; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v8; // rax
  char v9; // r8
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r15
  __int64 v22; // r12
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rcx
  __int64 v31; // r9
  unsigned __int64 v32; // r11
  ULONG_PTR v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  char v37; // r8
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // eax
  unsigned __int64 v48; // rcx
  ULONG_PTR v49; // r15
  unsigned __int64 result; // rax
  ULONG *k; // r9
  __int64 v52; // rsi
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rdi
  char *v55; // rcx
  int v56; // r10d
  unsigned int *v57; // rax
  unsigned int v58; // ebx
  __int64 i; // r8
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rsi
  unsigned __int64 v63; // rbx
  unsigned __int64 v64; // rdi
  ULONG *v65; // rcx
  int v66; // r10d
  unsigned int *v67; // rax
  unsigned int v68; // ebx
  ULONG **j; // r8
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rsi
  unsigned __int64 v73; // rbx
  unsigned __int64 v74; // rdi
  ULONG *v75; // rdx
  void *v76; // rcx
  int v77; // r10d
  unsigned int *v78; // rax
  unsigned int v79; // ebx
  unsigned __int64 v80; // r8
  __int64 v81; // rax
  unsigned __int64 v82; // r13
  unsigned __int64 v83; // rbx
  unsigned __int64 v84; // rcx
  __int64 v85; // r9
  ULONG_PTR v86; // r8
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  char v90; // r8
  unsigned __int64 v91; // r10
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // r8
  unsigned __int64 v96; // r10
  unsigned __int64 v97; // r8
  __int64 v98; // rax
  __int64 v99; // r8
  int v100; // eax
  unsigned __int64 v101; // rsi
  unsigned __int64 v102; // r15
  __int64 v103; // r12
  __int64 v104; // rsi
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // r13
  unsigned __int64 v107; // rsi
  unsigned __int64 v108; // rbx
  unsigned __int64 v109; // rdx
  __int64 v110; // r9
  ULONG_PTR v111; // r8
  __int64 v112; // rcx
  unsigned __int64 v113; // rax
  __int64 v114; // rax
  char v115; // r8
  unsigned __int64 v116; // rdx
  volatile signed __int64 *v117; // r9
  unsigned __int64 v118; // r10
  unsigned __int64 v119; // r11
  signed __int64 v120; // rdx
  unsigned __int64 v121; // r8
  __int64 v122; // rax
  __int64 v123; // r8
  bool v124; // zf
  signed __int64 v125; // rax
  unsigned __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // r8
  int v129; // eax
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // [rsp+30h] [rbp-D0h]
  unsigned __int64 m; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v133; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v134; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v135; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v136; // [rsp+48h] [rbp-B8h]
  __int64 v137; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3[17]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v139[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v140; // [rsp+E0h] [rbp-20h]
  _DWORD v141[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD *v142; // [rsp+F0h] [rbp-10h]
  _DWORD v143[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v144; // [rsp+100h] [rbp+0h]
  unsigned __int64 v145; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v146; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v147; // [rsp+160h] [rbp+60h] BYREF
  __int64 v148; // [rsp+168h] [rbp+68h] BYREF

  if ( (KiBugCheckActive & 3) == 0 )
  {
    BugCheckParameter3[0] = qword_140443000;
    if ( !qword_140443000 )
      goto LABEL_118;
    v0 = *(_DWORD *)(qword_140443000 + 184);
    if ( v0 == 8 )
    {
      v1 = (unsigned __int64)XpressHashFunction >> 12;
      v133 = (unsigned __int64)XpressHashFunction >> 12;
      v131 = (unsigned __int64)"ta" >> 12;
      if ( (unsigned __int64)XpressHashFunction >> 12 < (unsigned __int64)"ta" >> 12 )
      {
        do
        {
          v2 = 0LL;
          memset(&BugCheckParameter3[5], 0, 0x20uLL);
          if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v1 << 12) )
          {
            v3 = MiVaToPfn(v1 << 12);
          }
          else
          {
            v4 = 4LL;
            BugCheckParameter3[5] = ((8 * v1) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            BugCheckParameter3[6] = ((BugCheckParameter3[5] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            BugCheckParameter3[7] = ((BugCheckParameter3[6] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            BugCheckParameter3[8] = ((BugCheckParameter3[7] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            do
            {
              v5 = BugCheckParameter3[v4-- + 4];
              v6 = *(_QWORD *)v5;
              if ( v5 >= 0xFFFFF6FB7DBED000uLL
                && v5 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
              {
                if ( (v6 & 1) == 0 )
                  goto LABEL_55;
                if ( (v6 & 0x20) == 0 || (v6 & 0x42) == 0 )
                {
                  DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                  if ( DeepFreezeStartTime )
                  {
                    v8 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v5 >> 3) & 0x1FF));
                    v9 = v6 | 0x20;
                    if ( (v8 & 0x20) == 0 )
                      v9 = v6;
                    LOBYTE(v6) = v9;
                    if ( (v8 & 0x42) != 0 )
                      LOBYTE(v6) = v9 | 0x42;
                  }
                }
              }
              if ( (v6 & 1) == 0 )
                goto LABEL_55;
            }
            while ( v4 != 1 );
            v10 = BugCheckParameter3[5];
            v11 = *(_QWORD *)BugCheckParameter3[5];
            if ( BugCheckParameter3[5] >= 0xFFFFF6FB7DBED000uLL
              && BugCheckParameter3[5] <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0 )
            {
              if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
                || (v11 & 1) == 0
                || (v11 & 0x20) != 0 && (v11 & 0x42) != 0 )
              {
                v10 = BugCheckParameter3[5];
              }
              else
              {
                v10 = BugCheckParameter3[5];
                v12 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( v12 )
                {
                  v13 = *(_QWORD *)(v12 + 8 * ((BugCheckParameter3[5] >> 3) & 0x1FF));
                  v14 = v11 | 0x20;
                  if ( (v13 & 0x20) == 0 )
                    v14 = *(_QWORD *)BugCheckParameter3[5];
                  v11 = v14;
                  if ( (v13 & 0x42) != 0 )
                    v11 = v14 | 0x42;
                }
              }
            }
            v145 = v11;
            if ( (v11 & 1) == 0 )
            {
LABEL_55:
              v19 = 0;
              goto LABEL_56;
            }
            if ( v1 << 12 >= 0xFFFF800000000000uLL
              && *((_BYTE *)&MiState[1488] + (((unsigned int)(v1 >> 20) >> 7) & 0x1FF)) == 5 )
            {
              MiSetNonPagedPoolNoSteal(v10);
              v11 = MI_READ_PTE_LOCK_FREE(v15);
              v145 = v11;
            }
            if ( (unsigned __int64)&v145 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v145 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v11 & 1) != 0
              && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
            {
              v16 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( v16 )
              {
                v17 = *(_QWORD *)(v16 + 8 * (((unsigned __int64)&v145 >> 3) & 0x1FF));
                v18 = v11 | 0x20;
                if ( (v17 & 0x20) == 0 )
                  v18 = v11;
                v11 = v18;
                if ( (v17 & 0x42) != 0 )
                  v11 = v18 | 0x42;
              }
            }
            v3 = (v11 >> 12) & 0xFFFFFFFFFLL;
          }
          v19 = 1;
          v148 = v3 << 12;
          v2 = v3 << 12;
LABEL_56:
          v20 = 0LL;
          v21 = v1 + 1;
          v22 = 1LL;
          if ( v19 )
            v20 = v2;
          v23 = (unsigned __int64)"ta" >> 12;
          v24 = v20 >> 12;
          v136 = v24;
          if ( v21 < v131 )
          {
            v25 = v24 - v1;
            v26 = v1 << 12;
            v27 = v25;
            do
            {
              v28 = 0LL;
              v29 = v26 + (v22 << 12);
              memset(&BugCheckParameter3[9], 0, 0x20uLL);
              if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v29) )
              {
                v30 = MiVaToPfn(v26 + (v22 << 12));
              }
              else
              {
                v31 = 4LL;
                BugCheckParameter3[9] = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                BugCheckParameter3[10] = ((BugCheckParameter3[9] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                BugCheckParameter3[11] = ((BugCheckParameter3[10] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v32 = 0xFFFFF6FB7DBED7F8uLL;
                BugCheckParameter3[12] = ((BugCheckParameter3[11] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                do
                {
                  v33 = BugCheckParameter3[v31-- + 8];
                  v34 = *(_QWORD *)v33;
                  if ( v33 >= 0xFFFFF6FB7DBED000uLL
                    && v33 <= 0xFFFFF6FB7DBED7F8uLL
                    && (MiFlags & 0xC00000) != 0
                    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                    && (v34 & 1) != 0
                    && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
                  {
                    v35 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                    if ( v35 )
                    {
                      v36 = *(_QWORD *)(v35 + 8 * ((v33 >> 3) & 0x1FF));
                      v37 = v34 | 0x20;
                      if ( (v36 & 0x20) == 0 )
                        v37 = v34;
                      LOBYTE(v34) = v37;
                      if ( (v36 & 0x42) != 0 )
                        LOBYTE(v34) = v37 | 0x42;
                    }
                  }
                  if ( (v34 & 1) == 0 )
                    goto LABEL_108;
                }
                while ( v31 != 1 );
                v38 = BugCheckParameter3[9];
                v39 = *(_QWORD *)BugCheckParameter3[9];
                if ( BugCheckParameter3[9] >= 0xFFFFF6FB7DBED000uLL
                  && BugCheckParameter3[9] <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
                    || (v39 & 1) == 0
                    || (v39 & 0x20) != 0 && (v39 & 0x42) != 0 )
                  {
                    v38 = BugCheckParameter3[9];
                  }
                  else
                  {
                    v38 = BugCheckParameter3[9];
                    v40 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                    if ( v40 )
                    {
                      v41 = *(_QWORD *)(v40 + 8 * ((BugCheckParameter3[9] >> 3) & 0x1FF));
                      v42 = v39 | 0x20;
                      if ( (v41 & 0x20) == 0 )
                        v42 = *(_QWORD *)BugCheckParameter3[9];
                      v39 = v42;
                      if ( (v41 & 0x42) != 0 )
                        v39 = v42 | 0x42;
                    }
                  }
                }
                v146 = v39;
                if ( (v39 & 1) == 0 )
                {
LABEL_108:
                  v47 = 0;
                  goto LABEL_109;
                }
                if ( v29 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[1488] + ((v29 >> 39) & 0x1FF)) == 5 )
                {
                  MiSetNonPagedPoolNoSteal(v38);
                  v39 = MI_READ_PTE_LOCK_FREE(v43);
                  v146 = v39;
                }
                if ( (unsigned __int64)&v146 >= 0xFFFFF6FB7DBED000uLL
                  && (unsigned __int64)&v146 <= v32
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v39 & 1) != 0
                  && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
                {
                  v44 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                  if ( v44 )
                  {
                    v45 = *(_QWORD *)(v44 + 8 * (((unsigned __int64)&v146 >> 3) & 0x1FF));
                    v46 = v39 | 0x20;
                    if ( (v45 & 0x20) == 0 )
                      v46 = v39;
                    v39 = v46;
                    if ( (v45 & 0x42) != 0 )
                      v39 = v46 | 0x42;
                  }
                }
                v30 = (v39 >> 12) & 0xFFFFFFFFFLL;
              }
              v47 = 1;
              v148 = v30 << 12;
              v28 = v30 << 12;
LABEL_109:
              v48 = 0LL;
              if ( v47 )
                v48 = v28;
              v23 = (unsigned __int64)"ta" >> 12;
              if ( v27 + v21 != v48 >> 12 )
                break;
              ++v22;
              ++v21;
            }
            while ( v21 < v131 );
            v24 = v136;
            v1 = v133;
          }
          v49 = BugCheckParameter3[0];
          if ( *(_BYTE *)(BugCheckParameter3[0] + 28) )
          {
            IoAddTriageDumpDataBlock(
              BugCheckParameter3[0] & 0xFFFFF000,
              (PVOID)(((BugCheckParameter3[0] & 0xFFF) + 4551) & 0xFFFFF000));
            v52 = (unsigned int)IopNumTriageDumpDataBlocks;
            v139[0] = IopNumTriageDumpDataBlocks;
            v139[1] = 256;
            v53 = (((unsigned __int64)&PopHiberInfo & 0xFFF) + 4311) >> 12;
            v54 = (unsigned __int64)&PopHiberInfo & 0xFFFFFFFFFFFFF000uLL;
            v140 = IopTriageDumpDataBlocks;
            if ( v53 )
            {
              while ( v54 >= 0x10000 && MmIsAddressValidEx(v54) )
              {
                v54 += 4096LL;
                if ( !--v53 )
                  goto LABEL_123;
              }
            }
            else
            {
LABEL_123:
              k = &PopHiberInfo;
              v55 = &PopShutdownPowerOffPolicy;
              v56 = 0;
              v57 = v139;
              do
              {
                v58 = 0;
                for ( i = *((_QWORD *)v57 + 1); v58 < *v57; i += 16LL )
                {
                  v60 = *(_QWORD *)(i + 8);
                  if ( (unsigned __int64)k < v60 && (unsigned __int64)v55 > *(_QWORD *)i )
                  {
                    if ( (unsigned __int64)k < *(_QWORD *)i )
                    {
                      if ( (unsigned __int64)v55 <= v60 )
                        v55 = *(char **)i;
                    }
                    else
                    {
                      if ( (unsigned __int64)v55 <= v60 )
                        goto LABEL_136;
                      k = *(ULONG **)(i + 8);
                    }
                  }
                  ++v58;
                }
                ++v56;
                v57 += 4;
              }
              while ( !v56 );
              if ( (unsigned int)v52 < 0x100 )
              {
                v61 = 2 * v52;
                LODWORD(v52) = v52 + 1;
                IopTriageDumpDataBlocks[v61] = k;
                IopTriageDumpDataBlocks[v61 + 1] = v55;
              }
            }
LABEL_136:
            IopNumTriageDumpDataBlocks = v52;
            if ( IopTriageDumpDataArray )
              KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopHiberInfo, (PVOID)0xD8, (SIZE_T)k);
            v62 = (unsigned int)IopNumTriageDumpDataBlocks;
            v141[0] = IopNumTriageDumpDataBlocks;
            v141[1] = 256;
            v142 = IopTriageDumpDataBlocks;
            v63 = (((unsigned __int64)&PopAction & 0xFFF) + 4543) >> 12;
            v64 = (unsigned __int64)&PopAction & 0xFFFFFFFFFFFFF000uLL;
            if ( v63 )
            {
              while ( v64 >= 0x10000 && MmIsAddressValidEx(v64) )
              {
                v64 += 4096LL;
                if ( !--v63 )
                  goto LABEL_142;
              }
            }
            else
            {
LABEL_142:
              k = &PopAction;
              v65 = &PopCB;
              v66 = 0;
              v67 = v141;
              do
              {
                v68 = 0;
                for ( j = (ULONG **)*((_QWORD *)v67 + 1); v68 < *v67; j += 2 )
                {
                  v70 = (unsigned __int64)j[1];
                  if ( (unsigned __int64)k < v70 && v65 > *j )
                  {
                    if ( k < *j )
                    {
                      if ( (unsigned __int64)v65 <= v70 )
                        v65 = *j;
                    }
                    else
                    {
                      if ( (unsigned __int64)v65 <= v70 )
                        goto LABEL_155;
                      k = j[1];
                    }
                  }
                  ++v68;
                }
                ++v66;
                v67 += 4;
              }
              while ( !v66 );
              if ( (unsigned int)v62 < 0x100 )
              {
                v71 = 2 * v62;
                LODWORD(v62) = v62 + 1;
                IopTriageDumpDataBlocks[v71] = k;
                IopTriageDumpDataBlocks[v71 + 1] = v65;
              }
            }
LABEL_155:
            IopNumTriageDumpDataBlocks = v62;
            if ( IopTriageDumpDataArray )
              KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopAction, (PVOID)0x1C0, (SIZE_T)k);
            if ( *(_QWORD *)&qword_140442FF8 )
              IoAddTriageDumpDataBlock(qword_140442FF8, (PVOID)0x1D8);
            if ( qword_140443000 )
              IoAddTriageDumpDataBlock(qword_140443000, (PVOID)0x1C8);
            v72 = (unsigned int)IopNumTriageDumpDataBlocks;
            v143[0] = IopNumTriageDumpDataBlocks;
            v143[1] = 256;
            v144 = IopTriageDumpDataBlocks;
            v73 = (((unsigned __int64)&PopCB & 0xFFF) + 4599) >> 12;
            v74 = (unsigned __int64)&PopCB & 0xFFFFFFFFFFFFF000uLL;
            if ( v73 )
            {
              while ( v74 >= 0x10000 && MmIsAddressValidEx(v74) )
              {
                v74 += 4096LL;
                if ( !--v73 )
                  goto LABEL_165;
              }
            }
            else
            {
LABEL_165:
              v75 = &PopCB;
              v76 = &unk_140443378;
              v77 = 0;
              v78 = v143;
              do
              {
                v79 = 0;
                for ( k = (ULONG *)*((_QWORD *)v78 + 1); v79 < *v78; k += 4 )
                {
                  v80 = *((_QWORD *)k + 1);
                  if ( (unsigned __int64)v75 < v80 && (unsigned __int64)v76 > *(_QWORD *)k )
                  {
                    if ( (unsigned __int64)v75 < *(_QWORD *)k )
                    {
                      if ( (unsigned __int64)v76 <= v80 )
                        v76 = *(void **)k;
                    }
                    else
                    {
                      if ( (unsigned __int64)v76 <= v80 )
                        goto LABEL_178;
                      v75 = (ULONG *)*((_QWORD *)k + 1);
                    }
                  }
                  ++v79;
                }
                ++v77;
                v78 += 4;
              }
              while ( !v77 );
              if ( (unsigned int)v72 < 0x100 )
              {
                v81 = 2 * v72;
                LODWORD(v72) = v72 + 1;
                IopTriageDumpDataBlocks[v81] = v75;
                IopTriageDumpDataBlocks[v81 + 1] = v76;
              }
            }
LABEL_178:
            IopNumTriageDumpDataBlocks = v72;
            if ( IopTriageDumpDataArray )
              KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopCB, (PVOID)0x1F8, (SIZE_T)k);
            KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, v49, 0LL);
          }
          PopSetBootPhaseRange(BugCheckParameter3[0], v24, v22);
          v1 += v22;
          v133 = v1;
        }
        while ( v1 < v23 );
      }
    }
    else if ( v0 != 9 )
    {
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v0, 0LL);
    }
  }
  result = (unsigned int)KiBugCheckActive;
  if ( (KiBugCheckActive & 3) == 0 )
  {
    v135 = qword_140443000;
    if ( !qword_140443000 )
LABEL_118:
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    result = *(unsigned int *)(qword_140443000 + 184);
    if ( (_DWORD)result == 8 )
    {
      v82 = (unsigned __int64)XpressHighBitIndexTable >> 12;
      result = (unsigned __int64)&unk_14039F20F >> 12;
      v134 = (unsigned __int64)XpressHighBitIndexTable >> 12;
      for ( m = (unsigned __int64)&unk_14039F20F >> 12; v82 < m; v134 = v82 )
      {
        v83 = 0LL;
        memset(&BugCheckParameter3[13], 0, 0x20uLL);
        if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v82 << 12) )
        {
          v84 = MiVaToPfn(v82 << 12);
        }
        else
        {
          v85 = 4LL;
          BugCheckParameter3[13] = ((8 * v82) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          BugCheckParameter3[14] = ((BugCheckParameter3[13] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          BugCheckParameter3[15] = ((BugCheckParameter3[14] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          BugCheckParameter3[16] = ((BugCheckParameter3[15] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          do
          {
            v86 = BugCheckParameter3[v85-- + 12];
            v87 = *(_QWORD *)v86;
            if ( v86 >= 0xFFFFF6FB7DBED000uLL
              && v86 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
            {
              if ( (v87 & 1) == 0 )
                goto LABEL_233;
              if ( (v87 & 0x20) == 0 || (v87 & 0x42) == 0 )
              {
                v88 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( v88 )
                {
                  v89 = *(_QWORD *)(v88 + 8 * ((v86 >> 3) & 0x1FF));
                  v90 = v87 | 0x20;
                  if ( (v89 & 0x20) == 0 )
                    v90 = v87;
                  LOBYTE(v87) = v90;
                  if ( (v89 & 0x42) != 0 )
                    LOBYTE(v87) = v90 | 0x42;
                }
              }
            }
            if ( (v87 & 1) == 0 )
              goto LABEL_233;
          }
          while ( v85 != 1 );
          v91 = BugCheckParameter3[13];
          v92 = *(_QWORD *)BugCheckParameter3[13];
          if ( BugCheckParameter3[13] >= 0xFFFFF6FB7DBED000uLL
            && BugCheckParameter3[13] <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
              || (v92 & 1) == 0
              || (v92 & 0x20) != 0 && (v92 & 0x42) != 0 )
            {
              v91 = BugCheckParameter3[13];
            }
            else
            {
              v91 = BugCheckParameter3[13];
              v93 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( v93 )
              {
                v94 = *(_QWORD *)(v93 + 8 * ((BugCheckParameter3[13] >> 3) & 0x1FF));
                v95 = v92 | 0x20;
                if ( (v94 & 0x20) == 0 )
                  v95 = *(_QWORD *)BugCheckParameter3[13];
                v92 = v95;
                if ( (v94 & 0x42) != 0 )
                  v92 = v95 | 0x42;
              }
            }
          }
          v147 = v92;
          if ( (v92 & 1) == 0 )
          {
LABEL_233:
            v100 = 0;
            goto LABEL_234;
          }
          if ( v82 << 12 >= 0xFFFF800000000000uLL
            && *((_BYTE *)&MiState[1488] + (((unsigned int)(v82 >> 20) >> 7) & 0x1FF)) == 5 )
          {
            MiSetNonPagedPoolNoSteal(v91);
            v92 = MI_READ_PTE_LOCK_FREE(v96);
            v147 = v92;
          }
          if ( (unsigned __int64)&v147 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v147 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v92 & 1) != 0
            && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
          {
            v97 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v97 )
            {
              v98 = *(_QWORD *)(v97 + 8 * (((unsigned __int64)&v147 >> 3) & 0x1FF));
              v99 = v92 | 0x20;
              if ( (v98 & 0x20) == 0 )
                v99 = v92;
              v92 = v99;
              if ( (v98 & 0x42) != 0 )
                v92 = v99 | 0x42;
            }
          }
          v84 = (v92 >> 12) & 0xFFFFFFFFFLL;
        }
        v100 = 1;
        v148 = v84 << 12;
        v83 = v84 << 12;
LABEL_234:
        v101 = 0LL;
        v102 = v82 + 1;
        v103 = 1LL;
        if ( v100 )
          v101 = v83;
        v104 = v101 >> 12;
        v137 = v104;
        if ( v102 < m )
        {
          v105 = v104 - v82;
          v106 = v82 << 12;
          v107 = v105;
          do
          {
            v108 = 0LL;
            memset(&BugCheckParameter3[1], 0, 0x20uLL);
            if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v106 + (v103 << 12)) )
            {
              v109 = MiVaToPfn(v106 + (v103 << 12));
            }
            else
            {
              v110 = 4LL;
              BugCheckParameter3[1] = (((v106 + (v103 << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              BugCheckParameter3[2] = ((BugCheckParameter3[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              BugCheckParameter3[3] = ((BugCheckParameter3[2] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              BugCheckParameter3[4] = ((BugCheckParameter3[3] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              do
              {
                v111 = BugCheckParameter3[v110--];
                v112 = *(_QWORD *)v111;
                if ( v111 >= 0xFFFFF6FB7DBED000uLL
                  && v111 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
                {
                  if ( (v112 & 1) == 0 )
                    goto LABEL_290;
                  if ( (v112 & 0x20) == 0 || (v112 & 0x42) == 0 )
                  {
                    v113 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                    if ( v113 )
                    {
                      v114 = *(_QWORD *)(v113 + 8 * ((v111 >> 3) & 0x1FF));
                      v115 = v112 | 0x20;
                      if ( (v114 & 0x20) == 0 )
                        v115 = v112;
                      LOBYTE(v112) = v115;
                      if ( (v114 & 0x42) != 0 )
                        LOBYTE(v112) = v115 | 0x42;
                    }
                  }
                }
                if ( (v112 & 1) == 0 )
                  goto LABEL_290;
              }
              while ( v110 != 1 );
              v148 = MI_READ_PTE_LOCK_FREE(BugCheckParameter3[1]);
              if ( (v148 & 1) == 0 )
              {
LABEL_290:
                v129 = 0;
                goto LABEL_291;
              }
              if ( (unsigned int)MiGetSystemRegionType(v106 + (v103 << 12)) == 5 )
              {
                v120 = *v117;
                if ( (unsigned __int64)v117 >= v119 && (unsigned __int64)v117 <= v118 && (MiFlags & 0xC00000) != 0 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
                    || (v120 & 1) == 0
                    || (v120 & 0x20) != 0 && (v120 & 0x42) != 0 )
                  {
                    v117 = (volatile signed __int64 *)BugCheckParameter3[1];
                  }
                  else
                  {
                    v117 = (volatile signed __int64 *)BugCheckParameter3[1];
                    v121 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                    if ( v121 )
                    {
                      v122 = *(_QWORD *)(v121 + 8 * ((BugCheckParameter3[1] >> 3) & 0x1FF));
                      v123 = v120 | 0x20;
                      if ( (v122 & 0x20) == 0 )
                        v123 = v120;
                      v120 = v123;
                      if ( (v122 & 0x42) != 0 )
                        v120 = v123 | 0x42;
                    }
                  }
                }
                if ( (v120 & 0x200) == 0 )
                {
                  while ( 1 )
                  {
                    v125 = _InterlockedCompareExchange64(v117, v120 | 0x220, v120);
                    v124 = v120 == v125;
                    v120 = v125;
                    if ( v124 || (v125 & 0x200) != 0 )
                      break;
                    v117 = (volatile signed __int64 *)BugCheckParameter3[1];
                  }
                  v117 = (volatile signed __int64 *)BugCheckParameter3[1];
                }
                v116 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v117);
                v148 = v116;
              }
              if ( (unsigned __int64)&v148 >= v119
                && (unsigned __int64)&v148 <= v118
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v116 & 1) != 0
                && ((v116 & 0x20) == 0 || (v116 & 0x42) == 0) )
              {
                v126 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( v126 )
                {
                  v127 = *(_QWORD *)(v126 + 8 * (((unsigned __int64)&v148 >> 3) & 0x1FF));
                  v128 = v116 | 0x20;
                  if ( (v127 & 0x20) == 0 )
                    v128 = v116;
                  v116 = v128;
                  if ( (v127 & 0x42) != 0 )
                    v116 = v128 | 0x42;
                }
              }
              v109 = (v116 >> 12) & 0xFFFFFFFFFLL;
            }
            v129 = 1;
            v148 = v109 << 12;
            v108 = v109 << 12;
LABEL_291:
            v130 = 0LL;
            if ( v129 )
              v130 = v108;
            if ( v107 + v102 != v130 >> 12 )
              break;
            ++v103;
            ++v102;
          }
          while ( v102 < m );
          v104 = v137;
          v82 = v134;
        }
        result = PopSetRange(v135, 0x10000, v104, v103, 0x73727058u);
        v82 += v103;
      }
    }
    else if ( (_DWORD)result != 9 )
    {
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, (unsigned int)result, 0LL);
    }
  }
  return result;
}
