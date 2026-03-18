/*
 * XREFs of MagInputTransform @ 0x1C01ECB04
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C010CFA0 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01BEC60 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01BEFF0 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C01ECAB0 (EditionMagnificationMousePosition.c)
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
