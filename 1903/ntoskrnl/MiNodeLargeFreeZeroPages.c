/*
 * XREFs of MiNodeLargeFreeZeroPages @ 0x1400DAFC8
 * Callers:
 *     MiReplenishPageSlist @ 0x1400DB080 (MiReplenishPageSlist.c)
 *     MiDemoteLocalLargePage @ 0x1400DBD70 (MiDemoteLocalLargePage.c)
 *     MiSignalLargePageRebuild @ 0x1400F2000 (MiSignalLargePageRebuild.c)
 *     MiNodeFreeZeroPages @ 0x1400F3834 (MiNodeFreeZeroPages.c)
 *     MiRebuildLargePages @ 0x140169CC0 (MiRebuildLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408884D4 (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPages(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 *v5; // r11
  __int64 v6; // rdi
  _QWORD *v7; // r10
  __int64 *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v3 = 0LL;
  v5 = MiLargePageSizes;
  v6 = 0LL;
  v7 = a1;
  v8 = &a1[a3];
  v9 = 3LL;
  do
  {
    if ( a2 == 4 )
    {
      if ( a3 == 2 )
        v11 = *v7 + v7[1];
      else
        v11 = *v8;
    }
    else
    {
      v10 = v6 + a2 + 4LL * a3;
      v11 = a1[v10 + 2] + a1[v10 + 10];
    }
    v12 = *v5++ * v11;
    v7 += 34;
    v3 += v12;
    v6 += 34LL;
    v8 += 34;
    --v9;
  }
  while ( v9 );
  return v3;
}
