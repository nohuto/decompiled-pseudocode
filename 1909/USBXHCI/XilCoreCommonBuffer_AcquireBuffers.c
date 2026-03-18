/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffers @ 0x1C00478E8
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x1C000CAF0 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_WorkItem @ 0x1C000CFF0 (CommonBuffer_WorkItem.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C00479E0 (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0047B48 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffers(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  unsigned int *v8; // rax
  unsigned int i; // r10d
  unsigned int *v12; // rsi
  int v13; // edi
  __int64 v14; // r8

  v8 = (unsigned int *)(a1 + 32);
  for ( i = 0; i < 2; ++i )
  {
    v12 = v8;
    if ( a3 <= *v8 )
      break;
    v8 += 16;
  }
  v13 = XilCoreCommonBuffer_AcquireBuffersWithSegmenter(a1, (_DWORD)v12, a2, a4, a5, a6, (__int64)a7);
  if ( v13 < 0 || *a7 )
  {
    if ( KeGetCurrentIrql() )
    {
      *a7 = 1;
    }
    else
    {
      v14 = 0LL;
      if ( v13 < 0 )
        v14 = a2;
      if ( *a7 )
        v14 = v12[4] + (unsigned int)v14;
      XilCoreCommonBuffer_AllocateBuffers(a1, v12, v14);
      *a7 = 0;
      if ( v13 < 0 )
        return (unsigned int)XilCoreCommonBuffer_AcquireBuffersWithSegmenter(
                               a1,
                               (_DWORD)v12,
                               a2,
                               a4,
                               a5,
                               a6,
                               (__int64)a7);
    }
  }
  return (unsigned int)v13;
}
