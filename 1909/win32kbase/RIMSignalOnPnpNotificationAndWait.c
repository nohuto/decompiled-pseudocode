/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C014E5F0
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C014E2E0 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C014F7A0 (rimDoVirtRimDevChange.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0062540 (RawInputManagerDeviceObjectReference.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C014EF1C (RIMWaitForPriorPnpWorkToComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // r8
  int v14; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v16; // edx
  int v17; // edx

  v12 = RawInputManagerDeviceObjectReference(*(void **)(a2 + 32));
  if ( v12 >= 0 )
  {
    RIMWaitForPriorPnpWorkToComplete(a1, a2);
    if ( !*(_BYTE *)(a1 + 80) && !*(_BYTE *)(a1 + 81) )
    {
      if ( __CFSHR__(*(_DWORD *)(a2 + 184), 5) || *(_QWORD *)(a2 + 312) || (v14 = *(_DWORD *)(a1 + 884), (v14 & 1) != 0) )
      {
        DbgkWerCaptureLiveKernelDump(
          L"win32kbase.sys",
          356LL,
          -__CFSHR__(*(_DWORD *)(a2 + 184), 5),
          *(_QWORD *)(a2 + 312),
          -(*(_DWORD *)(a1 + 884) & 1),
          0LL,
          0LL,
          0LL,
          0);
        v14 = *(_DWORD *)(a1 + 884);
      }
      *(_DWORD *)(a1 + 884) = v14 | 1;
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFFFFF0 | (a6 != 0 ? 8 : 0) | (a5 != 0 ? 4 : 0) | (a4 != 0 ? 2 : 0) | (a3 != 0) | 0x10;
      *(_QWORD *)(a2 + 312) = KeGetCurrentThread();
      RIMLockExclusive((__int64)&gWatchDogQPCLock);
      *(_DWORD *)(a2 + 368) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)(a2 + 360) = PerformanceCounter;
      *(LARGE_INTEGER *)(a1 + 728) = PerformanceCounter;
      *(_DWORD *)(a1 + 720) = 1;
      qword_1C02152A8 = 0LL;
      ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
      KeLeaveCriticalRegion();
      ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v16,
          1,
          44,
          (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
          a1,
          a2);
      }
      *(_QWORD *)(a1 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
      KeLeaveCriticalRegion();
      KeWaitForSingleObject(*(PVOID *)(a2 + 352), WrUserRequest, 0, 0, 0LL);
      RIMLockExclusive(a1 + 104);
      *(_QWORD *)(a2 + 312) = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v17,
          1,
          45,
          (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
          a1,
          a2);
      }
      *(_DWORD *)(a1 + 884) &= ~1u;
      RIMLockExclusive((__int64)&gWatchDogQPCLock);
      *(_DWORD *)(a2 + 368) = 0;
      *(_QWORD *)(a2 + 360) = 0LL;
      *(_QWORD *)(a1 + 728) = 0LL;
      qword_1C02152A8 = 0LL;
      ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 32));
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
  }
  return (unsigned int)v12;
}
