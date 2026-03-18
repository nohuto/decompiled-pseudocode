/*
 * XREFs of ExpSaInitialize @ 0x140199FB8
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A038D0 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400048C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeGetCurrentNodeNumber @ 0x140108FA0 (KeGetCurrentNodeNumber.c)
 *     ExAllocatePoolWithTagFromNode @ 0x14013CB90 (ExAllocatePoolWithTagFromNode.c)
 *     ExpSaAllocatorInitialize @ 0x14019A180 (ExpSaAllocatorInitialize.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

char ExpSaInitialize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax
  ULONG MaximumProcessorCount; // eax
  SIZE_T v3; // rdi
  ULONG v4; // ebp
  PVOID v5; // rax
  ULONG v6; // r14d
  ULONG v7; // edi
  __int64 v8; // rsi
  USHORT v9; // ax
  void *PoolWithTagFromNode; // rcx
  __int64 Prcb; // rdx
  PVOID v12; // rax
  PVOID v13; // rax

  v0 = 0;
  ExSaPageGroupDescriptorArray = 0LL;
  ExSaPageArrays = 0LL;
  ExSaNonPagedSlotAllocator = 0LL;
  ExSaPagedSlotAllocator = 0LL;
  ExSaPageGroupDescriptorArrayLock = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x61537845u);
  ExSaPageGroupDescriptorArray = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v3 = 8LL * MaximumProcessorCount;
    v4 = MaximumProcessorCount;
    v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x61537845u);
    ExSaPageArrays = (__int64)v5;
    if ( v5 )
    {
      memset(v5, 0, v3);
      v6 = KeNumberProcessors_0;
      v7 = 0;
      if ( v4 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          v9 = v7 >= v6 ? KeGetCurrentNodeNumber() : *(_WORD *)(*(_QWORD *)(KeGetPrcb(v7) + 192) + 146LL);
          PoolWithTagFromNode = (void *)ExAllocatePoolWithTagFromNode(0x200u, 0x80uLL, 0x61537845u, v9 | 0x80000000);
          *(_QWORD *)(v8 + ExSaPageArrays) = PoolWithTagFromNode;
          if ( !PoolWithTagFromNode )
            break;
          memset(PoolWithTagFromNode, 0, 0x80uLL);
          Prcb = KeGetPrcb(v7);
          if ( Prcb )
            *(_QWORD *)(Prcb + 24624) = *(_QWORD *)(v8 + ExSaPageArrays);
          ++v7;
          v8 += 8LL;
          if ( v7 >= v4 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x61537845u);
        ExSaNonPagedSlotAllocator = (__int64)v12;
        if ( v12 )
        {
          ExpSaAllocatorInitialize(v12, 0LL);
          v13 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x61537845u);
          ExSaPagedSlotAllocator = (ULONG_PTR)v13;
          if ( v13 )
          {
            ExpSaAllocatorInitialize(v13, 1LL);
            return 1;
          }
        }
      }
    }
  }
  return v0;
}
