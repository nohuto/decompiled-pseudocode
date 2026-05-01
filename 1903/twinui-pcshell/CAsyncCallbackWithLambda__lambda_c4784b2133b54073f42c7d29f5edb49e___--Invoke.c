/*
 * XREFs of CAsyncCallbackWithLambda__lambda_c4784b2133b54073f42c7d29f5edb49e___::Invoke @ 0x1801BD770
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801BC1A0 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_c4784b2133b54073f42c7d29f5edb49e___::Invoke(__int64 a1)
{
  CortanaStoreAppExperienceManager *v1; // rdi
  int v2; // ebx

  v1 = *(CortanaStoreAppExperienceManager **)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 56);
  CortanaStoreAppExperienceManager::CheckThread(v1);
  *((_BYTE *)v1 + 273) = v2 != 0;
  return 0LL;
}
