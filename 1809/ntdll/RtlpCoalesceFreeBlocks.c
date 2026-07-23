/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x18001B82C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x18008C1D4 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A4B00 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(_BYTE *BaseAddress, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r10
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  int v11; // edx
  int v13; // edx
  __int64 *v14; // r8
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 *v18; // r14
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r15d
  unsigned int v23; // r10d
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 *v26; // r9
  unsigned int v27; // eax
  __int64 v28; // r13
  char v29; // al
  __int64 v30; // rax
  __int64 *v31; // rax
  int v32; // edx
  __int64 *v33; // r8
  __int64 v34; // r11
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 *v37; // r14
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // r12d
  unsigned int v42; // r10d
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 *v45; // r9
  unsigned int v46; // eax
  __int64 v47; // r15
  char v48; // al
  __int64 *v49; // rax
  __int64 *v50; // r8
  __int64 v51; // r11
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 *v54; // r14
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  __int64 *v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // r15d
  unsigned int v60; // r10d
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 *v63; // r9
  unsigned int v64; // eax
  __int64 v65; // r13
  char v66; // al
  SIZE_T v67; // r14
  SIZE_T v68; // r15
  SIZE_T v69; // rdi
  SIZE_T v70; // r14
  __int64 *v71; // r8
  __int64 v72; // r11
  __int64 v73; // rax
  __int64 v74; // r9
  __int64 *v75; // r14
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rax
  __int64 *v78; // rax
  __int64 v79; // rdx
  unsigned int v80; // r15d
  unsigned int v81; // r10d
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 *v84; // r9
  unsigned int v85; // eax
  __int64 v86; // r13
  char v87; // al
  SIZE_T v88; // r14
  SIZE_T v89; // r12
  SIZE_T v90; // r14
  SIZE_T v91; // r12
  __int64 *v92; // [rsp+30h] [rbp-39h]
  __int64 *v93; // [rsp+30h] [rbp-39h]
  __int64 *v94; // [rsp+30h] [rbp-39h]
  __int64 *v95; // [rsp+30h] [rbp-39h]
  int v96; // [rsp+40h] [rbp-29h]
  int v97; // [rsp+50h] [rbp-19h]
  int v98; // [rsp+60h] [rbp-9h]
  int v99; // [rsp+70h] [rbp+7h]
  __int64 v100; // [rsp+D0h] [rbp+67h]
  __int64 v101; // [rsp+D0h] [rbp+67h]
  __int64 v102; // [rsp+D0h] [rbp+67h]
  __int64 v103; // [rsp+D0h] [rbp+67h]
  unsigned __int16 v104; // [rsp+D8h] [rbp+6Fh]
  unsigned __int16 v105; // [rsp+D8h] [rbp+6Fh]
  unsigned __int16 v106; // [rsp+D8h] [rbp+6Fh]
  unsigned __int16 v107; // [rsp+D8h] [rbp+6Fh]
  char v109; // [rsp+E8h] [rbp+7Fh]

  v109 = a4;
  v5 = a2;
  v6 = 16 * (*((unsigned __int16 *)BaseAddress + 70) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v8 = a2 - v6;
  if ( a2 - v6 == a2
    || ((*(_BYTE *)(v8 + 10) ^ (unsigned __int8)(BaseAddress[138] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
  {
    goto LABEL_3;
  }
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v13 = *(_DWORD *)(v8 + 8) ^ *((_DWORD *)BaseAddress + 34);
    *(_DWORD *)(v8 + 8) = v13;
    if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v8);
  }
  if ( a4 )
  {
    v50 = (__int64 *)(v5 + 16);
    v51 = *(_QWORD *)(v5 + 16);
    v94 = *(__int64 **)(v5 + 24);
    v102 = v51;
    v52 = *v94;
    v53 = *(_QWORD *)(v51 + 8);
    if ( *v94 != v53 || (__int64 *)v52 != v50 )
    {
      RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v50, v53, v52, 0LL);
LABEL_122:
      v109 = 0;
      goto LABEL_13;
    }
    *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v5 + 8);
    v54 = (__int64 *)*((_QWORD *)BaseAddress + 39);
    if ( v54 )
    {
      v55 = *(unsigned __int16 *)(v5 + 8);
      v56 = *((unsigned int *)v54 + 2);
      v106 = *(_WORD *)(v5 + 8);
      while ( v55 >= v56 )
      {
        v57 = (__int64 *)*v54;
        if ( !*v54 )
        {
          LODWORD(v55) = *((_DWORD *)v54 + 2) - 1;
          break;
        }
        v54 = (__int64 *)*v54;
        v56 = *((unsigned int *)v57 + 2);
      }
      v58 = v54[6];
      v59 = v55 - *((_DWORD *)v54 + 6);
      v60 = *((_DWORD *)v54 + 2);
      v61 = 2 * v59;
      if ( !*((_DWORD *)v54 + 3) )
        v61 = v59;
      v62 = (unsigned int)v61;
      v63 = *(__int64 **)(v58 + 8 * v61);
      v64 = v60 - 1;
      --*((_DWORD *)v54 + 4);
      if ( (_DWORD)v55 == v60 - 1 )
        --*((_DWORD *)v54 + 5);
      if ( v63 == v50 )
      {
        v65 = *v50;
        if ( *v54 )
          v64 = v60;
        if ( (unsigned int)v55 >= v64 )
        {
          if ( v65 != v54[4] )
          {
            *(_QWORD *)(v58 + 8 * v62) = v65;
            goto LABEL_109;
          }
          *(_QWORD *)(v58 + 8 * v62) = 0LL;
        }
        else
        {
          if ( v65 != v54[4] )
          {
            v96 = *(_DWORD *)(v65 - 16 + 8);
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v96 = *(_DWORD *)(v65 - 16 + 8) ^ *((_DWORD *)BaseAddress + 34);
              if ( HIBYTE(v96) != ((unsigned __int8)v96 ^ (unsigned __int8)(BYTE1(v96) ^ BYTE2(v96))) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v65 - 16, 0, 0LL, 0LL);
                v51 = v102;
              }
            }
            if ( v106 == (unsigned __int16)v96 )
            {
              *(_QWORD *)(v54[6] + 8 * v62) = v65;
              goto LABEL_109;
            }
          }
          *(_QWORD *)(v54[6] + 8 * v62) = 0LL;
        }
        *(_DWORD *)(v54[5] + 4 * ((unsigned __int64)v59 >> 5)) &= ~(1 << (v59 & 0x1F));
      }
    }
LABEL_109:
    *v94 = v51;
    *(_QWORD *)(v51 + 8) = v94;
    if ( (*(_BYTE *)(v5 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
    {
      v66 = *(_BYTE *)(v5 + 10);
      if ( (v66 & 4) != 0 )
      {
        v67 = 16LL * *(unsigned __int16 *)(v5 + 8) - 32;
        if ( (v66 & 2) != 0 && v67 > 4 )
          v67 = 16LL * *(unsigned __int16 *)(v5 + 8) - 36;
        v68 = RtlCompareMemoryUlong((PVOID)(v5 + 32), v67, 0xFEEEFEEE);
        if ( v68 != v67 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v5,
            (const void *)(v68 + v5 + 32));
          RtlpBreakPointHeap();
        }
      }
    }
    else
    {
      RtlpDeCommitFreeBlock(BaseAddress);
    }
    goto LABEL_122;
  }
LABEL_13:
  v14 = (__int64 *)(v8 + 16);
  v15 = *(_QWORD *)(v8 + 16);
  v92 = *(__int64 **)(v8 + 24);
  v100 = v15;
  v16 = *v92;
  v17 = *(_QWORD *)(v15 + 8);
  if ( *v92 != v17 || (__int64 *)v16 != v14 )
  {
    RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v14, v17, v16, 0LL);
    goto LABEL_3;
  }
  *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v8 + 8);
  v18 = (__int64 *)*((_QWORD *)BaseAddress + 39);
  if ( v18 )
  {
    v19 = *(unsigned __int16 *)(v8 + 8);
    v20 = *((unsigned int *)v18 + 2);
    v104 = *(_WORD *)(v8 + 8);
    while ( v19 >= v20 )
    {
      v31 = (__int64 *)*v18;
      if ( !*v18 )
      {
        LODWORD(v19) = *((_DWORD *)v18 + 2) - 1;
        break;
      }
      v18 = (__int64 *)*v18;
      v20 = *((unsigned int *)v31 + 2);
    }
    v21 = v18[6];
    v22 = v19 - *((_DWORD *)v18 + 6);
    v23 = *((_DWORD *)v18 + 2);
    v24 = 2 * v22;
    if ( !*((_DWORD *)v18 + 3) )
      v24 = v22;
    v25 = (unsigned int)v24;
    v26 = *(__int64 **)(v21 + 8 * v24);
    v27 = v23 - 1;
    --*((_DWORD *)v18 + 4);
    if ( (_DWORD)v19 == v23 - 1 )
      --*((_DWORD *)v18 + 5);
    if ( v26 == v14 )
    {
      v28 = *v14;
      if ( *v18 )
        v27 = v23;
      if ( (unsigned int)v19 >= v27 )
      {
        if ( v28 == v18[4] )
        {
          *(_QWORD *)(v21 + 8 * v25) = 0LL;
          goto LABEL_32;
        }
        *(_QWORD *)(v21 + 8 * v25) = v28;
      }
      else
      {
        if ( v28 == v18[4] )
          goto LABEL_31;
        v97 = *(_DWORD *)(v28 - 16 + 8);
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v97 = *(_DWORD *)(v28 - 16 + 8) ^ *((_DWORD *)BaseAddress + 34);
          if ( HIBYTE(v97) != ((unsigned __int8)v97 ^ (unsigned __int8)(BYTE1(v97) ^ BYTE2(v97))) )
          {
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v28 - 16, 0, 0LL, 0LL);
            v15 = v100;
          }
        }
        if ( v104 != (unsigned __int16)v97 )
        {
LABEL_31:
          *(_QWORD *)(v18[6] + 8 * v25) = 0LL;
LABEL_32:
          *(_DWORD *)(v18[5] + 4 * ((unsigned __int64)v22 >> 5)) &= ~(1 << (v22 & 0x1F));
          goto LABEL_33;
        }
        *(_QWORD *)(v18[6] + 8 * v25) = v28;
      }
    }
  }
