/*
 * XREFs of ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0018E64
 * Callers:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0006A24 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C001ABAC (GetWindowCloakStateComponentUIAware.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027760 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0027C9C (ValidateHwndIAMComponetUIAware.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0117CDC (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C001A3CC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetHost(const struct tagWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v2) )
    return *(struct tagWND **)(v2 + 24);
  else
    return 0LL;
}
