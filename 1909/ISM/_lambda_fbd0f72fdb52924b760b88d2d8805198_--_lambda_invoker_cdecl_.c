/*
 * XREFs of _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_ @ 0x180149890
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004EE00 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_()
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(
             &`HolographicDriverClientContinuousTrace::Instance'::`2'::wrapper,
             1u,
             &fPending,
             &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
  return result;
}
