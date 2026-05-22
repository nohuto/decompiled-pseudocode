/*
 * XREFs of ?cleanup@?$static_lazy@VInputETW@@@details@wil@@QEAAXXZ @ 0x18006DC00
 * Callers:
 *     _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_ @ 0x1800691D0 (_lambda_ffe5d831185bf77c783480ebf240a46d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x18004EE00 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<InputETW>::cleanup(__int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
  return result;
}
