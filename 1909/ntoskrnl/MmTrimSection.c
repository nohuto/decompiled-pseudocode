/*
 * XREFs of MmTrimSection @ 0x1400C0AE0
 * Callers:
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400C09E0 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiFlushRelease @ 0x1400717B4 (MiFlushRelease.c)
 *     MiComputeFlushRange @ 0x140078040 (MiComputeFlushRange.c)
 *     MiTrimSection @ 0x1400C0BB0 (MiTrimSection.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MmTrimSection(_QWORD *a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  v8 = a4 & 1 | 0x20;
  if ( (a4 & 2) == 0 )
    v8 = a4 & 1;
  if ( a2 )
  {
    v11 = *a2;
    a2 = &v13;
    v13 = v11;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, a2, a3, v8 >= 0x20, (__int64)v12) )
    return 0LL;
  v9 = MiTrimSection(v12, 0LL, v8);
  MiFlushRelease(v12[0], v12[3], v12[4]);
  return v9;
}
