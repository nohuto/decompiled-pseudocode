/*
 * XREFs of RtlpHpLfhContextAllocate @ 0x140008C54
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14000981C (RtlpHpAllocateHeapInternal.c)
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x140008D00 (RtlpHpLfhBucketUpdateStats.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpHpLfhBucketAllocate @ 0x1402FD3E4 (RtlpHpLfhBucketAllocate.c)
 */

__int64 __fastcall RtlpHpLfhContextAllocate(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  size_t v4; // rdi
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v9; // rbp
  void *v10; // rbx
  void *v11; // rax

  v4 = a2;
  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v9 + 128) & 1) != 0 && !(unsigned int)RtlpHpLfhBucketUpdateStats(a1, v6, 1LL) )
    return -1LL;
  v11 = (void *)RtlpHpLfhBucketAllocate(a1, *(_QWORD *)(a1 + 8 * v9 + 128), (unsigned int)v4, a4);
  v10 = v11;
  if ( v11 && (a4 & 2) != 0 )
    memset(v11, 0, v4);
  return (__int64)v10;
}
