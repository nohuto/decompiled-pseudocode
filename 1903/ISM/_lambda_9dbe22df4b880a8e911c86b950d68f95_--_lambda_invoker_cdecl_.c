/*
 * XREFs of _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_ @ 0x180149850
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004F0A0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_()
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(&`HolographicDriverClientTrace::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
  return result;
}
