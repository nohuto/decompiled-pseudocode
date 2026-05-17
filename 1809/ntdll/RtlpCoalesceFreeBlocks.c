/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x18001B82C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x18008C1C4 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A4AE0 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3, char a4)
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
  __int64 v32; // r9
  int v33; // edx
  __int64 *v34; // r8
  __int64 v35; // r11
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 *v38; // r14
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // r12d
  unsigned int v43; // r10d
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 *v46; // r9
  unsigned int v47; // eax
  __int64 v48; // r15
  char v49; // al
  __int64 *v50; // rax
  __int64 v51; // r9
  __int64 *v52; // r8
  __int64 v53; // r11
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 *v56; // r14
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  __int64 *v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // r15d
  unsigned int v62; // r10d
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 *v65; // r9
  unsigned int v66; // eax
  __int64 v67; // r13
  __int64 v68; // r9
  char v69; // al
  unsigned __int64 v70; // r14
  __int64 v71; // r15
  unsigned __int64 v72; // rdi
  __int64 v73; // r14
  __int64 *v74; // r8
  __int64 v75; // r11
  __int64 v76; // rax
  __int64 v77; // r9
  __int64 *v78; // r14
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  __int64 *v81; // rax
  __int64 v82; // rdx
  unsigned int v83; // r15d
  unsigned int v84; // r10d
  __int64 v85; // rax
  __int64 v86; // r12
  __int64 *v87; // r9
  unsigned int v88; // eax
  __int64 v89; // r13
  __int64 v90; // r9
  char v91; // al
  unsigned __int64 v92; // r14
  __int64 v93; // r12
  unsigned __int64 v94; // r14
  __int64 v95; // r12
  __int64 *v96; // [rsp+30h] [rbp-39h]
  __int64 *v97; // [rsp+30h] [rbp-39h]
  __int64 *v98; // [rsp+30h] [rbp-39h]
  __int64 *v99; // [rsp+30h] [rbp-39h]
  int v100; // [rsp+40h] [rbp-29h]
  int v101; // [rsp+50h] [rbp-19h]
  int v102; // [rsp+60h] [rbp-9h]
  int v103; // [rsp+70h] [rbp+7h]
  __int64 v104; // [rsp+D0h] [rbp+67h]
  __int64 v105; // [rsp+D0h] [rbp+67h]
  __int64 v106; // [rsp+D0h] [rbp+67h]
  __int64 v107; // [rsp+D0h] [rbp+67h]
  unsigned __int16 v108; // [rsp+D8h] [rbp+6Fh]
  unsigned __int16 v109; // [rsp+D8h] [rbp+6Fh]
  unsigned __int16 v110; // [rsp+D8h] [rbp+6Fh]
  unsigned __int16 v111; // [rsp+D8h] [rbp+6Fh]
  char v113; // [rsp+E8h] [rbp+7Fh]

  v113 = a4;
  v5 = a2;
  v6 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v8 = a2 - v6;
  if ( a2 - v6 == a2
    || ((*(_BYTE *)(v8 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
  {
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v13 = *(_DWORD *)(v8 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v8 + 8) = v13;
    if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
      RtlpAnalyzeHeapFailure(a1, v8);
  }
  if ( a4 )
  {
    v52 = (__int64 *)(v5 + 16);
    v53 = *(_QWORD *)(v5 + 16);
    v98 = *(__int64 **)(v5 + 24);
    v106 = v53;
    v54 = *v98;
    v55 = *(_QWORD *)(v53 + 8);
    if ( *v98 != v55 || (__int64 *)v54 != v52 )
    {
      RtlpLogHeapFailure(13, a1, (_DWORD)v52, v55, v54, 0LL);
LABEL_122:
      v113 = 0;
      goto LABEL_13;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v5 + 8);
    v56 = *(__int64 **)(a1 + 312);
    if ( v56 )
    {
      v57 = *(unsigned __int16 *)(v5 + 8);
      v58 = *((unsigned int *)v56 + 2);
      v110 = *(_WORD *)(v5 + 8);
      while ( v57 >= v58 )
      {
        v59 = (__int64 *)*v56;
        if ( !*v56 )
        {
          LODWORD(v57) = *((_DWORD *)v56 + 2) - 1;
          break;
        }
        v56 = (__int64 *)*v56;
        v58 = *((unsigned int *)v59 + 2);
      }
      v60 = v56[6];
      v61 = v57 - *((_DWORD *)v56 + 6);
      v62 = *((_DWORD *)v56 + 2);
      v63 = 2 * v61;
      if ( !*((_DWORD *)v56 + 3) )
        v63 = v61;
      v64 = (unsigned int)v63;
      v65 = *(__int64 **)(v60 + 8 * v63);
      v66 = v62 - 1;
      --*((_DWORD *)v56 + 4);
      if ( (_DWORD)v57 == v62 - 1 )
        --*((_DWORD *)v56 + 5);
      if ( v65 == v52 )
      {
        v67 = *v52;
        if ( *v56 )
          v66 = v62;
        if ( (unsigned int)v57 >= v66 )
        {
          if ( v67 != v56[4] )
          {
            *(_QWORD *)(v60 + 8 * v64) = v67;
            goto LABEL_109;
          }
          *(_QWORD *)(v60 + 8 * v64) = 0LL;
        }
        else
        {
          if ( v67 != v56[4] )
          {
            v100 = *(_DWORD *)(v67 - 16 + 8);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v100 = *(_DWORD *)(v67 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v100) != ((unsigned __int8)v100 ^ (unsigned __int8)(BYTE1(v100) ^ BYTE2(v100))) )
              {
                RtlpLogHeapFailure(3, a1, v67 - 16, 0, 0LL, 0LL);
                v53 = v106;
              }
            }
            if ( v110 == (unsigned __int16)v100 )
            {
              *(_QWORD *)(v56[6] + 8 * v64) = v67;
              goto LABEL_109;
            }
          }
          *(_QWORD *)(v56[6] + 8 * v64) = 0LL;
        }
        *(_DWORD *)(v56[5] + 4 * ((unsigned __int64)v61 >> 5)) &= ~(1 << (v61 & 0x1F));
      }
    }
LABEL_109:
    *v98 = v53;
    *(_QWORD *)(v53 + 8) = v98;
    if ( (*(_BYTE *)(v5 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v5) )
    {
      v69 = *(_BYTE *)(v5 + 10);
      if ( (v69 & 4) != 0 )
      {
        v70 = 16LL * *(unsigned __int16 *)(v5 + 8) - 32;
        if ( (v69 & 2) != 0 && v70 > 4 )
          v70 = 16LL * *(unsigned __int16 *)(v5 + 8) - 36;
        v71 = RtlCompareMemoryUlong(v5 + 32, v70, 4277075694LL);
        if ( v71 != v70 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v5,
            (const void *)(v71 + v5 + 32));
          RtlpBreakPointHeap();
        }
      }
    }
    else
    {
      LOBYTE(v68) = 1;
      RtlpDeCommitFreeBlock(a1, v5, *(unsigned __int16 *)(v5 + 8), v68);
    }
    goto LABEL_122;
  }
LABEL_13:
  v14 = (__int64 *)(v8 + 16);
  v15 = *(_QWORD *)(v8 + 16);
  v96 = *(__int64 **)(v8 + 24);
  v104 = v15;
  v16 = *v96;
  v17 = *(_QWORD *)(v15 + 8);
  if ( *v96 != v17 || (__int64 *)v16 != v14 )
  {
    RtlpLogHeapFailure(13, a1, (_DWORD)v14, v17, v16, 0LL);
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
  v18 = *(__int64 **)(a1 + 312);
  if ( v18 )
  {
    v19 = *(unsigned __int16 *)(v8 + 8);
    v20 = *((unsigned int *)v18 + 2);
    v108 = *(_WORD *)(v8 + 8);
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
        v101 = *(_DWORD *)(v28 - 16 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v101 = *(_DWORD *)(v28 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v101) != ((unsigned __int8)v101 ^ (unsigned __int8)(BYTE1(v101) ^ BYTE2(v101))) )
          {
            RtlpLogHeapFailure(3, a1, v28 - 16, 0, 0LL, 0LL);
            v15 = v104;
          }
        }
        if ( v108 != (unsigned __int16)v101 )
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
  *v96 = v15;
  *(_QWORD *)(v15 + 8) = v96;
  if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v8) )
  {
    v29 = *(_BYTE *)(v8 + 10);
    if ( (v29 & 4) != 0 )
    {
      v72 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
      if ( (v29 & 2) != 0 && v72 > 4 )
        v72 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
      v73 = RtlCompareMemoryUlong(v8 + 32, v72, 4277075694LL);
      if ( v73 != v72 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v8,
          (const void *)(v73 + v8 + 32));
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
    *(_WORD *)(v8 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
    goto LABEL_4;
  }
  LOBYTE(v32) = 1;
  RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), v32);
LABEL_3:
  v9 = a3;
LABEL_4:
  v10 = v5 + 16LL * *v9;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v11 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v11))) )
      RtlpLogHeapFailure(3, a1, v10, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v33 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v10 + 8) = v33;
      if ( HIBYTE(v33) != ((unsigned __int8)v33 ^ (unsigned __int8)(BYTE1(v33) ^ BYTE2(v33))) )
        RtlpAnalyzeHeapFailure(a1, v10);
    }
    if ( !v113 )
      goto LABEL_49;
    v74 = (__int64 *)(v5 + 16);
    v75 = *(_QWORD *)(v5 + 16);
    v99 = *(__int64 **)(v5 + 24);
    v107 = v75;
    v76 = *v99;
    v77 = *(_QWORD *)(v75 + 8);
    if ( *v99 == v77 && (__int64 *)v76 == v74 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v5 + 8);
      v78 = *(__int64 **)(a1 + 312);
      if ( !v78 )
        goto LABEL_161;
      v79 = *(unsigned __int16 *)(v5 + 8);
      v80 = *((unsigned int *)v78 + 2);
      v111 = *(_WORD *)(v5 + 8);
      while ( v79 >= v80 )
      {
        v81 = (__int64 *)*v78;
        if ( !*v78 )
        {
          LODWORD(v79) = *((_DWORD *)v78 + 2) - 1;
          break;
        }
        v78 = (__int64 *)*v78;
        v80 = *((unsigned int *)v81 + 2);
      }
      v82 = v78[6];
      v83 = v79 - *((_DWORD *)v78 + 6);
      v84 = *((_DWORD *)v78 + 2);
      v85 = 2 * v83;
      if ( !*((_DWORD *)v78 + 3) )
        v85 = v83;
      v86 = (unsigned int)v85;
      v87 = *(__int64 **)(v82 + 8 * v85);
      v88 = v84 - 1;
      --*((_DWORD *)v78 + 4);
      if ( (_DWORD)v79 == v84 - 1 )
        --*((_DWORD *)v78 + 5);
      if ( v87 != v74 )
        goto LABEL_161;
      v89 = *v74;
      if ( *v78 )
        v88 = v84;
      if ( (unsigned int)v79 >= v88 )
      {
        if ( v89 != v78[4] )
        {
          *(_QWORD *)(v82 + 8 * v86) = v89;
          goto LABEL_161;
        }
        *(_QWORD *)(v82 + 8 * v86) = 0LL;
      }
      else
      {
        if ( v89 != v78[4] )
        {
          v102 = *(_DWORD *)(v89 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v102 = *(_DWORD *)(v89 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
            if ( HIBYTE(v102) != ((unsigned __int8)v102 ^ (unsigned __int8)(BYTE1(v102) ^ BYTE2(v102))) )
            {
              RtlpLogHeapFailure(3, a1, v89 - 16, 0, 0LL, 0LL);
              v75 = v107;
            }
          }
          if ( v111 == (unsigned __int16)v102 )
          {
            *(_QWORD *)(v78[6] + 8 * v86) = v89;
LABEL_161:
            *v99 = v75;
            *(_QWORD *)(v75 + 8) = v99;
            if ( (*(_BYTE *)(v5 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v5) )
            {
              v91 = *(_BYTE *)(v5 + 10);
              if ( (v91 & 4) != 0 )
              {
                v92 = 16LL * *(unsigned __int16 *)(v5 + 8) - 32;
                if ( (v91 & 2) != 0 && v92 > 4 )
                  v92 = 16LL * *(unsigned __int16 *)(v5 + 8) - 36;
                v93 = RtlCompareMemoryUlong(v5 + 32, v92, 4277075694LL);
                if ( v93 != v92 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)v5,
                    (const void *)(v5 + 32 + v93));
                  RtlpBreakPointHeap();
                }
              }
            }
            else
            {
              LOBYTE(v90) = 1;
              RtlpDeCommitFreeBlock(a1, v5, *(unsigned __int16 *)(v5 + 8), v90);
            }
            goto LABEL_174;
          }
        }
        *(_QWORD *)(v78[6] + 8 * v86) = 0LL;
      }
      *(_DWORD *)(v78[5] + 4 * ((unsigned __int64)v83 >> 5)) &= ~(1 << (v83 & 0x1F));
      goto LABEL_161;
    }
    RtlpLogHeapFailure(13, a1, (_DWORD)v74, v77, v76, 0LL);
