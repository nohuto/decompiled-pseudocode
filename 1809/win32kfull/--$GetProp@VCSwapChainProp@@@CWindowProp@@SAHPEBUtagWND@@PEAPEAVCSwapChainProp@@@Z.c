/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00C9194
 * Callers:
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C0153724 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0156B90 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CSwapChainProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
