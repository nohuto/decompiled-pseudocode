/*
 * XREFs of MiNodeLargeFreeZeroPages @ 0x1400EE9A8
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140064050 (MiDemoteLocalLargePage.c)
 *     MiNodeFreeZeroPages @ 0x1400EE374 (MiNodeFreeZeroPages.c)
 *     MiReplenishPageSlist @ 0x1400EE420 (MiReplenishPageSlist.c)
 *     MiSignalLargePageRebuild @ 0x1400EF834 (MiSignalLargePageRebuild.c)
 *     MiRebuildLargePages @ 0x1402CE840 (MiRebuildLargePages.c)
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
