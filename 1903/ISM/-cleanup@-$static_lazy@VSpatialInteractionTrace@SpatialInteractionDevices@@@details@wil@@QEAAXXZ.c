/*
 * XREFs of ?cleanup@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAXXZ @ 0x1800D9844
 * Callers:
 *     _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_ @ 0x1800D6EF0 (_lambda_169e34f0547c812b04d058e5b6da2245_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004F0A0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::cleanup(
        __int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`SpatialInteractionDevices::SpatialInteractionTrace::Instance'::`2'::wrapper,
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