LABEL_174:
    v113 = 0;
LABEL_49:
    v34 = (__int64 *)(v10 + 16);
    v35 = *(_QWORD *)(v10 + 16);
    v97 = *(__int64 **)(v10 + 24);
    v105 = v35;
    v36 = *v97;
    v37 = *(_QWORD *)(v35 + 8);
    if ( *v97 == v37 && (__int64 *)v36 == v34 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v10 + 8);
      v38 = *(__int64 **)(a1 + 312);
      if ( v38 )
      {
        v39 = *(unsigned __int16 *)(v10 + 8);
        v40 = *((unsigned int *)v38 + 2);
        v109 = *(_WORD *)(v10 + 8);
        while ( v39 >= v40 )
        {
          v50 = (__int64 *)*v38;
          if ( !*v38 )
          {
            LODWORD(v39) = *((_DWORD *)v38 + 2) - 1;
            break;
          }
          v38 = (__int64 *)*v38;
          v40 = *((unsigned int *)v50 + 2);
        }
        v41 = v38[6];
        v42 = v39 - *((_DWORD *)v38 + 6);
        v43 = *((_DWORD *)v38 + 2);
        v44 = 2 * v42;
        if ( !*((_DWORD *)v38 + 3) )
          v44 = v42;
        v45 = (unsigned int)v44;
        v46 = *(__int64 **)(v41 + 8 * v44);
        v47 = v43 - 1;
        --*((_DWORD *)v38 + 4);
        if ( (_DWORD)v39 == v43 - 1 )
          --*((_DWORD *)v38 + 5);
        if ( v46 == v34 )
        {
          v48 = *v34;
          if ( *v38 )
            v47 = v43;
          if ( (unsigned int)v39 >= v47 )
          {
            if ( v48 != v38[4] )
            {
              *(_QWORD *)(v41 + 8 * v45) = v48;
              goto LABEL_69;
            }
            *(_QWORD *)(v41 + 8 * v45) = 0LL;
          }
          else
          {
            if ( v48 != v38[4] )
            {
              v103 = *(_DWORD *)(v48 - 16 + 8);
              if ( *(_DWORD *)(a1 + 124) )
              {
                v103 = *(_DWORD *)(v48 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
                if ( HIBYTE(v103) != ((unsigned __int8)v103 ^ (unsigned __int8)(BYTE1(v103) ^ BYTE2(v103))) )
                {
                  RtlpLogHeapFailure(3, a1, v48 - 16, 0, 0LL, 0LL);
                  v35 = v105;
                }
              }
              if ( v109 == (unsigned __int16)v103 )
              {
                *(_QWORD *)(v38[6] + 8 * v45) = v48;
                goto LABEL_69;
              }
            }
            *(_QWORD *)(v38[6] + 8 * v45) = 0LL;
          }
          *(_DWORD *)(v38[5] + 4 * ((unsigned __int64)v42 >> 5)) &= ~(1 << (v42 & 0x1F));
        }
      }
LABEL_69:
      *v97 = v35;
      *(_QWORD *)(v35 + 8) = v97;
      if ( (*(_BYTE *)(v10 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v10) )
      {
        v49 = *(_BYTE *)(v10 + 10);
        if ( (v49 & 4) != 0 )
        {
          v94 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
          if ( (v49 & 2) != 0 && v94 > 4 )
            v94 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
          v95 = RtlCompareMemoryUlong(v10 + 32, v94, 4277075694LL);
          if ( v95 != v94 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v10,
              (const void *)(v95 + v10 + 32));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v5 + 10) = 0;
        *(_BYTE *)(v5 + 15) = 0;
        *a3 += *(unsigned __int16 *)(v10 + 8);
        *(_WORD *)(v5 + 8) = *a3;
        *(_WORD *)(v5 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
        return v5;
      }
      LOBYTE(v51) = 1;
      RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), v51);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, (_DWORD)v34, v37, v36, 0LL);
    }
  }
  return v5;
}
