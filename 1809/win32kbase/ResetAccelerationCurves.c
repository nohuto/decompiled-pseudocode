/*
 * XREFs of ResetAccelerationCurves @ 0x1C003C550
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0041284 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C003CF84 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(int a1)
{
  CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C01C3098 + 3 * a1));
}
