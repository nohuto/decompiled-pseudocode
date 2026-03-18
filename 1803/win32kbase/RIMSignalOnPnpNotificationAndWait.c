/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C00FB238
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C00FAB00 (RIMDeviceNotify.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C00FB99C (RIMWaitForPriorPnpWorkToComplete.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v10; // eax
  LARGE_INTEGER PerformanceCounter; // rax

  ObReferenceObjectByPointer(*(PVOID *)(a2 + 32), 3u, ExRawInputManagerObjectType, 0);
  RIMWaitForPriorPnpWorkToComplete(a1, a2);
  if ( !*(_BYTE *)(a1 + 72) && !*(_BYTE *)(a1 + 73) )
  {
    if ( __CFSHR__(*(_DWORD *)(a2 + 184), 5) || *(_QWORD *)(a2 + 312) || (v10 = *(_DWORD *)(a1 + 892), (v10 & 1) != 0) )
    {
      DbgkWerCaptureLiveKernelDump(
        L"win32kbase.sys",
        356LL,
        -__CFSHR__(*(_DWORD *)(a2 + 184), 5),
        *(_QWORD *)(a2 + 312),
        -(*(_DWORD *)(a1 + 892) & 1),
        0LL,
        0LL,
        0LL,
        0);
      v10 = *(_DWORD *)(a1 + 892);
    }
    *(_DWORD *)(a1 + 892) = v10 | 1;
    *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFFFFF0 | (a6 != 0 ? 8 : 0) | (a5 != 0 ? 4 : 0) | (a4 != 0 ? 2 : 0) | (a3 != 0) | 0x10;
    *(_QWORD *)(a2 + 312) = KeGetCurrentThread();
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *(_DWORD *)(a2 + 368) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)(a2 + 360) = PerformanceCounter;
    *(LARGE_INTEGER *)(a1 + 712) = PerformanceCounter;
    *(_DWORD *)(a1 + 704) = 1;
    qword_1C01A1620 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    ZwSetEvent(*(HANDLE *)(a1 + 376), 0LL);
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x27u,
      (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      a1,
      a2);
    *(_QWORD *)(a1 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a2 + 352), WrUserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 96);
    *(_QWORD *)(a2 + 312) = 0LL;
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x28u,
      (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      a1,
      a2);
    *(_DWORD *)(a1 + 892) &= ~1u;
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *(_DWORD *)(a2 + 368) = 0;
    *(_QWORD *)(a2 + 360) = 0LL;
    *(_QWORD *)(a1 + 712) = 0LL;
    qword_1C01A1620 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(*(PVOID *)(a2 + 32));
  return 0LL;
}
