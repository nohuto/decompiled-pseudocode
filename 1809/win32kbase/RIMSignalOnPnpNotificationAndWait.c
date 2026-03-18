/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C01245D0
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C0124330 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C01256D8 (rimDoVirtRimDevChange.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C0124E84 (RIMWaitForPriorPnpWorkToComplete.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v10; // eax
  LARGE_INTEGER PerformanceCounter; // rax

  ObReferenceObjectByPointer(*(PVOID *)(a2 + 32), 3u, ExRawInputManagerObjectType, 0);
  RIMWaitForPriorPnpWorkToComplete(a1, a2);
  if ( !*(_BYTE *)(a1 + 80) && !*(_BYTE *)(a1 + 81) )
  {
    if ( __CFSHR__(*(_DWORD *)(a2 + 184), 5) || *(_QWORD *)(a2 + 312) || (v10 = *(_DWORD *)(a1 + 884), (v10 & 1) != 0) )
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
      v10 = *(_DWORD *)(a1 + 884);
    }
    *(_DWORD *)(a1 + 884) = v10 | 1;
    *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFFFFF0 | (a6 != 0 ? 8 : 0) | (a5 != 0 ? 4 : 0) | (a4 != 0 ? 2 : 0) | (a3 != 0) | 0x10;
    *(_QWORD *)(a2 + 312) = KeGetCurrentThread();
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *(_DWORD *)(a2 + 368) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)(a2 + 360) = PerformanceCounter;
    *(LARGE_INTEGER *)(a1 + 728) = PerformanceCounter;
    *(_DWORD *)(a1 + 720) = 1;
    qword_1C01D0C18 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
    WPP_RECORDER_SF_qq(gRimLog, 3u, 0x15u, 0x2Cu, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a1, a2);
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a2 + 352), WrUserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 104);
    *(_QWORD *)(a2 + 312) = 0LL;
    WPP_RECORDER_SF_qq(gRimLog, 3u, 0x15u, 0x2Du, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a1, a2);
    *(_DWORD *)(a1 + 884) &= ~1u;
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *(_DWORD *)(a2 + 368) = 0;
    *(_QWORD *)(a2 + 360) = 0LL;
    *(_QWORD *)(a1 + 728) = 0LL;
    qword_1C01D0C18 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(*(PVOID *)(a2 + 32));
  return 0LL;
}
