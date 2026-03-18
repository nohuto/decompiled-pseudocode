/*
 * XREFs of _lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_ @ 0x1C0100EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4E0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     _anonymous_namespace_::IsForegroundWindow @ 0x1C0100F54 (_anonymous_namespace_--IsForegroundWindow.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C010146C (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
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
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
    if ( IsWindowActivateable(TopLevelWindow) )
    {
      *(_QWORD *)&v7 = TopLevelWindow;
      DWORD2(v7) = 7;
      *a2 = v7;
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
