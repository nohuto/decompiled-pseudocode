/*
 * XREFs of InputTransformOnInput @ 0x1C01E0730
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00D64E4 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall InputTransformOnInput(__int64 a1, struct tagWND *a2)
{
  return InputTransform::OnInput(*(InputTransform **)(a1 + 72), a2);
}
