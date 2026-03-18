/*
 * XREFs of ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0085FC8
 * Callers:
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0085DC8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C0085E84 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0132510 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndTargetProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CHwndTargetProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
