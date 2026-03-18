/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0176550
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01767D0 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017D3F0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C017E810 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0185100 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, char *a2, __int64 a3)
{
  int v3; // edi
  char *v4; // rbx
  struct RIMDEV *v5; // rsi
  int v6; // edx
  int v8; // edx
  PVOID v9; // rbx
  struct RIMDEV *v10; // rdi
  struct RIMDEV *i; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = 0LL;
  if ( (struct _KTHREAD *)qword_1C02152E8 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      3,
      15,
      (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids);
  }
  if ( v4 == (char *)-1LL )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 3, 16, (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v6) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            3,
            17,
            (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids);
        }
      }
    }
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v4, 3u, v3 == 0, &Object) >= 0 )
    {
      v9 = Object;
      v10 = (struct RIMDEV *)((char *)Object + 88);
      if ( !Object )
        v10 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      for ( i = CBaseInput::_spDevList; i; i = (struct RIMDEV *)*((_QWORD *)i + 7) )
      {
        if ( i == v10 )
        {
          v5 = i;
          break;
        }
      }
      ObfDereferenceObject(v9);
      ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        3,
        18,
        (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids);
    }
    return v5;
  }
}
