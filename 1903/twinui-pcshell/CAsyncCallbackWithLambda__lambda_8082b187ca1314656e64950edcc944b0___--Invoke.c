/*
 * XREFs of CAsyncCallbackWithLambda__lambda_8082b187ca1314656e64950edcc944b0___::Invoke @ 0x1801BD730
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801BC1A0 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_8082b187ca1314656e64950edcc944b0___::Invoke(__int64 a1)
{
  CortanaStoreAppExperienceManager *v1; // rdi
  int v2; // ebx

  v1 = *(CortanaStoreAppExperienceManager **)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 56);
  CortanaStoreAppExperienceManager::CheckThread(v1);
  *((_BYTE *)v1 + 275) = v2 != 0;
  return 0LL;
}
