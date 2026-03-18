/*
 * XREFs of ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027760
 * Callers:
 *     IsWindowShellCloaked @ 0x1C0017094 (IsWindowShellCloaked.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001C5CC (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027734 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A350 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C012FA58 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_ @ 0x1C013A1C0 (_lambda_483a8efb490f6fe72acc053c62272df4_--_lambda_invoker_cdecl_.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EB8C4 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0018E64 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
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
