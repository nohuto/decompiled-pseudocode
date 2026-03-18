/*
 * XREFs of ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0014D70
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00148E0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C001AD98 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 * Callees:
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C001AD50 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::RemoveTokenQueueTableEntry(
        CTokenManager *this,
        struct CTokenManager::TokenQueueTableEntry *a2)
{
  void *v2; // rbx

  v2 = (void *)*((_QWORD *)a2 + 1);
  if ( v2 )
  {
    CTokenQueue::DeleteAllTokens(*((CTokenQueue **)a2 + 1));
    ExFreePoolWithTag(v2, 0);
  }
  RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), a2);
}
