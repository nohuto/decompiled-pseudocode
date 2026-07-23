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
  ULONG_PTR v20; // rdi
  int v21; // edx
  ULONG_PTR v22; // r15
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
  SIZE_T v41; // rsi
  SIZE_T v42; // r14
  unsigned __int64 v43; // rax
  ULONG_PTR v44; // rdi
  ULONG Protect; // esi
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // r9d
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // edi
  int v57; // ecx
  unsigned __int16 v58; // ax
  int v59; // eax
  int v60; // edx
  __int64 v61; // r14
  ULONG_PTR v62; // r8
  __int64 *v63; // r15
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 *v66; // rdx
  unsigned __int64 v67; // rcx
  __int64 *v68; // rax
  int v69; // r9d
  char v70; // al
  SIZE_T v71; // r14
  SIZE_T v72; // r12
  _DWORD *v73; // r8
  unsigned __int64 v74; // rdx
  ULONG_PTR v75; // rcx
  int AllocationType; // [rsp+20h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR v78; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v79; // [rsp+50h] [rbp-28h]
  int v80; // [rsp+60h] [rbp-18h]
  char v81; // [rsp+B8h] [rbp+40h]
  ULONG_PTR v82; // [rsp+C0h] [rbp+48h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+50h] BYREF

  v82 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v82);
  v6 = v5;
  if ( !v5 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v43 = *(_QWORD *)(a1 + 160);
      v44 = a2 + 0x2000;
      BaseAddress = 0LL;
      if ( a2 + 0x2000 > v43 )
        v43 = a2 + 0x2000;
      if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v43 >= 0x3F4000 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
      RegionSize = (v43 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      if ( RegionSize >= 0xFD0000 )
        RegionSize = 16580608LL;
      Protect = RtlpGetHeapProtection(a1, 1LL);
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
      {
        while ( RegionSize != v44 )
        {
          v75 = RegionSize >> 1;
          if ( RegionSize >> 1 < v44 )
            v75 = a2 + 0x2000;
          RegionSize = v75;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) >= 0 )
            goto LABEL_80;
        }
        ++*(_DWORD *)(a1 + 632);
      }
      else
      {
LABEL_80:
        *(_QWORD *)(a1 + 160) += RegionSize;
        v46 = a2 + 4096;
        if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
          v46 = *(_QWORD *)(a1 + 168);
        v47 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
        v78 = (v46 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v78, v47, a1, a1 + 376)
          && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v78, 0x1000u, Protect) >= 0
          && (unsigned __int8)RtlpInitializeHeapSegment(
                                a1,
                                (int)BaseAddress,
                                112,
                                v49,
                                2,
                                (__int64)BaseAddress,
                                (char *)BaseAddress + v78,
                                (__int64)BaseAddress + RegionSize - 4096) )
        {
          v50 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v51 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v51 = 2147353472LL;
          if ( *(_BYTE *)v51 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapCommit(a1, BaseAddress, v78, 4LL);
            if ( RtlGetCurrentServiceSessionId() )
              v50 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(
              a1,
              *((_QWORD *)BaseAddress + 8),
              v78,
              16 * *(_QWORD *)(a1 + 192),
              (HANDLE)*(unsigned __int8 *)v50);
          }
          v52 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v53 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v53 = 2147353482LL;
          if ( *(_BYTE *)v53 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v52 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(
              a1,
              *((_QWORD *)BaseAddress + 8),
              v78,
              16 * *(_QWORD *)(a1 + 192),
              (HANDLE)*(unsigned __int8 *)v52);
          }
          if ( RtlGetCurrentServiceSessionId() )
            v54 = (__int64)NtCurrentPeb()->SharedData + 558;
          else
            v54 = 2147353480LL;
          if ( *(_BYTE *)v54 )
            RtlpHeapLogRangeReserve(a1, BaseAddress, RegionSize);
          v55 = *((_QWORD *)BaseAddress + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v56 = *(_DWORD *)(v55 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v55 + 8) = v56;
            if ( HIBYTE(v56) != ((unsigned __int8)v56 ^ (unsigned __int8)(BYTE1(v56) ^ BYTE2(v56))) )
              RtlpAnalyzeHeapFailure(a1, v55);
          }
          return *((_QWORD *)BaseAddress + 8);
        }
        RtlpSecMemFreeVirtualMemory(v48, &BaseAddress, &RegionSize, 0x8000LL);
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
  v82 >>= 4;
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
        AllocationType = v17;
        LOBYTE(v17) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v14, v17, v8 + 16, AllocationType, *(unsigned __int16 *)(v8 + 8));
      }
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v18 = *(_BYTE *)(v8 + 10);
        if ( (v18 & 4) != 0 )
        {
          v41 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
          if ( (v18 & 2) != 0 && v41 > 4 )
            v41 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
          v42 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v41, 0xFEEEFEEE);
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
        v82 += v19;
        *(_WORD *)(v8 + 8) = v82;
        *(_WORD *)(v8 + 16 * v82 + 12) = v82 ^ *(_WORD *)(a1 + 140);
      }
      else
      {
        RtlpDeCommitFreeBlock(a1);
      }
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v8 + 16, v12, v13, 0LL);
    }
  }
  v20 = v6 + 16 * v82;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v21 = *(_DWORD *)(v20 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v21) != ((unsigned __int8)v21 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v20 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v21))) )
      RtlpLogHeapFailure(3, a1, v6 + 16 * v82, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v20 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v60 = *(_DWORD *)(v20 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v20 + 8) = v60;
      if ( HIBYTE(v60) != ((unsigned __int8)v60 ^ (unsigned __int8)(BYTE1(v60) ^ BYTE2(v60))) )
        RtlpAnalyzeHeapFailure(a1, v20);
    }
    v61 = *(_QWORD *)(v20 + 16);
    v62 = v20 + 16;
    v63 = *(__int64 **)(v20 + 24);
    v64 = *(_QWORD *)(v61 + 8);
    v65 = *v63;
    if ( *v63 == v64 && v65 == v62 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v20 + 8);
      v66 = *(__int64 **)(a1 + 312);
      if ( v66 )
      {
        v67 = *(unsigned __int16 *)(v20 + 8);
        if ( v67 < *((unsigned int *)v66 + 2) )
        {
LABEL_121:
          v69 = *(unsigned __int16 *)(v20 + 8);
        }
        else
        {
          while ( 1 )
          {
            v68 = (__int64 *)*v66;
            if ( !*v66 )
              break;
            v66 = (__int64 *)*v66;
            if ( v67 < *((unsigned int *)v68 + 2) )
              goto LABEL_121;
          }
          v69 = *((_DWORD *)v66 + 2) - 1;
        }
        LOBYTE(v62) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v66, v62, v20 + 16, v69, *(unsigned __int16 *)(v20 + 8));
      }
      *v63 = v61;
      *(_QWORD *)(v61 + 8) = v63;
      if ( (*(_BYTE *)(v20 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v70 = *(_BYTE *)(v20 + 10);
        if ( (v70 & 4) != 0 )
        {
          v71 = 16LL * *(unsigned __int16 *)(v20 + 8) - 32;
          if ( (v70 & 2) != 0 && v71 > 4 )
            v71 = 16LL * *(unsigned __int16 *)(v20 + 8) - 36;
          v72 = RtlCompareMemoryUlong((PVOID)(v20 + 32), v71, 0xFEEEFEEE);
          if ( v72 != v71 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v20,
              (const void *)(v20 + 32 + v72));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v6 + 10) = 0;
        *(_BYTE *)(v6 + 15) = 0;
        v82 += *(unsigned __int16 *)(v20 + 8);
        *(_WORD *)(v6 + 8) = v82;
        *(_WORD *)(16 * v82 + v6 + 12) = v82 ^ *(_WORD *)(a1 + 140);
        break;
      }
      RtlpDeCommitFreeBlock(a1);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v62, v64, v65, 0LL);
    }
  }
  v22 = v82;
  v23 = v6;
  if ( v82 )
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
    v81 = v27;
    v79 = v26;
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
        v73 = (_DWORD *)(v23 + 32);
        v74 = (16 * (unsigned __int64)v29 - 32) >> 2;
        if ( v74 )
        {
          if ( ((unsigned __int8)v73 & 4) != 0 )
          {
            --v74;
            *v73 = -17891602;
            v73 = (_DWORD *)(v23 + 36);
          }
          memset64(v73, 0xFEEEFEEEFEEEFEEEuLL, v74 >> 1);
          if ( (v74 & 1) != 0 )
            v73[v74 - 1] = -17891602;
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
        v57 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v57 )
          {
            v59 = *((_DWORD *)Entry - 2);
            v57 = *(_DWORD *)(a1 + 124);
            v80 = v59;
            if ( (v59 & v57) != 0 )
              v80 = *(_DWORD *)(a1 + 136) ^ v59;
            v58 = v80;
          }
          else
          {
            v58 = *((_WORD *)Entry - 4);
          }
          if ( v29 <= (unsigned __int64)v58 )
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
      v26 = v79;
      v22 -= v29;
      v24 = v29;
      v23 += 16LL * v29;
      if ( v23 >= *(_QWORD *)(v79 + 72) )
        break;
      v27 = v81;
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
