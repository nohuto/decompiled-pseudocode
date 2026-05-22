/*
 * XREFs of wil::details::lambda_call__lambda_c565c19ed9733c9533da0ee0ab27a7d0___::_lambda_call__lambda_c565c19ed9733c9533da0ee0ab27a7d0___ @ 0x1800E0908
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval_::_1_::dtor$0 @ 0x1800E1E51 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--DoDeviceRemov.c)
 * Callees:
 *     _lambda_c565c19ed9733c9533da0ee0ab27a7d0_::operator() @ 0x1800E1194 (_lambda_c565c19ed9733c9533da0ee0ab27a7d0_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_c565c19ed9733c9533da0ee0ab27a7d0___::_lambda_call__lambda_c565c19ed9733c9533da0ee0ab27a7d0___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_c565c19ed9733c9533da0ee0ab27a7d0_::operator()();
  }
  return result;
}
