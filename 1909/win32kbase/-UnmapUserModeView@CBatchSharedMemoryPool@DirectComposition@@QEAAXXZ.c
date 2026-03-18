/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000BD18
 * Callers:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000B874 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C006D990 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006E820 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C006FC18 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C01A4E6C (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
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
