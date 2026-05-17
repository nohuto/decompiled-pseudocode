/*
 * XREFs of RtlpExtendHeap @ 0x18003F020
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpFindAndCommitPages @ 0x18003F9C0 (RtlpFindAndCommitPages.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindEntry @ 0x1800466AC (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x180046B74 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180047014 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180047214 (RtlpCommitBlock.c)
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047C74 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180048120 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeHeapSegment @ 0x180048C68 (RtlpInitializeHeapSegment.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800A16B0 (RtlCompareMemoryUlong.c)
 *     RtlpCoalesceHeap @ 0x1800EFE6C (RtlpCoalesceHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1801014E0 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeReserve @ 0x1801016D8 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x18010321C (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1801034A4 (RtlpLogHeapExtendEvent.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpExtendHeap(unsigned __int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // r14
  __int64 *v11; // r15
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 *v16; // rax
  int v17; // r8d
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  int v21; // edx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int16 v24; // di
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rcx
  char v27; // al
  _QWORD *v28; // r9
  unsigned __int16 v29; // r12
  __int64 v30; // rdx
  char v31; // di
  _QWORD *Entry; // r8
  __int64 *v33; // rax
  _QWORD *v34; // rdi
  __int64 *v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 *v37; // rax
  int v38; // eax
  int v39; // edi
  __int64 result; // rax
  unsigned __int64 v41; // rsi
  __int64 v42; // r14
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdi
  int HeapProtection; // esi
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // r9d
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v57; // edi
  int v58; // ecx
  unsigned __int16 v59; // ax
  int v60; // eax
  int v61; // edx
  __int64 v62; // r14
  unsigned __int64 v63; // r8
  __int64 *v64; // r15
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 *v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 *v69; // rax
  int v70; // r9d
  char v71; // al
  unsigned __int64 v72; // r14
  __int64 v73; // r12
  __int64 v74; // r9
  _DWORD *v75; // r8
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // [rsp+20h] [rbp-58h]
  unsigned __int64 v80; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v81; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v82; // [rsp+50h] [rbp-28h]
  int v83; // [rsp+60h] [rbp-18h]
  char v84; // [rsp+B8h] [rbp+40h]
  unsigned __int64 v85; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v86; // [rsp+C8h] [rbp+50h] BYREF

  v85 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v85);
  v6 = v5;
  if ( !v5 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v44 = *(_QWORD *)(a1 + 160);
      v45 = a2 + 0x2000;
      v86 = 0LL;
      if ( a2 + 0x2000 > v44 )
        v44 = a2 + 0x2000;
      if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v44 >= 0x3F4000 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
      v80 = (v44 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      if ( v80 >= 0xFD0000 )
        v80 = 16580608LL;
      HeapProtection = RtlpGetHeapProtection(a1, 1LL);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v86, 0LL, &v80, 0x2000, HeapProtection) < 0 )
      {
        while ( v80 != v45 )
        {
          v77 = v80 >> 1;
          if ( v80 >> 1 < v45 )
            v77 = a2 + 0x2000;
          v80 = v77;
          if ( (int)ZwAllocateVirtualMemory(-1LL, &v86, 0LL, &v80, 0x2000, HeapProtection) >= 0 )
            goto LABEL_80;
        }
        ++*(_DWORD *)(a1 + 632);
      }
      else
      {
LABEL_80:
        *(_QWORD *)(a1 + 160) += v80;
        v47 = a2 + 4096;
        if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
          v47 = *(_QWORD *)(a1 + 168);
        v48 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
        v81 = (v47 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v81, v48, a1, a1 + 376)
          && (int)ZwAllocateVirtualMemory(-1LL, &v86, 0LL, &v81, 4096, HeapProtection) >= 0
          && (unsigned __int8)RtlpInitializeHeapSegment(a1, v86, 112, v50, 2, v86, v86 + v81, v86 + v80 - 4096) )
        {
          v51 = 2147353472LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v49) )
            v52 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v52 = 2147353472LL;
          if ( *(_BYTE *)v52 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapCommit(a1, v86, v81, 4LL);
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v78) )
              v51 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v86 + 64), v81, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v51);
          }
          v53 = 2147353482LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v52) )
            v54 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v54 = 2147353482LL;
          if ( *(_BYTE *)v54 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v54) )
              v53 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v86 + 64), v81, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v53);
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v54) )
            v55 = (__int64)NtCurrentPeb()->SharedData + 558;
          else
            v55 = 2147353480LL;
          if ( *(_BYTE *)v55 )
            RtlpHeapLogRangeReserve(a1, v86, v80);
          v56 = *(_QWORD *)(v86 + 64);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v57 = *(_DWORD *)(v56 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v56 + 8) = v57;
            if ( HIBYTE(v57) != ((unsigned __int8)v57 ^ (unsigned __int8)(BYTE1(v57) ^ BYTE2(v57))) )
              RtlpAnalyzeHeapFailure(a1, v56);
          }
          return *(_QWORD *)(v86 + 64);
        }
        RtlpSecMemFreeVirtualMemory(v49, &v86, &v80, 0x8000LL);
      }
    }
    if ( *(char *)(a1 + 112) >= 0
      || (result = RtlpCoalesceHeap(a1), (v4 = (_BYTE *)result) == 0LL)
      || *(unsigned __int16 *)(result + 8) < a2 )
    {
      if ( v4 && *(_DWORD *)(a1 + 124) )
      {
        v4[11] = v4[8] ^ v4[9] ^ v4[10];
        *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      return 0LL;
    }
    return result;
  }
  v85 >>= 4;
  v7 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v5 + 12));
  v8 = v5 - v7;
  if ( v5 - v7 != v5
    && ((*(_BYTE *)(v8 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9 = *(_DWORD *)(v8 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v8 + 8) = v9;
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
        RtlpAnalyzeHeapFailure(a1, v8);
    }
    v10 = *(_QWORD *)(v8 + 16);
    v11 = *(__int64 **)(v8 + 24);
    v12 = *(_QWORD *)(v10 + 8);
    v13 = *v11;
    if ( *v11 == v12 && v13 == v8 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
      v14 = *(__int64 **)(a1 + 312);
      if ( v14 )
      {
        v15 = *(unsigned __int16 *)(v8 + 8);
        if ( v15 < *((unsigned int *)v14 + 2) )
        {
LABEL_13:
          v17 = *(unsigned __int16 *)(v8 + 8);
        }
        else
        {
          while ( 1 )
          {
            v16 = (__int64 *)*v14;
            if ( !*v14 )
              break;
            v14 = (__int64 *)*v14;
            if ( v15 < *((unsigned int *)v16 + 2) )
              goto LABEL_13;
          }
          v17 = *((_DWORD *)v14 + 2) - 1;
        }
        v79 = v17;
        LOBYTE(v17) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v14, v17, v8 + 16, v79, *(unsigned __int16 *)(v8 + 8));
      }
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v8) )
      {
        v18 = *(_BYTE *)(v8 + 10);
        if ( (v18 & 4) != 0 )
        {
          v41 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
          if ( (v18 & 2) != 0 && v41 > 4 )
            v41 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
          v42 = RtlCompareMemoryUlong(v8 + 32, v41, 4277075694LL);
          if ( v42 != v41 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v8,
              (const void *)(v42 + v8 + 32));
            RtlpBreakPointHeap();
          }
        }
        v19 = *(unsigned __int16 *)(v8 + 8);
        v6 = v8;
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        v85 += v19;
        *(_WORD *)(v8 + 8) = v85;
        *(_WORD *)(v8 + 16 * v85 + 12) = v85 ^ *(_WORD *)(a1 + 140);
      }
      else
      {
        LOBYTE(v43) = 1;
        RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), v43);
      }
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v8 + 16, v12, v13, 0LL);
    }
  }
  v20 = v6 + 16 * v85;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v21 = *(_DWORD *)(v20 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v21) != ((unsigned __int8)v21 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v20 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v21))) )
      RtlpLogHeapFailure(3, a1, v6 + 16 * v85, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v20 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v61 = *(_DWORD *)(v20 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v20 + 8) = v61;
      if ( HIBYTE(v61) != ((unsigned __int8)v61 ^ (unsigned __int8)(BYTE1(v61) ^ BYTE2(v61))) )
        RtlpAnalyzeHeapFailure(a1, v20);
    }
    v62 = *(_QWORD *)(v20 + 16);
    v63 = v20 + 16;
    v64 = *(__int64 **)(v20 + 24);
    v65 = *(_QWORD *)(v62 + 8);
    v66 = *v64;
    if ( *v64 == v65 && v66 == v63 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v20 + 8);
      v67 = *(__int64 **)(a1 + 312);
      if ( v67 )
      {
        v68 = *(unsigned __int16 *)(v20 + 8);
        if ( v68 < *((unsigned int *)v67 + 2) )
        {
LABEL_121:
          v70 = *(unsigned __int16 *)(v20 + 8);
        }
        else
        {
          while ( 1 )
          {
            v69 = (__int64 *)*v67;
            if ( !*v67 )
              break;
            v67 = (__int64 *)*v67;
            if ( v68 < *((unsigned int *)v69 + 2) )
              goto LABEL_121;
          }
          v70 = *((_DWORD *)v67 + 2) - 1;
        }
        LOBYTE(v63) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v67, v63, v20 + 16, v70, *(unsigned __int16 *)(v20 + 8));
      }
      *v64 = v62;
      *(_QWORD *)(v62 + 8) = v64;
      if ( (*(_BYTE *)(v20 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v20) )
      {
        v71 = *(_BYTE *)(v20 + 10);
        if ( (v71 & 4) != 0 )
        {
          v72 = 16LL * *(unsigned __int16 *)(v20 + 8) - 32;
          if ( (v71 & 2) != 0 && v72 > 4 )
            v72 = 16LL * *(unsigned __int16 *)(v20 + 8) - 36;
          v73 = RtlCompareMemoryUlong(v20 + 32, v72, 4277075694LL);
          if ( v73 != v72 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v20,
              (const void *)(v20 + 32 + v73));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v6 + 10) = 0;
        *(_BYTE *)(v6 + 15) = 0;
        v85 += *(unsigned __int16 *)(v20 + 8);
        *(_WORD *)(v6 + 8) = v85;
        *(_WORD *)(16 * v85 + v6 + 12) = v85 ^ *(_WORD *)(a1 + 140);
        break;
      }
      LOBYTE(v74) = 1;
      RtlpDeCommitFreeBlock(a1, v20, *(unsigned __int16 *)(v20 + 8), v74);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v63, v65, v66, 0LL);
    }
  }
  v22 = v85;
  v23 = v6;
  if ( v85 )
  {
    v24 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v6 + 12);
    if ( !v24
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(v6 + 10) & 8) == 0
      && ((v6 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v6 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
      RtlpHeapHandleError(1LL);
    }
    v25 = *(_BYTE *)(v6 + 14);
    if ( v25 )
      v26 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v25 << 16) + 0x10000;
    else
      v26 = a1;
    v27 = *(_BYTE *)(v6 + 10);
    v28 = (_QWORD *)(a1 + 336);
    v84 = v27;
    v82 = v26;
    while ( 1 )
    {
      if ( v22 > 0xFF00 )
      {
        v29 = -256;
        if ( v22 == 65281 )
          v29 = -272;
        v27 = 0;
      }
      else
      {
        v29 = v22;
      }
      *(_BYTE *)(v23 + 10) = v27;
      *(_WORD *)(v23 + 12) = v24 ^ *(_WORD *)(a1 + 140);
      v30 = *(_QWORD *)(v26 + 40);
      if ( v30 == v26 )
      {
        v31 = 0;
      }
      else
      {
        v31 = ((unsigned int)(v23 - v26) >> 16) + 1;
        if ( ((v23 - v26) >> 16) + 1 >= 0xFE )
        {
          RtlpLogHeapFailure(3, v30, v23, v26, 0LL, 0LL);
          v28 = (_QWORD *)(a1 + 336);
        }
      }
      *(_BYTE *)(v23 + 10) &= 0xF0u;
      *(_BYTE *)(v23 + 14) = v31;
      *(_WORD *)(v23 + 8) = v29;
      *(_BYTE *)(v23 + 11) = 0;
      *(_BYTE *)(v23 + 15) = 0;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
      {
        v75 = (_DWORD *)(v23 + 32);
        v76 = (16 * (unsigned __int64)v29 - 32) >> 2;
        if ( v76 )
        {
          if ( ((unsigned __int8)v75 & 4) != 0 )
          {
            --v76;
            *v75 = -17891602;
            v75 = (_DWORD *)(v23 + 36);
          }
          memset64(v75, 0xFEEEFEEEFEEEFEEEuLL, v76 >> 1);
          if ( (v76 & 1) != 0 )
            v75[v76 - 1] = -17891602;
        }
        *(_BYTE *)(v23 + 10) |= 4u;
      }
      if ( *(_QWORD *)(a1 + 312) )
      {
        Entry = (_QWORD *)RtlpFindEntry(a1, v29);
        v28 = (_QWORD *)(a1 + 336);
      }
      else
      {
        Entry = (_QWORD *)*v28;
      }
      if ( v28 != Entry )
      {
        v58 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v58 )
          {
            v60 = *((_DWORD *)Entry - 2);
            v58 = *(_DWORD *)(a1 + 124);
            v83 = v60;
            if ( (v60 & v58) != 0 )
              v83 = *(_DWORD *)(a1 + 136) ^ v60;
            v59 = v83;
          }
          else
          {
            v59 = *((_WORD *)Entry - 4);
          }
          if ( v29 <= (unsigned __int64)v59 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        while ( v28 != Entry );
      }
      v33 = (__int64 *)Entry[1];
      v34 = (_QWORD *)(v23 + 16);
      if ( (_QWORD *)*v33 == Entry )
      {
        *v34 = Entry;
        *(_QWORD *)(v23 + 24) = v33;
        *v33 = (__int64)v34;
        Entry[1] = v34;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v33, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v23 + 8);
      v35 = *(__int64 **)(a1 + 312);
      if ( v35 )
      {
        v36 = *(unsigned __int16 *)(v23 + 8);
        if ( v36 < *((unsigned int *)v35 + 2) )
        {
LABEL_41:
          v38 = *(unsigned __int16 *)(v23 + 8);
        }
        else
        {
          while ( 1 )
          {
            v37 = (__int64 *)*v35;
            if ( !*v35 )
              break;
            v35 = (__int64 *)*v35;
            if ( v36 < *((unsigned int *)v37 + 2) )
              goto LABEL_41;
          }
          v38 = *((_DWORD *)v35 + 2) - 1;
        }
        LOBYTE(Entry) = 1;
        RtlpHeapAddListEntry(a1, (_DWORD)v35, (_DWORD)Entry, v23 + 16, v38, *(unsigned __int16 *)(v23 + 8));
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v23 + 11) = *(_BYTE *)(v23 + 8) ^ *(_BYTE *)(v23 + 9) ^ *(_BYTE *)(v23 + 10);
        *(_DWORD *)(v23 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v26 = v82;
      v22 -= v29;
      v24 = v29;
      v23 += 16LL * v29;
      if ( v23 >= *(_QWORD *)(v82 + 72) )
        break;
      v27 = v84;
      v28 = (_QWORD *)(a1 + 336);
      if ( !v22 )
      {
        *(_WORD *)(v23 + 12) = v29 ^ *(_WORD *)(a1 + 140);
        if ( !v29 && RtlpHeapErrorHandlerThreshold >= 1 && ((v23 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v23 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, Entry, v28);
          else
            DbgPrint("HEAP: ", 65280LL, Entry, v28);
          DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
          RtlpHeapHandleError(1LL);
        }
        break;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v39 = *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v6 + 8) = v39;
    if ( HIBYTE(v39) != ((unsigned __int8)v39 ^ (unsigned __int8)(BYTE1(v39) ^ BYTE2(v39))) )
      RtlpAnalyzeHeapFailure(a1, v6);
  }
  return v6;
}