LABEL_33:
  *v92 = v15;
  *(_QWORD *)(v15 + 8) = v92;
  if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
  {
    v29 = *(_BYTE *)(v8 + 10);
    if ( (v29 & 4) != 0 )
    {
      v69 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
      if ( (v29 & 2) != 0 && v69 > 4 )
        v69 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
      v70 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v69, 0xFEEEFEEE);
      if ( v70 != v69 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v8,
          (const void *)(v70 + v8 + 32));
        RtlpBreakPointHeap();
      }
    }
    v30 = *(unsigned __int16 *)(v8 + 8);
    v5 = v8;
    v9 = a3;
    *(_BYTE *)(v8 + 10) = 0;
    *(_BYTE *)(v8 + 15) = 0;
    *a3 += v30;
    *(_WORD *)(v8 + 8) = *a3;
    *(_WORD *)(v8 + 16LL * *a3 + 12) = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)a3;
    goto LABEL_4;
  }
  RtlpDeCommitFreeBlock(BaseAddress);
LABEL_3:
  v9 = a3;
LABEL_4:
  v10 = v5 + 16LL * *v9;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v11 = *(_DWORD *)(v10 + 8) ^ *((_DWORD *)BaseAddress + 34);
    if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *((_WORD *)BaseAddress + 68)) >> 8) ^ BYTE2(v11))) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v10, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(BaseAddress[138] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v32 = *(_DWORD *)(v10 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v10 + 8) = v32;
      if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v10);
    }
    if ( !v109 )
      goto LABEL_49;
    v71 = (__int64 *)(v5 + 16);
    v72 = *(_QWORD *)(v5 + 16);
    v95 = *(__int64 **)(v5 + 24);
    v103 = v72;
    v73 = *v95;
    v74 = *(_QWORD *)(v72 + 8);
    if ( *v95 == v74 && (__int64 *)v73 == v71 )
    {
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v5 + 8);
      v75 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( !v75 )
        goto LABEL_161;
      v76 = *(unsigned __int16 *)(v5 + 8);
      v77 = *((unsigned int *)v75 + 2);
      v107 = *(_WORD *)(v5 + 8);
      while ( v76 >= v77 )
      {
        v78 = (__int64 *)*v75;
        if ( !*v75 )
        {
          LODWORD(v76) = *((_DWORD *)v75 + 2) - 1;
          break;
        }
        v75 = (__int64 *)*v75;
        v77 = *((unsigned int *)v78 + 2);
      }
      v79 = v75[6];
      v80 = v76 - *((_DWORD *)v75 + 6);
      v81 = *((_DWORD *)v75 + 2);
      v82 = 2 * v80;
      if ( !*((_DWORD *)v75 + 3) )
        v82 = v80;
      v83 = (unsigned int)v82;
      v84 = *(__int64 **)(v79 + 8 * v82);
      v85 = v81 - 1;
      --*((_DWORD *)v75 + 4);
      if ( (_DWORD)v76 == v81 - 1 )
        --*((_DWORD *)v75 + 5);
      if ( v84 != v71 )
        goto LABEL_161;
      v86 = *v71;
      if ( *v75 )
        v85 = v81;
      if ( (unsigned int)v76 >= v85 )
      {
        if ( v86 != v75[4] )
        {
          *(_QWORD *)(v79 + 8 * v83) = v86;
          goto LABEL_161;
        }
        *(_QWORD *)(v79 + 8 * v83) = 0LL;
      }
      else
      {
        if ( v86 != v75[4] )
        {
          v98 = *(_DWORD *)(v86 - 16 + 8);
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v98 = *(_DWORD *)(v86 - 16 + 8) ^ *((_DWORD *)BaseAddress + 34);
            if ( HIBYTE(v98) != ((unsigned __int8)v98 ^ (unsigned __int8)(BYTE1(v98) ^ BYTE2(v98))) )
            {
              RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v86 - 16, 0, 0LL, 0LL);
              v72 = v103;
            }
          }
          if ( v107 == (unsigned __int16)v98 )
          {
            *(_QWORD *)(v75[6] + 8 * v83) = v86;
LABEL_161:
            *v95 = v72;
            *(_QWORD *)(v72 + 8) = v95;
            if ( (*(_BYTE *)(v5 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
            {
              v87 = *(_BYTE *)(v5 + 10);
              if ( (v87 & 4) != 0 )
              {
                v88 = 16LL * *(unsigned __int16 *)(v5 + 8) - 32;
                if ( (v87 & 2) != 0 && v88 > 4 )
                  v88 = 16LL * *(unsigned __int16 *)(v5 + 8) - 36;
                v89 = RtlCompareMemoryUlong((PVOID)(v5 + 32), v88, 0xFEEEFEEE);
                if ( v89 != v88 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)v5,
                    (const void *)(v5 + 32 + v89));
                  RtlpBreakPointHeap();
                }
              }
            }
            else
            {
              RtlpDeCommitFreeBlock(BaseAddress);
            }
            goto LABEL_174;
          }
        }
        *(_QWORD *)(v75[6] + 8 * v83) = 0LL;
      }
      *(_DWORD *)(v75[5] + 4 * ((unsigned __int64)v80 >> 5)) &= ~(1 << (v80 & 0x1F));
      goto LABEL_161;
    }
    RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v71, v74, v73, 0LL);
