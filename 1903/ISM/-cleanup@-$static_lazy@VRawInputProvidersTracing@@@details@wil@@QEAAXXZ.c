/*
 * XREFs of ?cleanup@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAXXZ @ 0x180099F58
 * Callers:
 *     _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_ @ 0x180099070 (_lambda_260b9137d63ddd75627644ad4182c2ea_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004F0A0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<RawInputProvidersTracing>::cleanup(__int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
  return result;
}
