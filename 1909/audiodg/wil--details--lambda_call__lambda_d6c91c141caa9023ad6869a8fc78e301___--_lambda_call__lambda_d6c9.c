/*
 * XREFs of wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___ @ 0x140017AD4
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000C070 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     _CPipeInstance::ActivateAPOs_::_1_::dtor$0 @ 0x14001AD00 (_CPipeInstance--ActivateAPOs_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_d6c91c141caa9023ad6869a8fc78e301_::operator() @ 0x140017AF4 (_lambda_d6c91c141caa9023ad6869a8fc78e301_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_d6c91c141caa9023ad6869a8fc78e301_::operator()();
  }
  return result;
}
