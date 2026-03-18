/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1C012E4A8
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00390C8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C0058D64 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1, __int64 a2)
{
  CDeviceAcceleration *v2; // rdi
  unsigned int v4; // ebx
  unsigned __int16 v5; // cx

  v2 = qword_1C019AA88;
  if ( (unsigned int)(*((_DWORD *)qword_1C019AA88 + 26) - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = *((_DWORD *)v2 + 27);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)v2 + 104));
  if ( a1 )
  {
    v5 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 64LL);
    if ( v5 > 0x60u )
      return v4 * v5 / 0x60;
  }
  return v4;
}
