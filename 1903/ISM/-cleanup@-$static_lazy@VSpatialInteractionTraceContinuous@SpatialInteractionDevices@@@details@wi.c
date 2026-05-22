/*
 * XREFs of ?cleanup@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAXXZ @ 0x1800E6C90
 * Callers:
 *     _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_ @ 0x1800DF8A0 (_lambda_0bcba54505780f78856f588866e18ac8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004F0A0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::cleanup(
        __int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance'::`2'::wrapper,
             1u,
             (PBOOL)&fPending,
             &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
  return result;
}
