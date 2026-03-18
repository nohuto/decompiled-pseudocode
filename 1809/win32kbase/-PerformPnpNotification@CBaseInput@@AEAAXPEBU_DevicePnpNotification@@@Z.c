/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C004E244
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004E0AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003223C (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     RimInputTypeToDeviceInputType @ 0x1C004AFEC (RimInputTypeToDeviceInputType.c)
 *     GetKnownRIMDeviceKind @ 0x1C007C124 (GetKnownRIMDeviceKind.c)
 *     ApiSetEditionWakeInputThreadForPnp @ 0x1C00A5E74 (ApiSetEditionWakeInputThreadForPnp.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0148CD0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  int KnownRIMDeviceKind; // eax
  int v7; // r15d
  CInputThread *v8; // rdi
  bool v9; // bl
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // r8
  _QWORD *v14; // rdx
  _QWORD *i; // rcx
  unsigned int v16; // eax
  struct DEVICEINFO *v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-D0h]
  _QWORD v19[32]; // [rsp+40h] [rbp-C0h] BYREF

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredMsgKM("We should never get here on non-GUI thread. High probability of imminent crash");
  v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = *(_DWORD *)(v4 + 16);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 == 2 && (unsigned int)(*((_DWORD *)a2 + 5) - 2) <= 1 )
  {
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
      MicrosoftTelemetryAssertTriggeredMsgKM("How come OPENED or CLOSED PnP notification executing on the thread other then SENSOR's THREAD");
    KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
    if ( KnownRIMDeviceKind )
    {
      v7 = *((_DWORD *)a2 + 5);
      v8 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
      LODWORD(v18) = KnownRIMDeviceKind;
      HIDWORD(v18) = *((_DWORD *)a2 + 2);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v8, 0LL);
      v9 = CInputThread::_CalledOnInputThread(v8);
      ExReleasePushLockSharedEx(v8, 0LL);
      KeLeaveCriticalRegion();
      v10 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
      if ( v9 )
      {
        LODWORD(v19[0]) = v10;
        memset((char *)v19 + 4, 0, 0xF4uLL);
        v17 = *(struct DEVICEINFO **)a2;
        v19[1] = v18;
        LODWORD(v19[2]) = v7;
        InputExtensibilityCallout::CallUserModeWithDeviceLock(
          *(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
          v17,
          (struct _CLIENT_DEVICE_NOTIFICATION *)v19);
      }
      else
      {
        if ( dword_1C01C3010[12 * v10] != 1 )
          MicrosoftTelemetryAssertTriggeredMsgKM("This sensor is NOT running on Dedicated thread, why are we marshaling?");
        v11 = Win32AllocPool(24LL, 0x6D504E50u);
        if ( v11 )
        {
          v12 = (_QWORD *)(v11 + 16);
          *(_QWORD *)v11 = v18;
          *(_DWORD *)(v11 + 8) = v7;
          *(_QWORD *)(v11 + 16) = 0LL;
          RIMLockExclusive((__int64)this + 1096);
          v14 = (_QWORD *)((char *)this + 1088);
          for ( i = (_QWORD *)*((_QWORD *)this + 136); i; i = (_QWORD *)*i )
            v14 = i;
          *v14 = v12;
          if ( *v12 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(i, v14, v13);
          *((_QWORD *)this + 138) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 1096, 0LL);
          KeLeaveCriticalRegion();
          v16 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
          ApiSetEditionWakeInputThreadForPnp(v16);
        }
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x4Cu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionDevicePnpNotificationSupported() >= 0 )
    EditionDevicePnpNotification(a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x4Du,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
}
