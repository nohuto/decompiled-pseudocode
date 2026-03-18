/*
 * XREFs of ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C001AD98
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C001AA50 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C001AC50 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0014D70 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 */

void __fastcall CTokenManager::DeleteAllTokenQueues(CTokenManager *this)
{
  struct _RTL_GENERIC_TABLE *v2; // rdi
  struct CTokenManager::TokenQueueTableEntry *v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 192);
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = (struct CTokenManager::TokenQueueTableEntry *)RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v3 )
      break;
    CTokenManager::RemoveTokenQueueTableEntry(this, v3);
  }
}
