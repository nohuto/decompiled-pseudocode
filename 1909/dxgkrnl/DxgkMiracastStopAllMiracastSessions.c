/*
 * XREFs of DxgkMiracastStopAllMiracastSessions @ 0x1C0140D00
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C01408C0 (DxgkSessionDisconnected.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01F1D24 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C02A4800 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C02A4EF0 (DpiMiracastHandlePowerCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C004C270 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF90 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 */

LONG __fastcall DxgkMiracastStopAllMiracastSessions(char a1, union _LARGE_INTEGER *a2, unsigned int a3)
{
  char *v6; // rsi
  __int64 i; // rbx
  char *v8; // rdi
  LONG result; // eax
  __int64 v10; // r8

  while ( 1 )
  {
    v6 = 0LL;
    AcquireMiniportListMutex();
    for ( i = qword_1C00A2B38; (__int64 *)i != &qword_1C00A2B38; i = *(_QWORD *)i )
    {
      v6 = (char *)i;
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(i + 32);
      *(_QWORD *)(i + 88) = KeGetCurrentThread();
      if ( (unsigned int)(*(_DWORD *)(i + 408) - 1) <= 1 )
      {
        DpiMiracastAddRefMiracastDeviceContext(i, (unsigned int)DxgkMiracastStopAllMiracastSessions);
        *(_QWORD *)(i + 88) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
        break;
      }
      *(_QWORD *)(i + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
    }
    v8 = 0LL;
    if ( (__int64 *)i != &qword_1C00A2B38 )
      v8 = v6;
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    result = KeReleaseMutex(Mutex, 0);
    if ( !v8 )
      return result;
    DpiMiracastStopMiracastSessionSync(v8, a1, a2, 0LL, a3, 0);
    DpiMiracastReleaseMiracastDeviceContext((int *)v8, (__int64)DxgkMiracastStopAllMiracastSessions, v10);
  }
}
