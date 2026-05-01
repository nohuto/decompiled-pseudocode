/*
 * XREFs of ?cleanup@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAXXZ @ 0x18029C034
 * Callers:
 *     _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_ @ 0x180293EE0 (_lambda_1807517bb2a601749b2ae4fbbb57858f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1801006C0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<ViewManagerInteropTraceLogging>::cleanup(__int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
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
