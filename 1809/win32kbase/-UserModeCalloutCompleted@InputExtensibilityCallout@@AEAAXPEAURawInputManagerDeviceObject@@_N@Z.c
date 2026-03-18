/*
 * XREFs of ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C014901C
 * Callers:
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0148CD0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00921C0 (-ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ.c)
 *     ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C0148FF8 (-ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::UserModeCalloutCompleted(
        InputExtensibilityCallout *this,
        _QWORD *Object,
        __int64 a3)
{
  __int64 v3; // rbx
  char v4; // bp

  v3 = Object[53];
  v4 = a3;
  if ( !*(_BYTE *)(v3 + 82) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, Object, a3);
  if ( *((_QWORD **)gptiCurrent + 166) != Object )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, Object, a3);
  *((_QWORD *)gptiCurrent + 166) = 0LL;
  if ( v4 )
    RIMLockExclusive(v3 + 104);
  if ( InputExtensibilityCallout::ShouldUpdateInputBufferLockState(this, (const struct RawInputManagerObject *)v3) )
    RIMLockExclusive(v3 + 568);
  *(_BYTE *)(v3 + 82) = 0;
  ObfDereferenceObject(Object);
  *((_BYTE *)this + 8) = 0;
  InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters(this);
}
