/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x1401110A8
 * Callers:
 *     RtlpHpSegFree @ 0x14001D4C4 (RtlpHpSegFree.c)
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     RtlpHpLfhContextAllocate @ 0x140110CD0 (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     RtlpLfhBucketUsageUpdate @ 0x140111138 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLfhBucketActivate @ 0x1401115EC (RtlpHpLfhBucketActivate.c)
 */

_BOOL8 __fastcall RtlpHpLfhBucketUpdateStats(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v6 = RtlpLfhBucketIndexMap[v3];
  if ( (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) != 0 )
  {
    v7 = RtlpLfhBucketUsageUpdate(a1, RtlpLfhBucketIndexMap[v3]);
    if ( a3 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
        RtlpHpLfhBucketActivate(a1, (unsigned int)v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) == 0;
}
