/*
 * XREFs of ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C008A6E0
 * Callers:
 *     ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C008A5C0 (-BuildAccelerationCurve@CMouseAcceleration@@UEAAXGGPEAUBallistics@CDeviceAcceleration@@@Z.c)
 *     GetMouseSensitivity @ 0x1C0151100 (GetMouseSensitivity.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C01511A4 (GetNormalizedMouseSensitivityFactor.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
