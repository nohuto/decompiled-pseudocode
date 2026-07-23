/*
 * XREFs of RtlpInitializeHeapSegment @ 0x1402F2624
 * Callers:
 *     RtlpExtendHeap @ 0x1402F1BB0 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x14000C54C (RtlpHpHeapCheckCommitLimit.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 *     RtlpCreateUCREntry @ 0x1402F1498 (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x1402F28D4 (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        ULONG_PTR RegionSize)
{
  ULONG_PTR v8; // rbp
  __int64 v11; // r14
  char *v12; // r8
  int v13; // r13d
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  __int64 v22; // r8
  __int64 *v23; // rdi
  __int64 *v24; // rax

  v8 = RegionSize;
  if ( RegionSize - a6 > 0xFFFFF000 )
    return 0;
  v11 = a3 + 15;
  v12 = BaseAddress;
  v11 &= 0xFFFFFFFFFFFFFFF0uLL;
  v13 = (__int64)(RegionSize - a6) / 4096;
  v14 = v11 + a2;
  v15 = v11 >> 4;
  if ( v14 + 80 >= (unsigned __int64)BaseAddress )
  {
    if ( v14 + 80 < RegionSize )
    {
      v16 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      RegionSize = (v14 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize, v16, a1, (unsigned __int64 *)(a1 + 376))
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v12 = &BaseAddress[RegionSize];
        BaseAddress += RegionSize;
        goto LABEL_7;
      }
      ++*(_DWORD *)(a1 + 632);
    }
    return 0;
  }
LABEL_7:
  *(_WORD *)(a2 + 8) = v15;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  v17 = (__int64)(v8 - (_QWORD)v12) / 4096;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v14;
  *(_DWORD *)(a2 + 56) = v13;
  *(_DWORD *)(a2 + 80) = 0;
  v18 = (unsigned int)(v13 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v18;
  *(_QWORD *)(a1 + 576) += v18;
  *(_QWORD *)(a1 + 568) += v18;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v14 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 == a2 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((v14 - a2) >> 16) + 1;
    if ( v20 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v19, v14, a2, 0LL, 0LL);
      v12 = BaseAddress;
    }
  }
  *(_BYTE *)(v14 + 14) = v20;
  RtlpCreateUCREntry(a1, a2, (__int64)(v12 - 48), (unsigned int)((_DWORD)v17 << 12), v14, (__int64 *)&RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize )
    RtlpInsertFreeBlock(a1, v14, RegionSize);
  v22 = a1 + 288;
  v23 = (__int64 *)(a2 + 24);
  v24 = *(__int64 **)(a1 + 296);
  if ( *v24 == a1 + 288 )
  {
    *v23 = v22;
    v23[1] = (__int64)v24;
    *v24 = (__int64)v23;
    *(_QWORD *)(a1 + 296) = v23;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v22, 0, *v24, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
