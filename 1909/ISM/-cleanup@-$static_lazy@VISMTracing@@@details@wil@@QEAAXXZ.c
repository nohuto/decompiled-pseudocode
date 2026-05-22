/*
 * XREFs of ?cleanup@?$static_lazy@VISMTracing@@@details@wil@@QEAAXXZ @ 0x18005643C
 * Callers:
 *     _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_ @ 0x180053150 (_lambda_7fd51406feab050c3f0aab483d3938ea_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004EE00 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<ISMTracing>::cleanup(__int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
  return result;
}
