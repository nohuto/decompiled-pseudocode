/*
 * XREFs of ?SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z @ 0x1803BEDA4
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1803AD5A4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1803B4090 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CImmersiveWindowFactoryBase::SetExistingSplashScreen(
        CImmersiveWindowFactoryBase *this,
        struct ISplashScreen *a2)
{
  __int64 v4; // rcx
  struct ISplashScreen *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 104) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((struct ISplashScreen **)this + 20) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
    v4 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
