/*
 * XREFs of ?Reset@CBatchOptimizer@@AEAAXXZ @ 0x1800D5ABC
 * Callers:
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x1800D5A68 (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::Reset(CBatchOptimizer *this)
{
  int v1; // eax
  _DWORD *v2; // rcx

  v1 = 0;
  *((_DWORD *)this + 6) = 24;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 4240) = 0;
  v2 = (_DWORD *)((char *)this + 48);
  do
    *v2++ = v1++;
  while ( v1 < 8 );
}
