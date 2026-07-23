/*
 * XREFs of RtlpPushPageDescriptor @ 0x1800F47D8
 * Callers:
 *     RtlpLeakCallbackRoutine @ 0x1800F4660 (RtlpLeakCallbackRoutine.c)
 *     RtlpReadProcessHeaps @ 0x1800F4940 (RtlpReadProcessHeaps.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpGetBlockInfo @ 0x1800F4428 (RtlpGetBlockInfo.c)
 *     RtlpSetBlockInfo @ 0x1800F4D74 (RtlpSetBlockInfo.c)
 */

char __fastcall RtlpPushPageDescriptor(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  const void *BlockInfo; // rax
  _DWORD *Heap; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  const void *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 *v14; // rcx

  v3 = a1 << 12;
  BlockInfo = (const void *)RtlpGetBlockInfo((_QWORD *)RtlpProcessMemoryMap, a1 << 12);
  if ( BlockInfo )
  {
    DbgPrint("Conflicting descriptors %p\n", BlockInfo);
    return 0;
  }
  Heap = RtlAllocateHeap(RtlpLeakHeap, 0, 40LL * (RtlpLDNumBlocks - 1) + 64);
  v7 = Heap;
  if ( !Heap )
  {
    DbgPrint("Unable to allocate page descriptor\n");
    return 0;
  }
  v8 = RtlpLDNumBlocks;
  v9 = (__int64)(Heap + 6);
  v10 = RtlpCrtHeapAddress;
  v11 = RtlpTempBlocks;
  *Heap = 2;
  Heap[4] = v8;
  *((_QWORD *)Heap + 1) = v10;
  memmove(Heap + 6, v11, 40 * v8);
  if ( v10 != RtlpLeakHeapAddress )
  {
    v12 = 0;
    if ( (int)v8 > 0 )
    {
      v13 = RtlpPreviousStartAddress;
      do
      {
        *(_QWORD *)(v9 + 8) = v9;
        *(_QWORD *)v9 = v9;
        if ( *(_QWORD *)(v9 + 16) != v13 )
        {
          v14 = (__int64 *)qword_180163BC8;
          if ( *(__int64 **)qword_180163BC8 != &RtlpLeakList )
            __fastfail(3u);
          *(_QWORD *)v9 = &RtlpLeakList;
          *(_QWORD *)(v9 + 8) = v14;
          *v14 = v9;
          qword_180163BC8 = v9;
          v13 = *(_QWORD *)(v9 + 16);
          *(_DWORD *)(v9 + 32) = 0;
          RtlpPreviousStartAddress = v13;
        }
        ++v12;
        v9 += 40LL;
      }
      while ( v12 < (int)v8 );
    }
  }
  RtlpSetBlockInfo(RtlpProcessMemoryMap, v3, a2 << 12, v7);
  return 1;
}
