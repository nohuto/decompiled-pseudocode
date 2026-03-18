/*
 * XREFs of FixedPointSubPixel @ 0x1C01D2210
 * Callers:
 *     DCEInverseTransform @ 0x1C01D1918 (DCEInverseTransform.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01D26B8 (PhysicalToLogicalInPlacePointWithParent.c)
 *     TransformVector @ 0x1C01F00F8 (TransformVector.c)
 * Callees:
 *     <none>
 */

float __fastcall FixedPointSubPixel(__int64 a1)
{
  unsigned __int64 v1; // rax

  if ( a1 < 0 )
    v1 = a1 + (-a1 & 0xFFFFFFFFFFFF0000uLL);
  else
    LODWORD(v1) = (unsigned __int16)a1;
  return (float)(int)v1 * 0.000015258789;
}
