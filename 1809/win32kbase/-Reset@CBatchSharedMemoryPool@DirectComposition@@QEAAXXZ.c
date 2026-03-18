/*
 * XREFs of ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000FB74
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000F704 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0010214 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000FB98 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::Reset(DirectComposition::CBatchSharedMemoryPool *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_QWORD *)this + 6) )
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(this);
}
