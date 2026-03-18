/*
 * XREFs of ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C008F6F0
 * Callers:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C008F664 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     UpdateMouseSensitivity @ 0x1C008F6C0 (UpdateMouseSensitivity.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // ebx

  v3 = a2;
  if ( (unsigned int)(a2 - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  *(_DWORD *)this = v3;
  if ( v3 <= 2 )
  {
    v7 = (8 * v3) & 0x7FFFFFF;
  }
  else
  {
    v5 = v3 - 3;
    v6 = v3 << 8;
    if ( v5 > 7 )
      v7 = (v6 - 1536) >> 2;
    else
      v7 = (v6 - 512) >> 3;
  }
  *((_DWORD *)this + 1) = v7;
}
