/*
 * XREFs of ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C000B638
 * Callers:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0008C1C (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C000A108 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C000CCBC (GetWindowCloakStateComponentUIAware.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0071834 (ValidateHwndIAMComponetUIAware.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0071958 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetHost(const struct tagWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v2) )
    return *(struct tagWND **)(v2 + 24);
  else
    return 0LL;
}
