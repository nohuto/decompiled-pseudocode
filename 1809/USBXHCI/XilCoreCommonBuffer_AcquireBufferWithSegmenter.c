/*
 * XREFs of XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0041F80
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C0041E34 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C004215C (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 */

unsigned int *__fastcall XilCoreCommonBuffer_AcquireBufferWithSegmenter(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int a4,
        bool *a5)
{
  _QWORD *v5; // rax
  unsigned int *v7; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int *result; // rax

  v5 = a2 + 8;
  v7 = (unsigned int *)*((_QWORD *)a2 + 4);
  if ( v7 == a2 + 8 )
  {
    v7 = 0LL;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      3u,
      8u,
      0x10u,
      (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids);
  }
  else
  {
    if ( *((_QWORD **)v7 + 1) != v5 || (v11 = *(_QWORD *)v7, *(unsigned int **)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v5 = v11;
    *(_QWORD *)(v11 + 8) = v5;
    memset(*((void **)v7 + 2), 0, *a2);
    --a2[7];
    *((_QWORD *)v7 + 9) = a3;
    v7[16] = a4;
    v7[20] = 1;
    v7[11] = *a2;
    v12 = *((_QWORD *)v7 + 4);
    if ( *(_BYTE *)(v12 + 16) )
    {
      *(_BYTE *)(v12 + 16) = 0;
      ++*(_DWORD *)(a1 + 204);
    }
  }
  result = v7;
  *a5 = a2[7] < a2[3];
  return result;
}
