/*
 * XREFs of _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_ @ 0x18009ADB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004EE00 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_()
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(
             &`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper,
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
