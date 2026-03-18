/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00C0B34
 * Callers:
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C0132514 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0135BC0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = RealGetProp(*(_QWORD *)(a1 + 120), CSwapChainProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
