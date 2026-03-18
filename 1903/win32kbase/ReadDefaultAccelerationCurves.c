/*
 * XREFs of ReadDefaultAccelerationCurves @ 0x1C0074590
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C0074874 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadDefaultAccelerationCurves(int a1, struct _UNICODE_STRING *a2)
{
  CDeviceAcceleration::CreateDefaultAcceleratorCurve(*(&qword_1C020B0A8 + 3 * a1), a2);
}
