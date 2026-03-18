/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0149870
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C0149B40 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CF80 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C014E5F0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0153340 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, char *a2, __int64 a3)
{
  int v3; // edi
  struct DEVICEINFO *v5; // rsi
  PVOID v7; // rbx
  struct DEVICEINFO *v8; // rdi
  struct DEVICEINFO *i; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  v5 = 0LL;
  if ( (struct _KTHREAD *)qword_1C01D0C68 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0xFu,
      (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids);
  if ( a2 == (char *)-1LL )
  {
    WPP_RECORDER_SF_(gBaseLog, 2u, 2u, 0x10u, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x11u,
        (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids);
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(a2, 3u, v3 == 0, &Object) >= 0 )
    {
      v7 = Object;
      v8 = (struct DEVICEINFO *)((char *)Object + 88);
      if ( !Object )
        v8 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( i == v8 )
        {
          v5 = i;
          break;
        }
      }
      ObfDereferenceObject(v7);
      ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x12u,
        (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids);
    return v5;
  }
}
