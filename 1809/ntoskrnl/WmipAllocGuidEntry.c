/*
 * XREFs of WmipAllocGuidEntry @ 0x140751480
 * Callers:
 *     WmipOpenBlock @ 0x140612928 (WmipOpenBlock.c)
 *     WmipLinkDataSourceToList @ 0x1407094C4 (WmipLinkDataSourceToList.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipAllocEntry @ 0x14070964C (WmipAllocEntry.c)
 */

_QWORD *WmipAllocGuidEntry()
{
  _QWORD *v0; // rbx
  PVOID PoolWithTag; // rdi
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  v0 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70696D57u);
  if ( PoolWithTag )
  {
    v2 = WmipAllocEntry((__int64)&WmipGEChunkInfo);
    v0 = v2;
    if ( v2 )
    {
      v2[12] = PoolWithTag;
      v2[8] = v2 + 7;
      v2[7] = v2 + 7;
      v2[6] = v2 + 5;
      v2[5] = v2 + 5;
      v2[18] = v2 + 17;
      v2[17] = v2 + 17;
      v3 = (_QWORD *)v2[12];
      v3[3] = 0LL;
      PoolWithTag = 0LL;
      v3[5] = WmipLegacyEtwWorker;
      v3[6] = v0;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x70696D57u);
  }
  return v0;
}
