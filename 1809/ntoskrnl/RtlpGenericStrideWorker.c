/*
 * XREFs of RtlpGenericStrideWorker @ 0x1402F8A44
 * Callers:
 *     RtlScrubMemory @ 0x1402F807C (RtlScrubMemory.c)
 * Callees:
 *     RtlpFillMemoryWithInverseStride @ 0x1402F81FC (RtlpFillMemoryWithInverseStride.c)
 */

char __fastcall RtlpGenericStrideWorker(int a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r14
  int v8; // esi
  unsigned __int64 v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rcx
  _DWORD *i; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *j; // rcx
  struct _KPRCB *v17; // rax
  __int64 v18; // rdx
  char *k; // rcx
  __int64 v20; // rcx
  _DWORD *m; // rcx
  signed __int32 v23[22]; // [rsp+0h] [rbp-58h] BYREF

  v5 = a4 + 4096;
  v7 = a4 >> 2;
  v8 = 0;
  v10 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
  while ( 2 )
  {
    v11 = 2 * v8;
    v12 = 2 * v8 - (unsigned int)(v7 % 0xC);
    if ( v7 % 0xC > (unsigned int)(2 * v8) )
      v12 = (unsigned int)(v12 + 12);
    for ( i = (_DWORD *)(a4 + 4 * v12); (unsigned __int64)i < v5; i += 12 )
    {
      *i = a1;
      i[1] = a1;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CFlushSize = CurrentPrcb->CFlushSize;
    if ( CurrentPrcb->CFlushSize )
    {
      _InterlockedOr(v23, 0);
      for ( j = (char *)(a4 & ~(CFlushSize - 1)); (unsigned __int64)j < v5; j += CFlushSize )
        _mm_clflush(j);
    }
    RtlpFillMemoryWithInverseStride(a2, v8, a3, a4);
    v17 = KeGetCurrentPrcb();
    v18 = v17->CFlushSize;
    if ( v17->CFlushSize )
    {
      _InterlockedOr(v23, 0);
      for ( k = (char *)(a4 & ~(v18 - 1)); (unsigned __int64)k < v5; k += v18 )
        _mm_clflush(k);
    }
    v20 = v11 - (unsigned int)v10;
    if ( (unsigned int)v10 > v11 )
      v20 = (unsigned int)(v20 + 12);
    for ( m = (_DWORD *)(a4 + 4 * v20); (unsigned __int64)m < v5; m += 12 )
    {
      if ( *m != a1 || m[1] != a1 )
        return 0;
    }
    if ( (unsigned int)++v8 < 6 )
      continue;
    break;
  }
  return 1;
}
