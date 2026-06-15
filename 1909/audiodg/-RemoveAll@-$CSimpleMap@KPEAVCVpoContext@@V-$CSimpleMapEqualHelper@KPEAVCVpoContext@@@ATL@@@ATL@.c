/*
 * XREFs of ?RemoveAll@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAXXZ @ 0x140015804
 * Callers:
 *     _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x14001B890 (_dynamic_atexit_destructor_for__CVpoContext--s_mapVpoContext__.c)
 * Callees:
 *     <none>
 */

void ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAll()
{
  if ( CVpoContext::s_mapVpoContext )
  {
    free(CVpoContext::s_mapVpoContext);
    CVpoContext::s_mapVpoContext = 0LL;
  }
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  LODWORD(qword_140086070) = 0;
}
