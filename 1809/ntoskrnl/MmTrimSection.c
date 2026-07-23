/*
 * XREFs of MmTrimSection @ 0x1400E9770
 * Callers:
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400E9670 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiComputeFlushRange @ 0x14002015C (MiComputeFlushRange.c)
 *     MiFlushRelease @ 0x1400792BC (MiFlushRelease.c)
 *     MiTrimSection @ 0x1400EAC24 (MiTrimSection.c)
 */

__int64 __fastcall MmTrimSection(__int64 a1, __int64 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  v4 = a4 & 1 | 0x20;
  if ( (a4 & 2) == 0 )
    v4 = a4 & 1;
  if ( a2 )
  {
    v7 = *a2;
    a2 = &v9;
    v9 = v7;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, (int)a2, a3, v4 >= 0x20, (__int64)v8) )
    return 0LL;
  v5 = MiTrimSection(v8, 0LL, v4);
  MiFlushRelease(v8[0], v8[3], v8[4]);
  return v5;
}
