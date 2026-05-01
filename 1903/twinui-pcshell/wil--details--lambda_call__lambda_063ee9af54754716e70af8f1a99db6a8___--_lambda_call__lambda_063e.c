/*
 * XREFs of wil::details::lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___::_lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___ @ 0x1801BB4B8
 * Callers:
 *     _CortanaStoreAppExperienceManager::SubscribeToServicesInternal_::_1_::dtor$0 @ 0x1801BF9F5 (_CortanaStoreAppExperienceManager--SubscribeToServicesInternal_--_1_--dtor$0.c)
 * Callees:
 *     ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BFCC0 (-UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801C634C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 */

CortanaStoreAppExperienceManager *__fastcall wil::details::lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___::_lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___(
        CortanaStoreAppExperienceManager **a1,
        __int64 a2,
        unsigned __int8 a3)
{
  CortanaStoreAppExperienceManager **v3; // rbx
  CortanaStoreAppExperienceManager *result; // rax

  v3 = a1;
  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    LOBYTE(a1) = 1;
    CortanaStoreAppHelper::ApplyReplaceDecision((CortanaStoreAppHelper *)a1, 0, a3);
    CortanaStoreAppExperienceManager::UnsubscribeFromServicesInternal(*v3);
    result = *v3;
    *((_BYTE *)*v3 + 272) = 0;
  }
  return result;
}
