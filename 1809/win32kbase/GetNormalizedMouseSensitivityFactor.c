/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1C01511A4
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C003CB48 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0039AE0 (EngMulDiv.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C008A6E0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1, __int64 a2, __int64 a3)
{
  CDeviceAcceleration *v3; // rdi
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax

  v3 = qword_1C01C3098;
  if ( (unsigned int)(*((_DWORD *)qword_1C01C3098 + 26) - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *((_DWORD *)v3 + 27);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)v3 + 104), a2, a3);
  if ( a1 )
  {
    v6 = *(_WORD *)(a1 + 20);
    if ( v6 > 0x60u )
      return (unsigned int)EngMulDiv(v5, v6, 96);
  }
  return v5;
}
