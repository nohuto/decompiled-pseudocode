/*
 * XREFs of wil::details::lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___::_lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___ @ 0x1800F51A8
 * Callers:
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$2 @ 0x1800F8E05 (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_f3d78743e27405bb129d35bae2d06b95_::operator() @ 0x1800F59D8 (_lambda_f3d78743e27405bb129d35bae2d06b95_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___::_lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_f3d78743e27405bb129d35bae2d06b95_::operator()();
  }
  return result;
}
