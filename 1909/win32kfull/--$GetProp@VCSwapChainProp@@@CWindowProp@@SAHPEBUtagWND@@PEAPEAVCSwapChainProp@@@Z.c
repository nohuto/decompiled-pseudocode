/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C0010A18
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C015AC94 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C015DE50 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
