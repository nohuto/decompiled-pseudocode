/*
 * XREFs of DoAccel @ 0x1C00554A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C00554C8 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 */

void __fastcall DoAccel(int a1, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  CDeviceAcceleration::Accelerate(*(&qword_1C019AA88 + 3 * a1), a2, a3, a4);
}
