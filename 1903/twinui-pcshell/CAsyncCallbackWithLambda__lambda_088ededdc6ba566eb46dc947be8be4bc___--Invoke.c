/*
 * XREFs of CAsyncCallbackWithLambda__lambda_088ededdc6ba566eb46dc947be8be4bc___::Invoke @ 0x1801BD680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BD32C (-HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_088ededdc6ba566eb46dc947be8be4bc___::Invoke(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = CortanaStoreAppExperienceManager::HolographicUsageUpdatedFromRegistry(*(CortanaStoreAppExperienceManager **)(a1 + 48));
  v2 = v1;
  if ( v1 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
