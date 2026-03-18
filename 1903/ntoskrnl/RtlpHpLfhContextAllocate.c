/*
 * XREFs of RtlpHpLfhContextAllocate @ 0x140110CD0
 * Callers:
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeapInternal @ 0x140110BEC (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x1401110A8 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhBucketAllocate @ 0x14016F170 (RtlpHpLfhBucketAllocate.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RtlpHpLfhContextAllocate(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  size_t v4; // rdi
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v9; // rbp
  void *v10; // rax
  void *v11; // rbx

  v4 = a2;
  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v9 + 128) & 1) != 0 && !(unsigned int)RtlpHpLfhBucketUpdateStats(a1, v6, 1LL) )
    return -1LL;
  v10 = (void *)RtlpHpLfhBucketAllocate(a1, *(_QWORD *)(a1 + 8 * v9 + 128), (unsigned int)v4, a4);
  v11 = v10;
  if ( v10 && (a4 & 2) != 0 )
    memset(v10, 0, v4);
  return (__int64)v11;
}
