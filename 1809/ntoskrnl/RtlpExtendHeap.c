/*
 * XREFs of RtlpExtendHeap @ 0x1402F1BB0
 * Callers:
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x14000C54C (RtlpHpHeapCheckCommitLimit.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0964 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x1402F1E50 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1402F2624 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1402F28D4 (RtlpInsertFreeBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // rcx
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  NTSTATUS v16; // edi
  __int64 v17; // rdx
  int v18; // r8d
  ULONG_PTR v20[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v23 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = RtlpFindAndCommitPages(a1, &v23);
  if ( v4 )
  {
    v23 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1, v4, &v23);
    RtlpInsertFreeBlock(a1, v5, v23);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v6 = *(_DWORD *)(v5 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v5 + 8) = v6;
      if ( HIBYTE(v6) != ((unsigned __int8)v6 ^ (unsigned __int8)(BYTE1(v6) ^ BYTE2(v6))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 112) & 2) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 160);
  v8 = a2 + 0x2000;
  BaseAddress = 0LL;
  v9 = a2 + 0x2000;
  if ( a2 + 0x2000 <= v7 )
    v9 = v7;
  v10 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v10 >= 0xFD0000 )
    v10 = 16580608LL;
  RegionSize = v10;
  v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( v11 >= 0 )
  {
    v12 = RegionSize;
  }
  else
  {
    while ( 1 )
    {
      v12 = RegionSize;
      if ( RegionSize == v8 )
        break;
      v13 = RegionSize >> 1;
      if ( RegionSize >> 1 < v8 )
        v13 = a2 + 0x2000;
      RegionSize = v13;
      v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
      if ( v11 >= 0 )
      {
        v12 = RegionSize;
        break;
      }
    }
    if ( v11 < 0 )
    {
      ++*(_DWORD *)(a1 + 632);
      return 0LL;
    }
  }
  *(_QWORD *)(a1 + 160) += v12;
  v14 = a2 + 4096;
  if ( (unsigned __int64)(a2 + 4096) <= *(_QWORD *)(a1 + 168) )
    v14 = *(_QWORD *)(a1 + 168);
  v15 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v20[0] = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v20[0], v15, a1, (unsigned __int64 *)(a1 + 376)) )
    goto LABEL_30;
  v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v20, 0x1000u, 4u);
  if ( v16 < 0 )
    goto LABEL_30;
  if ( !(unsigned __int8)RtlpInitializeHeapSegment(
                           a1,
                           (int)BaseAddress,
                           112,
                           (int)BaseAddress + (int)RegionSize - 4096,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v20[0],
                           (ULONG_PTR)BaseAddress + RegionSize - 4096) )
    v16 = -1073741801;
  if ( v16 < 0 )
  {
LABEL_30:
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v17 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v18 = *(_DWORD *)(v17 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v17 + 8) = v18;
    if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
      RtlpAnalyzeHeapFailure(a1, v17);
  }
  return *((_QWORD *)BaseAddress + 8);
}
