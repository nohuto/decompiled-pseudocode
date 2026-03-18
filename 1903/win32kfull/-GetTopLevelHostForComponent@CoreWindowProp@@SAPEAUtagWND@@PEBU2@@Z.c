/*
 * XREFs of ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4E0
 * Callers:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00166E8 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     IsWindowShellCloaked @ 0x1C0088160 (IsWindowShellCloaked.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4B4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     _lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_ @ 0x1C0100EF0 (_lambda_483a8efb490f6fe72acc053c62272df4_--_lambda_invoker_cdecl_.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EBA44 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0088D5C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetTopLevelHostForComponent(const struct tagWND *a1)
{
  const struct tagWND *v2; // rbx
  const struct tagWND *Host; // rax

  v2 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    v2 = a1;
    do
    {
      Host = CoreWindowProp::GetHost(v2);
      v2 = Host;
    }
    while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host) );
  }
  return v2;
}
