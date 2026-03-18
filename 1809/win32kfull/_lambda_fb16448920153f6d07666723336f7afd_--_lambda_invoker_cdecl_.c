/*
 * XREFs of _lambda_fb16448920153f6d07666723336f7afd_::_lambda_invoker_cdecl_ @ 0x1C000B670
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::IsForegroundWindow @ 0x1C000B6D4 (_anonymous_namespace_--IsForegroundWindow.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C000B8FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0071958 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall lambda_fb16448920153f6d07666723336f7afd_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  const struct tagWND *v3; // rcx
  struct tagWND *TopLevelHostForComponent; // rax
  const struct tagWND *TopLevelWindow; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h]

  v7 = 0uLL;
  *a2 = 0uLL;
  if ( (unsigned __int8)anonymous_namespace_::IsForegroundWindow(a1, a2) )
  {
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v3);
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
    if ( IsWindowActivateable(TopLevelWindow) )
    {
      *(_QWORD *)&v7 = TopLevelWindow;
      DWORD2(v7) = 7;
      *a2 = v7;
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
