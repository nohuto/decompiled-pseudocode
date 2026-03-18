/*
 * XREFs of ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00C9620
 * Callers:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00C8DBC (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00C9518 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00C9564 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndTargetProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CHwndTargetProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
