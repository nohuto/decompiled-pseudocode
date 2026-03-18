/*
 * XREFs of MagInputTransform @ 0x1C0203104
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00F0D20 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01D27A0 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01D2B50 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C02030B0 (EditionMagnificationMousePosition.c)
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
