/*
 * XREFs of ?cleanup@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAXXZ @ 0x18020BE24
 * Callers:
 *     _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_ @ 0x18020A250 (_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x1801E9270 (--_ECompositorTracing@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<CompositorTracing>::cleanup(__int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)CompositorTracing::`vector deleting destructor'((CompositorTracing *)Context, 0);
  }
  return result;
}
