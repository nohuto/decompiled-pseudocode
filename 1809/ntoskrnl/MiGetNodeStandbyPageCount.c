/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x1402C05A0
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x14010C5C0 (MiCheckZeroFreeRebalance.c)
 *     MiRebalanceZeroFreeLists @ 0x1402C1060 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x1402CE5D4 (MiRebuildLargePage.c)
 *     MiRebuildLargePages @ 0x1402CE840 (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 8LL;
  v6 = (_QWORD *)(192LL * a3 + 1984LL * a2 + v4 + 856);
  do
  {
    v3 += *v6;
    v6 += 3;
    --v5;
  }
  while ( v5 );
  return v3;
}
