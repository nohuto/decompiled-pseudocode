/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C0005B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C0007640 (--0CBaseInput@@IEAA@K@Z.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

CBaseInput *CKeyboardSensor_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    MicrosoftTelemetryAssertTriggeredMsgKM("There must be one and only Keyboard Sensor one per session");
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(1128LL, 1885947971LL);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 2u);
    *((_QWORD *)v1 + 140) = 0LL;
    *(_QWORD *)v1 = &CKeyboardSensor::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = v1;
  return v1;
}
