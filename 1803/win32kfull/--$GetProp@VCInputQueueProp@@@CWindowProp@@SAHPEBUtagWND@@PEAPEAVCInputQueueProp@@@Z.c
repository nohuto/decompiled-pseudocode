/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0035280
 * Callers:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C000489C (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C000EAB0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0011790 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = RealGetProp(*(_QWORD *)(a1 + 120), CInputQueueProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
