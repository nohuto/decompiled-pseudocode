/*
 * XREFs of GetMouseSensitivity @ 0x1C012E400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C0058D64 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetMouseSensitivity(_DWORD *a1, __int64 a2)
{
  CDeviceAcceleration *v2; // rbx

  v2 = qword_1C019AA88;
  if ( a1 )
  {
    if ( (unsigned int)(*((_DWORD *)qword_1C019AA88 + 26) - 1) > 0x13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    *a1 = *((_DWORD *)v2 + 27);
  }
  return CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)v2 + 104));
}
