/*
 * XREFs of ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0065814
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00657A4 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0187CEC (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C0187DFC (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0065874 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C0066250 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C0066A98 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C0068E58 (RIMOnDisplayStateChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_NotifyExternalComponents(CInputConfig *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // ebx
  CCursorClip *v5; // rcx

  v4 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v5);
  do
    CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C020B0A8 + 3 * (int)v4++));
  while ( v4 < 2 );
  InputConfig::Broadcast();
}
