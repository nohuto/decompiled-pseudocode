/*
 * XREFs of CAsyncCallbackWithLambda__lambda_4f97da8bbe7201cae9d39f71cb667fd0___::Invoke @ 0x1801BD6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801BC1A0 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BDCFC (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_4f97da8bbe7201cae9d39f71cb667fd0___::Invoke(__int64 a1)
{
  CortanaStoreAppExperienceManager *v1; // rbx
  int v2; // edi

  v1 = *(CortanaStoreAppExperienceManager **)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 56);
  CortanaStoreAppExperienceManager::CheckThread(v1);
  *((_BYTE *)v1 + 274) = v2 != 0;
  if ( *((_BYTE *)v1 + 276) && v2 )
    CortanaStoreAppExperienceManager::OnViewConsolidationRequested(v1);
  return 0LL;
}
