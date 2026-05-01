/*
 * XREFs of ?cleanup@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAAXXZ @ 0x1801F10CC
 * Callers:
 *     _lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_ @ 0x1801CDB60 (_lambda_b55becccc8b67eee49088d4c1be9735f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1800EC4B0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<TabViewManagerTraceLogging>::cleanup(__int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`TabViewManagerTraceLogging::Instance'::`2'::wrapper,
             1u,
             (PBOOL)&fPending,
             &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)ViewManagerInteropTraceLogging::`scalar deleting destructor'(
                             (ViewManagerInteropTraceLogging *)Context,
                             0);
  }
  return result;
}
