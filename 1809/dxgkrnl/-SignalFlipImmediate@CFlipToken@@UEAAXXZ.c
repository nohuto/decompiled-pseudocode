/*
 * XREFs of ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C001A540
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0007DE8 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C00084A8 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 */

void __fastcall CFlipToken::SignalFlipImmediate(CompositionSurfaceObject **this)
{
  char AnalogExclusive; // al

  AnalogExclusive = CompositionSurfaceObject::GetAnalogExclusive(this[4]);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore((CFlipToken *)this, AnalogExclusive);
}
