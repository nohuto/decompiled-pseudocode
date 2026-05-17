/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x1800647F4
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x18001491C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegFree @ 0x180014AE0 (RtlpHpSegFree.c)
 * Callees:
 *     RtlpHpLfhBucketActivate @ 0x180061E48 (RtlpHpLfhBucketActivate.c)
 *     RtlpLfhBucketUsageUpdate @ 0x180064884 (RtlpLfhBucketUsageUpdate.c)
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
        RtlpHpLfhBucketActivate(a1, v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) == 0;
}
