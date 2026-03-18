/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00839B0
 * Callers:
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C0159CE4 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C015CEA0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
