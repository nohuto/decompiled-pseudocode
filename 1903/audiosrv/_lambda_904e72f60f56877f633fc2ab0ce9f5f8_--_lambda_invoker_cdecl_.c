/*
 * XREFs of _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_ @ 0x18013CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ENUIAudioTracing@@UEAAPEAXI@Z @ 0x18013CE30 (--_ENUIAudioTracing@@UEAAPEAXI@Z.c)
 */

unsigned int lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_()
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(&`NUIAudioTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)NUIAudioTracing::`vector deleting destructor'((NUIAudioTracing *)Context, 0);
  }
  return result;
}
