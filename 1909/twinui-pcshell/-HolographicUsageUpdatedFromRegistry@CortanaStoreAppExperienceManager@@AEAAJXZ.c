/*
 * XREFs of ?HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DC2FC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_088ededdc6ba566eb46dc947be8be4bc___::Invoke @ 0x1801DC650 (CAsyncCallbackWithLambda__lambda_088ededdc6ba566eb46dc947be8be4bc___--Invoke.c)
 * Callees:
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ @ 0x18004959C (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801DB160 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?IsMixedRealitySetupCompleteForCurrentUser@@YA_NXZ @ 0x1801DC7AC (-IsMixedRealitySetupCompleteForCurrentUser@@YA_NXZ.c)
 *     ?OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DD2BC (-OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DEC90 (-UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801E536C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::HolographicUsageUpdatedFromRegistry(
        CortanaStoreAppExperienceManager *this)
{
  bool *v2; // rdx
  CortanaUndockingHelpers *v3; // rcx
  unsigned __int8 v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CortanaStoreAppExperienceManager::CheckThread(this);
  if ( CortanaUndockingHelpers::IsSystemCortanaAppReplaced(v3, v2) && IsMixedRealitySetupCompleteForCurrentUser() )
  {
    v5 = CortanaStoreAppHelper::ApplyReplaceDecision(0LL, 0, v4);
    if ( v5 < 0 )
    {
      v6 = 242LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = CortanaStoreAppExperienceManager::UnsubscribeFromServicesInternal(this);
    if ( v5 < 0 )
    {
      v6 = 243LL;
      goto LABEL_5;
    }
    v5 = CortanaStoreAppExperienceManager::OnViewDestroyed(this);
    if ( v5 < 0 )
    {
      v6 = 244LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
