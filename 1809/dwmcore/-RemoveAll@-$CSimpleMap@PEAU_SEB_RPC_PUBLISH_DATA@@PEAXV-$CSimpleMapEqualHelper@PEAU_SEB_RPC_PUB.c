/*
 * XREFs of ?RemoveAll@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAXXZ @ 0x180220BA4
 * Callers:
 *     ??1ContextTable@@QEAA@XZ @ 0x1800EB4C4 (--1ContextTable@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAll()
{
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  if ( *(&Block + 1) )
  {
    free(*(&Block + 1));
    *(&Block + 1) = 0LL;
  }
  LODWORD(qword_18030BE10) = 0;
}
