/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x18001BD18
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800214E4 (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceHeap @ 0x18008C1D4 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F5670 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801095C0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpCreateUCREntry @ 0x18001D2C4 (RtlpCreateUCREntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpCollectFreeBlocks @ 0x180060F50 (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180061158 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpRemoveUCRBlock @ 0x180081EDC (RtlpRemoveUCRBlock.c)
 *     RtlpInsertUCRBlock @ 0x180086404 (RtlpInsertUCRBlock.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180103D1C (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x180105BF0 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x180105D20 (RtlpLogHeapDecommit.c)
 */

int __fastcall RtlpDeCommitFreeBlock(_QWORD *BaseAddress, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r12
  char v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  struct _PEB *v13; // rax
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  _BYTE *v32; // rdi
  unsigned __int64 v33; // r15
  bool v34; // cc
  __int64 v35; // rdx
  unsigned __int64 v36; // r15
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
  int v61[2]; // [rsp+48h] [rbp-29h] BYREF
  int v62[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v63; // [rsp+58h] [rbp-19h]
  __int64 v64; // [rsp+60h] [rbp-11h]
  _QWORD *v65; // [rsp+68h] [rbp-9h]
  __int64 v66; // [rsp+70h] [rbp-1h]
  __int64 v67; // [rsp+78h] [rbp+7h] BYREF
  __int64 v68; // [rsp+80h] [rbp+Fh] BYREF
  char v69[64]; // [rsp+88h] [rbp+17h] BYREF
  char v70; // [rsp+D8h] [rbp+67h]
  unsigned __int64 v71; // [rsp+E8h] [rbp+77h] BYREF
  char v72; // [rsp+F0h] [rbp+7Fh]

  v72 = a4;
  v71 = a3;
  v64 = 0LL;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v70 = 0;
  v8 = BaseAddress;
  if ( RtlpHeapKey != BaseAddress[45] )
    goto LABEL_10;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*((_DWORD *)BaseAddress + 165);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(BaseAddress, a2, v69, &v67) )
        v8[83] -= v67;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < BaseAddress[22] )
    {
LABEL_10:
      LODWORD(v13) = RtlpInsertFreeBlock(BaseAddress, a2);
      return (int)v13;
    }
    v9 = a3 + BaseAddress[24];
    if ( v9 < BaseAddress[23] || v9 < BaseAddress[72] >> (*((_BYTE *)BaseAddress + 688) + 4) )
    {
LABEL_9:
      BaseAddress = v8;
      goto LABEL_10;
    }
    v10 = RtlpCoalesceFreeBlocks(BaseAddress, a2, &v71, 0);
    v6 = v71;
    v11 = v10;
    if ( v71 - 257 <= 0xFDFF )
    {
      RtlpInsertFreeBlock(v8, v10);
      v12 = v8[72] - 16LL * v8[24];
      v13 = (struct _PEB *)(v8[84] >> 4);
      if ( v12 < v8[84] - (_QWORD)v13 )
      {
        v13 = (struct _PEB *)(v8[85] >> 2);
        if ( v12 > v8[85] - (_QWORD)v13 )
        {
          LODWORD(v13) = RtlpCollectFreeBlocks((int)v8);
          v8[85] = v12;
          v8[84] = v12;
        }
      }
      return (int)v13;
    }
  }
  v14 = *(_BYTE *)(v7 + 14);
  if ( v14 )
    v15 = (v7 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v14 << 16) + 0x10000;
  else
    v15 = (unsigned __int64)v8;
  v16 = 2 * v6;
  if ( *(_BYTE *)(v11 + 16 * v6 + 15) == 3 )
  {
    v17 = v11 + 8 * (v16 + 2);
    RtlpRemoveUCRBlock(v8, v17);
    v18 = *(_QWORD *)(v17 + 40);
    v64 = *(_QWORD *)(v17 + 32);
    v63 = v18;
    --*(_DWORD *)(v15 + 84);
    *(_DWORD *)(v15 + 80) -= *(_QWORD *)(v17 + 40) >> 12;
    v8[72] += *(_QWORD *)(v17 + 40);
    --*((_DWORD *)v8 + 151);
    v19 = *(_QWORD *)(v17 + 40);
    if ( v19 >= 0xFF000 )
    {
      v8[73] -= v19;
      v19 = *(_QWORD *)(v17 + 40);
    }
    v5 = v72;
    v6 += (v19 >> 4) + 64;
    v70 = 1;
    v71 = v6;
    v4 = 1;
  }
  else
  {
    v63 = 0LL;
  }
  if ( *((_WORD *)v8 + 70) != *(_WORD *)(v11 + 12) )
    goto LABEL_20;
  v37 = (_QWORD *)(v15 + 96);
  *(_QWORD *)v62 = v11;
  v38 = *(_QWORD **)(v15 + 96);
  v39 = v11;
  while ( v37 != v38 )
  {
    v40 = v38 - 2;
    v41 = v38[2] + v38[3];
    v65 = v38 - 2;
    if ( v41 == v11 )
      goto LABEL_54;
    v38 = (_QWORD *)*v38;
  }
  v40 = 0LL;
  v65 = 0LL;
LABEL_54:
  if ( v5 && !v40 )
  {
LABEL_20:
    v20 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v62 = v20;
    if ( v20 == v11 + 80 )
    {
      v20 += 4096LL;
      *(_QWORD *)v62 = v20;
    }
    v21 = 16 * v6;
    if ( v4 )
      v22 = v21 + v11;
    else
      v22 = v21 + v11 - 32;
    v23 = v22 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v61 = v23;
    if ( v23 >= v20 )
    {
      v24 = v23;
      v25 = v23 - v20;
      v26 = v24 - v20;
      *(_QWORD *)v61 = v26;
      if ( v72 || *(_BYTE *)(v11 + 8 * v16 + 15) == 3 || v26 && v26 >= v8[22] )
      {
        v27 = 2147353472LL;
        if ( v25 )
        {
          ++*((_DWORD *)v8 + 153);
          if ( (int)RtlpSecMemFreeVirtualMemory(v20, v62, v61, 0x4000LL) < 0 )
          {
            ++*((_DWORD *)v8 + 157);
            v59 = v70 == 0;
LABEL_104:
            if ( !v59 )
              RtlpCreateUCREntry((_DWORD)v8, v15, v64 - 48, v63, v11, (__int64)&v71);
            goto LABEL_44;
          }
          if ( RtlGetCurrentServiceSessionId() )
            v28 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v28 = 2147353472LL;
          if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapDecommit(v8, *(_QWORD *)v62, *(_QWORD *)v61, 6LL);
        }
        if ( !v70 )
        {
          v32 = (_BYTE *)(*(_QWORD *)v62 + *(_QWORD *)v61);
          *(_WORD *)(*(_QWORD *)v62 + *(_QWORD *)v61 + 12LL) = *((_WORD *)v8 + 70);
          if ( v21 + v11 == *(_QWORD *)v61 + *(_QWORD *)v62 )
          {
            if ( *((_DWORD *)v8 + 31) )
            {
              v32[11] = v32[8] ^ v32[9] ^ v32[10];
              *((_DWORD *)v32 + 2) ^= *((_DWORD *)v8 + 34);
            }
          }
          else
          {
            v32[15] = 0;
            v32[10] = 0;
            v33 = (unsigned __int64)(v11 + v21 - *(_QWORD *)v61 - *(_QWORD *)v62) >> 4;
            v34 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v32 + 4) = v33;
            if ( !v34 && (unsigned __int16)v33 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("(LONG)FreeEntry->Size > 1");
              RtlpHeapHandleError(1LL);
            }
            v32[11] = 0;
            v35 = *(_QWORD *)(v15 + 40);
            if ( v35 == v15 )
            {
              LOBYTE(v36) = 0;
            }
            else
            {
              v36 = ((unsigned __int64)&v32[-v15] >> 16) + 1;
              if ( v36 >= 0xFE )
                RtlpLogHeapFailure(3, v35, (_DWORD)v32, v15, 0LL, 0LL);
            }
            v32[14] = v36;
            RtlpInsertFreeBlock(v8, v32);
          }
        }
        RtlpCreateUCREntry((_DWORD)v8, v15, v62[0] - 48, v61[0], v11, (__int64)&v68);
        RtlpInsertFreeBlock(v8, v11);
        if ( RtlGetCurrentServiceSessionId() )
          v29 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v29 = 2147353472LL;
        if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v27 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent((int)v8, v62[0], v61[0], 16 * v8[24], 0, 0LL, (HANDLE)*(unsigned __int8 *)v27);
        }
        LODWORD(v13) = RtlGetCurrentServiceSessionId();
        v30 = 2147353482LL;
        if ( (_DWORD)v13 )
        {
          v13 = NtCurrentPeb();
          v31 = (__int64)v13->SharedData + 560;
        }
        else
        {
          v31 = 2147353482LL;
        }
        if ( *(_BYTE *)v31 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v30 = (__int64)NtCurrentPeb()->SharedData + 560;
          LODWORD(v13) = RtlpLogHeapContractEvent(
                           (int)v8,
                           v62[0],
                           v61[0],
                           16 * (unsigned int)v8[24],
                           0,
                           0LL,
                           (HANDLE)*(unsigned __int8 *)v30);
        }
        return (int)v13;
      }
LABEL_44:
      a2 = v11;
      goto LABEL_9;
    }
    if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
      goto LABEL_44;
    if ( !NtCurrentPeb()->Ldr )
      goto LABEL_149;
    goto LABEL_148;
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
    v39 = *(_QWORD *)v62;
    v42 = (unsigned int)RtlpHeapErrorHandlerThreshold;
    v6 = v71;
  }
  v43 = 16 * v6;
  if ( v4 )
  {
    v44 = v43 + v11;
    v66 = v43 + v11;
  }
  else
  {
    v66 = v43 + v11;
    v44 = v43 + v11 - 32;
  }
  *(_QWORD *)v61 = (v44 & 0xFFFFFFFFFFFFF000uLL) - v39;
  if ( !*(_QWORD *)v61 )
  {
    if ( (int)v42 < 1 || !v4 )
      goto LABEL_44;
    if ( !NtCurrentPeb()->Ldr )
    {
LABEL_149:
      DbgPrint("HEAP: ");
      goto LABEL_150;
    }
LABEL_148:
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_150:
    DbgPrint("(!TrailingUCR)");
    RtlpHeapHandleError(1LL);
    goto LABEL_44;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v42, v62, v61, 0x4000LL) < 0 )
  {
    ++*((_DWORD *)v8 + 157);
    v59 = v4 == 0;
    goto LABEL_104;
  }
  v45 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v46 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v46 = 2147353472LL;
  if ( *(_BYTE *)v46 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v8, *(_QWORD *)v62, *(_QWORD *)v61, 5LL);
  ++*((_DWORD *)v8 + 153);
  v47 = v65;
  v48 = v65[5];
  if ( v48 >= 0xFF000 )
    v8[73] -= v48;
  RtlpRemoveUCRBlock(v8, v47);
  v47[5] += *(_QWORD *)v61;
  RtlpInsertUCRBlock(v8, v47);
  *(_DWORD *)(v15 + 80) += *(_QWORD *)v61 >> 12;
  v8[72] -= *(_QWORD *)v61;
  v50 = v47[5];
  if ( v50 >= 0xFF000 )
    v8[73] += v50;
  if ( !v70 )
  {
    v51 = (_BYTE *)(*(_QWORD *)v62 + *(_QWORD *)v61);
    *(_WORD *)(*(_QWORD *)v62 + *(_QWORD *)v61 + 12LL) = *((_WORD *)v8 + 70);
    if ( v66 == *(_QWORD *)v61 + *(_QWORD *)v62 )
    {
      if ( *((_DWORD *)v8 + 31) )
      {
        v51[11] = v51[8] ^ v51[9] ^ v51[10];
        *((_DWORD *)v51 + 2) ^= *((_DWORD *)v8 + 34);
      }
    }
    else
    {
      v51[15] = 0;
      v51[10] = 0;
      v52 = (unsigned __int64)(v43 - *(_QWORD *)v61) >> 4;
      v34 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v51 + 4) = v52;
      if ( !v34 && (unsigned __int16)v52 <= 1u )
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
  if ( RtlGetCurrentServiceSessionId() )
    v55 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v55 = 2147353472LL;
  if ( *(_BYTE *)v55 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v45 = (__int64)NtCurrentPeb()->SharedData + 550;
    v56 = v63;
    RtlpLogHeapContractEvent((int)v8, v62[0], v61[0], 16 * v8[24], v70, v63, (HANDLE)*(unsigned __int8 *)v45);
  }
  else
  {
    v56 = v63;
  }
  LODWORD(v13) = RtlGetCurrentServiceSessionId();
  v57 = 2147353482LL;
  if ( (_DWORD)v13 )
  {
    v13 = NtCurrentPeb();
    v58 = (__int64)v13->SharedData + 560;
  }
  else
  {
    v58 = 2147353482LL;
  }
  if ( *(_BYTE *)v58 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v57 = (__int64)NtCurrentPeb()->SharedData + 560;
    LODWORD(v13) = RtlpLogHeapContractEvent(
                     (int)v8,
                     v62[0],
                     v61[0],
                     16 * (unsigned int)v8[24],
                     v70,
                     v56,
                     (HANDLE)*(unsigned __int8 *)v57);
  }
  return (int)v13;
}
