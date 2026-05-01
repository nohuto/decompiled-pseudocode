/*
 * XREFs of ?CreateSplashScreen@CImmersiveWindowFactoryBase@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z @ 0x1803BE900
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1803B4090 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::CreateSplashScreen(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (a2 & 0xFFFFFFDF) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 - 72) + 80LL))(a1 - 72, a2, a3);
}
