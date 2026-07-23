/*
 * XREFs of MiMirrorOmitPagesFromCopy @ 0x1401530FC
 * Callers:
 *     MiMirrorNodeLargePages @ 0x140152CA8 (MiMirrorNodeLargePages.c)
 *     MiMirrorReduceBlackWrites @ 0x140152EE0 (MiMirrorReduceBlackWrites.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x14057D7F8 (MiRemoveEnclavePagesFromMirror.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiMirrorOmitPagesFromCopy(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  volatile signed __int32 *v8; // rdi
  unsigned int v9; // eax
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  void *v13; // r8
  unsigned __int64 v14; // rdx

  v3 = a3;
  v5 = a3;
  v6 = a2;
  v7 = a2 & 0x1F;
  v8 = (volatile signed __int32 *)(qword_14043B888 + 4 * (a2 >> 5));
  if ( v7 + v5 > 0x20 )
  {
    if ( (a2 & 0x1F) != 0 )
    {
      _InterlockedAnd(v8, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v7));
      v5 = v3 - (32 - (unsigned int)(a2 & 0x1F));
      ++v8;
    }
    if ( v5 >= 0x20 )
    {
      v11 = v5 >> 5;
      v5 += -32LL * (v5 >> 5);
      do
      {
        *v8++ = 0;
        --v11;
      }
      while ( v11 );
    }
    if ( v5 )
    {
      v9 = -1 << v5;
      goto LABEL_4;
    }
  }
  else
  {
    if ( v5 != 32 )
    {
      v9 = ~(((1 << v5) - 1) << v7);
LABEL_4:
      _InterlockedAnd(v8, v9);
      goto LABEL_5;
    }
    *v8 = 0;
  }
LABEL_5:
  if ( *(_QWORD *)(a1 + 24) )
    RtlClearBitsEx((__int64)&qword_14043B870, v6, v3);
  result = *(unsigned int *)(a1 + 32);
  if ( (result & 0x20) != 0 && v3 )
  {
    do
    {
      v12 = MiMapPageInHyperSpaceWorker(v6, 0LL, 0);
      v13 = (void *)v12;
      v14 = 1024LL;
      if ( (v12 & 4) != 0 )
      {
        *(_DWORD *)v12 = -2;
        v13 = (void *)(v12 + 4);
        v14 = 1023LL;
      }
      memset64(v13, 0xFFFFFFFEFFFFFFFEuLL, v14 >> 1);
      if ( (v14 & 1) != 0 )
        *((_DWORD *)v13 + v14 - 1) = -2;
      result = MiUnmapPageInHyperSpaceWorker(v12, 0x11u, 0LL);
      ++v6;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