LABEL_174:
    v109 = 0;
LABEL_49:
    v33 = (__int64 *)(v10 + 16);
    v34 = *(_QWORD *)(v10 + 16);
    v93 = *(__int64 **)(v10 + 24);
    v101 = v34;
    v35 = *v93;
    v36 = *(_QWORD *)(v34 + 8);
    if ( *v93 == v36 && (__int64 *)v35 == v33 )
    {
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v10 + 8);
      v37 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v37 )
      {
        v38 = *(unsigned __int16 *)(v10 + 8);
        v39 = *((unsigned int *)v37 + 2);
        v105 = *(_WORD *)(v10 + 8);
        while ( v38 >= v39 )
        {
          v49 = (__int64 *)*v37;
          if ( !*v37 )
          {
            LODWORD(v38) = *((_DWORD *)v37 + 2) - 1;
            break;
          }
          v37 = (__int64 *)*v37;
          v39 = *((unsigned int *)v49 + 2);
        }
        v40 = v37[6];
        v41 = v38 - *((_DWORD *)v37 + 6);
        v42 = *((_DWORD *)v37 + 2);
        v43 = 2 * v41;
        if ( !*((_DWORD *)v37 + 3) )
          v43 = v41;
        v44 = (unsigned int)v43;
        v45 = *(__int64 **)(v40 + 8 * v43);
        v46 = v42 - 1;
        --*((_DWORD *)v37 + 4);
        if ( (_DWORD)v38 == v42 - 1 )
          --*((_DWORD *)v37 + 5);
        if ( v45 == v33 )
        {
          v47 = *v33;
          if ( *v37 )
            v46 = v42;
          if ( (unsigned int)v38 >= v46 )
          {
            if ( v47 != v37[4] )
            {
              *(_QWORD *)(v40 + 8 * v44) = v47;
              goto LABEL_69;
            }
            *(_QWORD *)(v40 + 8 * v44) = 0LL;
          }
          else
          {
            if ( v47 != v37[4] )
            {
              v99 = *(_DWORD *)(v47 - 16 + 8);
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v99 = *(_DWORD *)(v47 - 16 + 8) ^ *((_DWORD *)BaseAddress + 34);
                if ( HIBYTE(v99) != ((unsigned __int8)v99 ^ (unsigned __int8)(BYTE1(v99) ^ BYTE2(v99))) )
                {
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v47 - 16, 0, 0LL, 0LL);
                  v34 = v101;
                }
              }
              if ( v105 == (unsigned __int16)v99 )
              {
                *(_QWORD *)(v37[6] + 8 * v44) = v47;
                goto LABEL_69;
              }
            }
            *(_QWORD *)(v37[6] + 8 * v44) = 0LL;
          }
          *(_DWORD *)(v37[5] + 4 * ((unsigned __int64)v41 >> 5)) &= ~(1 << (v41 & 0x1F));
        }
      }
LABEL_69:
      *v93 = v34;
      *(_QWORD *)(v34 + 8) = v93;
      if ( (*(_BYTE *)(v10 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
      {
        v48 = *(_BYTE *)(v10 + 10);
        if ( (v48 & 4) != 0 )
        {
          v90 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
          if ( (v48 & 2) != 0 && v90 > 4 )
            v90 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
          v91 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v90, 0xFEEEFEEE);
          if ( v91 != v90 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v10,
              (const void *)(v91 + v10 + 32));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v5 + 10) = 0;
        *(_BYTE *)(v5 + 15) = 0;
        *a3 += *(unsigned __int16 *)(v10 + 8);
        *(_WORD *)(v5 + 8) = *a3;
        *(_WORD *)(v5 + 16LL * *a3 + 12) = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)a3;
        return v5;
      }
      RtlpDeCommitFreeBlock(BaseAddress);
    }
    else
    {
      RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v33, v36, v35, 0LL);
    }
  }
  return v5;
}
