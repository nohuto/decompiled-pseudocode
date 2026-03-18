/*
 * XREFs of ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C0007A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C00084A8 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 */

bool __fastcall CFlipToken::IsAnalogExclusive(CompositionSurfaceObject **this)
{
  return CompositionSurfaceObject::GetAnalogExclusive(this[4]);
}
