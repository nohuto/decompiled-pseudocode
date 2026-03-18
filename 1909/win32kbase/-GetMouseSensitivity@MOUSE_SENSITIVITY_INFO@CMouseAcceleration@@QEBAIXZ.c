/*
 * XREFs of ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C0097F60
 * Callers:
 *     ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C0097DE0 (-BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z.c)
 *     GetMouseSensitivity @ 0x1C0182060 (GetMouseSensitivity.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C0182108 (GetNormalizedMouseSensitivityFactor.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx

  v3 = *(unsigned int *)this;
  if ( (unsigned int)(v3 - 1) > 0x13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v3, a3);
    LODWORD(v3) = *(_DWORD *)this;
  }
  return (unsigned int)v3;
}
