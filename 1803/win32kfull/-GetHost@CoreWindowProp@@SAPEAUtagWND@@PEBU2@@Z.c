/*
 * XREFs of ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C01009C8
 * Callers:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0007F98 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00355D0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C00707D0 (ValidateHwndIAMComponetUIAware.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C0073B50 (GetWindowCloakStateComponentUIAware.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0100970 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00354BC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetHost(const struct tagWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v2) )
    return *(struct tagWND **)(v2 + 24);
  else
    return 0LL;
}
