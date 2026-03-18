/*
 * XREFs of GetMouseSensitivity @ 0x1C0182060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C0097F60 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetMouseSensitivity(_DWORD *a1, __int64 a2, __int64 a3)
{
  CDeviceAcceleration *v3; // rbx

  v3 = qword_1C02080A8;
  if ( a1 )
  {
    if ( (unsigned int)(*((_DWORD *)qword_1C02080A8 + 26) - 1) > 0x13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    *a1 = *((_DWORD *)v3 + 27);
  }
  return CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
           (CDeviceAcceleration *)((char *)v3 + 104),
           a2,
           a3);
}
