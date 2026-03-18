/*
 * XREFs of ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00163A8
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00161A8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C0016264 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C010D010 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndTargetProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CHwndTargetProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
