/*
 * XREFs of MagInputTransform @ 0x1C01C87B4
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00F4230 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C019D9F0 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C019DD70 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C01C8760 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

__int64 MagInputTransform()
{
  __int64 result; // rax

  result = 0LL;
  if ( grpdeskRitInput )
    return *(_QWORD *)(grpdeskRitInput + 216LL);
  return result;
}
