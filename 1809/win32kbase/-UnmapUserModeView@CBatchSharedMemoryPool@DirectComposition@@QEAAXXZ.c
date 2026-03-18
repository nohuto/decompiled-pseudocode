/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000FB98
 * Callers:
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000FB74 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C005A310 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C005A840 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C005CAAC (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(
        DirectComposition::CBatchSharedMemoryPool *this)
{
  if ( *((_QWORD *)this + 6) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
      MmUnmapViewOfSection();
    *((_QWORD *)this + 6) = 0LL;
  }
}
