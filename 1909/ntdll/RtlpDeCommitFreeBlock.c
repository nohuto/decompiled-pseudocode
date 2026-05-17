/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180045188
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800445F8 (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004622C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180046728 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceHeap @ 0x1800EFE6C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F2A30 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x180106A8C (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInsertFreeBlock @ 0x18004580C (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004622C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCollectFreeBlocks @ 0x180047ED4 (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x1800480CC (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180048120 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCreateUCREntry @ 0x180048E88 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180049000 (RtlpInsertUCRBlock.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlpRemoveUCRBlock @ 0x180080AFC (RtlpRemoveUCRBlock.c)
 *     RtlpHeapHandleError @ 0x1801014E0 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x1801032C8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1801033F8 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

unsigned int *__fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r12
  char v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned int *result; // rax
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rcx
  _BYTE *v26; // rdi
  unsigned __int64 v27; // r15
  bool v28; // cc
  __int64 v29; // rdx
  unsigned __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  _QWORD *v37; // r8
  _QWORD *v38; // rcx
  __int64 v39; // r9
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rcx
  _QWORD *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  _BYTE *v51; // rdi
  unsigned __int64 v52; // r15
  __int64 v53; // rdx
  unsigned __int64 v54; // r14
  __int64 v55; // rcx
  __int64 v56; // r15
  __int64 v57; // rdi
  __int64 v58; // rcx
  bool v59; // zf
  unsigned __int64 v62; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v63; // [rsp+50h] [rbp-21h] BYREF
  __int64 v64; // [rsp+58h] [rbp-19h]
  __int64 v65; // [rsp+60h] [rbp-11h]
  _QWORD *v66; // [rsp+68h] [rbp-9h]
  __int64 v67; // [rsp+70h] [rbp-1h]
  __int64 v68; // [rsp+78h] [rbp+7h] BYREF
  __int64 v69; // [rsp+80h] [rbp+Fh] BYREF
  char v70[64]; // [rsp+88h] [rbp+17h] BYREF
  char v71; // [rsp+D8h] [rbp+67h]
  unsigned __int64 v72; // [rsp+E8h] [rbp+77h] BYREF
  char v73; // [rsp+F0h] [rbp+7Fh]

  v73 = a4;
  v72 = a3;
  v65 = 0LL;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v71 = 0;
  v8 = a1;
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
    return (unsigned int *)RtlpInsertFreeBlock(a1, a2);
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(a1, a2, v70, &v68) )
        *(_QWORD *)(v8 + 664) -= v68;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
      return (unsigned int *)RtlpInsertFreeBlock(a1, a2);
    v9 = a3 + *(_QWORD *)(a1 + 192);
    if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
    {
LABEL_11:
      a1 = v8;
      return (unsigned int *)RtlpInsertFreeBlock(a1, a2);
    }
    v10 = RtlpCoalesceFreeBlocks(a1, a2, &v72, 0LL);
    v6 = v72;
    v11 = v10;
    if ( v72 - 257 <= 0xFDFF )
    {
      RtlpInsertFreeBlock(v8, v10);
      v12 = *(_QWORD *)(v8 + 576) - 16LL * *(_QWORD *)(v8 + 192);
      result = (unsigned int *)(*(_QWORD *)(v8 + 672) >> 4);
      if ( v12 < *(_QWORD *)(v8 + 672) - (_QWORD)result )
      {
        result = (unsigned int *)(*(_QWORD *)(v8 + 680) >> 2);
        if ( v12 > *(_QWORD *)(v8 + 680) - (_QWORD)result )
        {
          result = (unsigned int *)RtlpCollectFreeBlocks(v8);
          *(_QWORD *)(v8 + 680) = v12;
          *(_QWORD *)(v8 + 672) = v12;
        }
      }
      return result;
    }
  }
  v14 = *(_BYTE *)(v7 + 14);
  if ( v14 )
    v15 = (v7 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v14 << 16) + 0x10000;
  else
    v15 = v8;
  v16 = 2 * v6;
  if ( *(_BYTE *)(v11 + 16 * v6 + 15) == 3 )
  {
    v34 = v11 + 8 * (v16 + 2);
    RtlpRemoveUCRBlock(v8, v34);
    v35 = *(_QWORD *)(v34 + 40);
    v65 = *(_QWORD *)(v34 + 32);
    v64 = v35;
    --*(_DWORD *)(v15 + 84);
    *(_DWORD *)(v15 + 80) -= *(_QWORD *)(v34 + 40) >> 12;
    *(_QWORD *)(v8 + 576) += *(_QWORD *)(v34 + 40);
    --*(_DWORD *)(v8 + 604);
    v36 = *(_QWORD *)(v34 + 40);
    if ( v36 >= 0xFF000 )
    {
      *(_QWORD *)(v8 + 584) -= v36;
      v36 = *(_QWORD *)(v34 + 40);
    }
    v5 = v73;
    v6 += (v36 >> 4) + 64;
    v71 = 1;
    v72 = v6;
    v4 = 1;
  }
  else
  {
    v64 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_18;
  v37 = (_QWORD *)(v15 + 96);
  v63 = v11;
  v38 = *(_QWORD **)(v15 + 96);
  v39 = v11;
  while ( v37 != v38 )
  {
    v40 = v38 - 2;
    v41 = v38[2] + v38[3];
    v66 = v38 - 2;
    if ( v41 == v11 )
      goto LABEL_52;
    v38 = (_QWORD *)*v38;
  }
  v40 = 0LL;
  v66 = 0LL;
LABEL_52:
  if ( v5 && !v40 )
  {
LABEL_18:
    v17 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    v63 = v17;
    if ( v17 == v11 + 80 )
    {
      v17 += 4096LL;
      v63 = v17;
    }
    v18 = 16 * v6;
    if ( v4 )
      v19 = v18 + v11;
    else
      v19 = v18 + v11 - 32;
    v20 = v19 & 0xFFFFFFFFFFFFF000uLL;
    v62 = v20;
    if ( v20 >= v17 )
    {
      v21 = v20;
      v22 = v20 - v17;
      v23 = v21 - v17;
      v62 = v23;
      if ( v73 || *(_BYTE *)(v11 + 8 * v16 + 15) == 3 || v23 && v23 >= *(_QWORD *)(v8 + 176) )
      {
        v24 = 2147353472LL;
        if ( v22 )
        {
          ++*(_DWORD *)(v8 + 612);
          if ( (int)RtlpSecMemFreeVirtualMemory(v17, &v63, &v62, 0x4000LL) < 0 )
          {
            ++*(_DWORD *)(v8 + 628);
            v59 = v71 == 0;
LABEL_104:
            if ( !v59 )
              RtlpCreateUCREntry(v8, v15, v65 - 48, v64, v11, (__int64)&v72);
            goto LABEL_150;
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v25 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v25 = 2147353472LL;
          if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapDecommit(v8, v63, v62, 6LL);
        }
        if ( !v71 )
        {
          v26 = (_BYTE *)(v63 + v62);
          *(_WORD *)(v63 + v62 + 12) = *(_WORD *)(v8 + 140);
          if ( v18 + v11 == v62 + v63 )
          {
            if ( *(_DWORD *)(v8 + 124) )
            {
              v26[11] = v26[8] ^ v26[9] ^ v26[10];
              *((_DWORD *)v26 + 2) ^= *(_DWORD *)(v8 + 136);
            }
          }
          else
          {
            v26[15] = 0;
            v26[10] = 0;
            v27 = (v11 + v18 - v62 - v63) >> 4;
            v28 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v26 + 4) = v27;
            if ( !v28 && (unsigned __int16)v27 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("(LONG)FreeEntry->Size > 1");
              RtlpHeapHandleError(1LL);
            }
            v26[11] = 0;
            v29 = *(_QWORD *)(v15 + 40);
            if ( v29 == v15 )
            {
              LOBYTE(v30) = 0;
            }
            else
            {
              v30 = ((unsigned __int64)&v26[-v15] >> 16) + 1;
              if ( v30 >= 0xFE )
                RtlpLogHeapFailure(3, v29, (_DWORD)v26, v15, 0LL, 0LL);
            }
            v26[14] = v30;
            RtlpInsertFreeBlock(v8, v26);
          }
        }
        RtlpCreateUCREntry(v8, v15, v63 - 48, v62, v11, (__int64)&v69);
        RtlpInsertFreeBlock(v8, v11);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v31 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v31 = 2147353472LL;
        if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v24 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(v8, v63, v62, 16 * *(_QWORD *)(v8 + 192), 0, 0LL, *(unsigned __int8 *)v24);
        }
        result = RtlGetCurrentServiceSessionId();
        v32 = 2147353482LL;
        if ( (_DWORD)result )
        {
          result = (unsigned int *)NtCurrentPeb();
          v33 = *((_QWORD *)result + 18) + 560LL;
        }
        else
        {
          v33 = 2147353482LL;
        }
        if ( *(_BYTE *)v33 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v32 = (__int64)NtCurrentPeb()->SharedData + 560;
          return (unsigned int *)RtlpLogHeapContractEvent(
                                   v8,
                                   v63,
                                   v62,
                                   16 * (unsigned int)*(_QWORD *)(v8 + 192),
                                   0,
                                   0LL,
                                   *(unsigned __int8 *)v32);
        }
        return result;
      }
LABEL_150:
      a2 = v11;
      goto LABEL_11;
    }
    if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
      goto LABEL_150;
    if ( !NtCurrentPeb()->Ldr )
      goto LABEL_148;
    goto LABEL_147;
  }
  v42 = (unsigned int)RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v40 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v37, v11);
    else
      DbgPrint("HEAP: ", 0LL, v37, v11);
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v39 = v63;
    v42 = (unsigned int)RtlpHeapErrorHandlerThreshold;
    v6 = v72;
  }
  v43 = 16 * v6;
  if ( v4 )
  {
    v44 = v43 + v11;
    v67 = v43 + v11;
  }
  else
  {
    v67 = v43 + v11;
    v44 = v43 + v11 - 32;
  }
  v62 = (v44 & 0xFFFFFFFFFFFFF000uLL) - v39;
  if ( !v62 )
  {
    if ( (int)v42 < 1 || !v4 )
      goto LABEL_150;
    if ( !NtCurrentPeb()->Ldr )
    {
LABEL_148:
      DbgPrint("HEAP: ");
      goto LABEL_149;
    }
LABEL_147:
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_149:
    DbgPrint("(!TrailingUCR)");
    RtlpHeapHandleError(1LL);
    goto LABEL_150;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v42, &v63, &v62, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(v8 + 628);
    v59 = v4 == 0;
    goto LABEL_104;
  }
  v45 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v46 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v46 = 2147353472LL;
  if ( *(_BYTE *)v46 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v8, v63, v62, 5LL);
  ++*(_DWORD *)(v8 + 612);
  v47 = v66;
  v48 = v66[5];
  if ( v48 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) -= v48;
  RtlpRemoveUCRBlock(v8, v47);
  v47[5] += v62;
  RtlpInsertUCRBlock(v8, v47);
  *(_DWORD *)(v15 + 80) += v62 >> 12;
  *(_QWORD *)(v8 + 576) -= v62;
  v50 = v47[5];
  if ( v50 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) += v50;
  if ( !v71 )
  {
    v51 = (_BYTE *)(v63 + v62);
    *(_WORD *)(v63 + v62 + 12) = *(_WORD *)(v8 + 140);
    if ( v67 == v62 + v63 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v51[11] = v51[8] ^ v51[9] ^ v51[10];
        *((_DWORD *)v51 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v51[15] = 0;
      v51[10] = 0;
      v52 = (v43 - v62) >> 4;
      v28 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v51 + 4) = v52;
      if ( !v28 && (unsigned __int16)v52 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL);
        else
          DbgPrint("HEAP: ", v49, 0LL);
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v51[11] = 0;
      v53 = *(_QWORD *)(v15 + 40);
      if ( v53 == v15 )
      {
        LOBYTE(v54) = 0;
      }
      else
      {
        v54 = ((unsigned __int64)&v51[-v15] >> 16) + 1;
        if ( v54 >= 0xFE )
          RtlpLogHeapFailure(3, v53, (_DWORD)v51, v15, 0LL, 0LL);
      }
      v51[14] = v54;
      RtlpInsertFreeBlock(v8, v51);
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v55 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v55 = 2147353472LL;
  if ( *(_BYTE *)v55 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v45 = (__int64)NtCurrentPeb()->SharedData + 550;
    v56 = v64;
    RtlpLogHeapContractEvent(v8, v63, v62, 16 * *(_QWORD *)(v8 + 192), v71, v64, *(unsigned __int8 *)v45);
  }
  else
  {
    v56 = v64;
  }
  result = RtlGetCurrentServiceSessionId();
  v57 = 2147353482LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v58 = *((_QWORD *)result + 18) + 560LL;
  }
  else
  {
    v58 = 2147353482LL;
  }
  if ( *(_BYTE *)v58 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v57 = (__int64)NtCurrentPeb()->SharedData + 560;
    return (unsigned int *)RtlpLogHeapContractEvent(
                             v8,
                             v63,
                             v62,
                             16 * (unsigned int)*(_QWORD *)(v8 + 192),
                             v71,
                             v56,
                             *(unsigned __int8 *)v57);
  }
  return result;
}
