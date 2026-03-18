/*
 * XREFs of ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0071958
 * Callers:
 *     _lambda_fb16448920153f6d07666723336f7afd_::_lambda_invoker_cdecl_ @ 0x1C000B670 (_lambda_fb16448920153f6d07666723336f7afd_--_lambda_invoker_cdecl_.c)
 *     IsWindowShellCloaked @ 0x1C000ED34 (IsWindowShellCloaked.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C002E5D4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CDF9C (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01D641C (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C000B638 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
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
