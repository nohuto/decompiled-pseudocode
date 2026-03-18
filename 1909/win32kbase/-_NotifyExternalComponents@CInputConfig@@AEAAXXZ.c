/*
 * XREFs of ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0051324
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00512B4 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0185AFC (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C0185C0C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0051384 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C00519EC (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C0052228 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C0054EF8 (RIMOnDisplayStateChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
    CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C02080A8 + 3 * (int)v4++));
  while ( v4 < 2 );
  InputConfig::Broadcast();
}
