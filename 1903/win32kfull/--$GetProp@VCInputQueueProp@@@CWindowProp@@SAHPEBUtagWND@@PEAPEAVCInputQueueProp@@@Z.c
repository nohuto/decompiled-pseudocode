/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0019940
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0005870 (EditionUpdateInputTransformFromHitTest.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0018230 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C001978C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0088CD8 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D6108 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CInputQueueProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
