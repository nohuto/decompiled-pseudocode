/*
 * XREFs of ResetAccelerationCurves @ 0x1C0066A70
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C0066A98 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(int a1)
{
  CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C020B0A8 + 3 * a1));
}
