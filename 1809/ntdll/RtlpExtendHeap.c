/*
 * XREFs of RtlpExtendHeap @ 0x18001CBEC
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180060BEC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x18008C1C4 (RtlpCoalesceHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x180103F14 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180105DCC (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(unsigned __int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  int v7; // edx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int HeapProtection; // r15d
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  int v20; // r9d
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+40h] [rbp-10h] BYREF
  __int64 v33; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v35; // [rsp+A8h] [rbp+58h] BYREF

  v35 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v35);
  if ( v5 )
  {
    v35 >>= 4;
    v6 = RtlpCoalesceFreeBlocks(a1, v5, &v35, 0);
    RtlpInsertFreeBlock(a1, v6, v35);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v6 + 8) = v7;
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_37;
  v33 = 0LL;
  v9 = a2 + 0x2000;
  v10 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v10 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v11 = *(_QWORD *)(a1 + 408);
  else
    v11 = 0LL;
  if ( !v11 && v10 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v12 = (v10 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v12 >= 0xFD0000 )
    v12 = 16580608LL;
  v34 = v12;
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  v14 = ZwAllocateVirtualMemory(-1LL, &v33, 0LL, &v34, 0x2000, HeapProtection);
  if ( v14 < 0 )
  {
    while ( 1 )
    {
      v15 = v34;
      if ( v34 == v9 )
        break;
      v30 = v34 >> 1;
      if ( v34 >> 1 < v9 )
        v30 = a2 + 0x2000;
      v34 = v30;
      v14 = ZwAllocateVirtualMemory(-1LL, &v33, 0LL, &v34, 0x2000, HeapProtection);
      if ( v14 >= 0 )
      {
        v15 = v34;
        break;
      }
    }
    if ( v14 < 0 )
    {
      ++*(_DWORD *)(a1 + 632);
      goto LABEL_37;
    }
  }
  else
  {
    v15 = v34;
  }
  *(_QWORD *)(a1 + 160) += v15;
  v16 = a2 + 4096;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v16 = *(_QWORD *)(a1 + 168);
  v17 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v32 = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v32, v17, a1, a1 + 376) )
  {
    v19 = ZwAllocateVirtualMemory(-1LL, &v33, 0LL, &v32, 4096, HeapProtection);
    if ( v19 >= 0 )
    {
      v21 = RtlpInitializeHeapSegment(a1, v33, 112, v20, 2, v33, v33 + v32, v33 + v34 - 4096);
      v18 = 3221225495LL;
      if ( !v21 )
        v19 = -1073741801;
      if ( v19 >= 0 )
      {
        v22 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v23 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v23 = 2147353472LL;
        if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapCommit(a1, v33, v32, 4LL);
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v22 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v33 + 64), v32, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v22);
        }
        v24 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v25 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v25 = 2147353482LL;
        if ( *(_BYTE *)v25 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v24 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v33 + 64), v32, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v24);
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v27 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v27 = 2147353480LL;
        if ( *(_BYTE *)v27 )
          RtlpHeapLogRangeReserve(a1, v33, v34, v26);
        v28 = *(_QWORD *)(v33 + 64);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v29 = *(_DWORD *)(v28 + 8) ^ *(_DWORD *)(a1 + 136);
          *(_DWORD *)(v28 + 8) = v29;
          if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
            RtlpAnalyzeHeapFailure(a1, v28);
        }
        return *(_QWORD *)(v33 + 64);
      }
    }
  }
  RtlpSecMemFreeVirtualMemory(v18, &v33, &v34, 0x8000LL);
LABEL_37:
  if ( *(char *)(a1 + 112) < 0 )
  {
    v31 = RtlpCoalesceHeap(a1);
    v4 = (_BYTE *)v31;
    if ( v31 )
    {
      if ( *(unsigned __int16 *)(v31 + 8) >= a2 )
        return v31;
    }
  }
  v6 = 0LL;
  if ( v4 && *(_DWORD *)(a1 + 124) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  return v6;
}
