/*
 * XREFs of MagInputTransform @ 0x1C02033B4
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C0115B00 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01D2930 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01D2CE0 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C0203360 (EditionMagnificationMousePosition.c)
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
