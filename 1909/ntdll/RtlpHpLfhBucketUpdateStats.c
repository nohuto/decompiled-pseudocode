/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x180048814
 * Callers:
 *     RtlpHpSegFree @ 0x180044D74 (RtlpHpSegFree.c)
 *     RtlpHpLfhContextAllocate @ 0x180046108 (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     RtlpLfhBucketUsageUpdate @ 0x1800488A4 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLfhBucketActivate @ 0x18004B050 (RtlpHpLfhBucketActivate.c)
 */

_BOOL8 __fastcall RtlpHpLfhBucketUpdateStats(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  int v4; // esi
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v4 = a3;
  v6 = RtlpLfhBucketIndexMap[v3];
  if ( (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) != 0 )
  {
    v7 = RtlpLfhBucketUsageUpdate(a1, RtlpLfhBucketIndexMap[v3], a3);
    if ( v4 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
        RtlpHpLfhBucketActivate(a1, (unsigned int)v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) == 0;
}
