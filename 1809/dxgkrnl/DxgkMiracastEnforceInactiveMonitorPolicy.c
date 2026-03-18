/*
 * XREFs of DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0001B70
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00B3CA0 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0046480 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00466D0 (DpiMiracastStopMiracastSessionSync.c)
 */

LONG __fastcall DxgkMiracastEnforceInactiveMonitorPolicy(_DWORD *a1)
{
  void *v1; // rsi
  __int64 i; // rbx
  void *v4; // rdi
  LONG result; // eax
  __int64 v6; // rcx
  size_t v7; // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  AcquireMiniportListMutex();
  for ( i = qword_1C008EB38; (__int64 *)i != &qword_1C008EB38; i = *(_QWORD *)i )
  {
    v1 = (void *)i;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(i + 32);
    *(_QWORD *)(i + 88) = KeGetCurrentThread();
    if ( (unsigned int)(*(_DWORD *)(i + 408) - 1) <= 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(i + 432) + 64LL);
      if ( *(_DWORD *)(v6 + 2600) == *a1 && *(_DWORD *)(v6 + 2604) == a1[1] )
      {
        *(_BYTE *)(i + 589) = 1;
      }
      else if ( *(_BYTE *)(i + 589) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(i + 24));
        _InterlockedXor((volatile signed __int32 *)(i + 28), (unsigned int)DxgkMiracastEnforceInactiveMonitorPolicy);
        *(_QWORD *)(i + 88) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
        break;
      }
    }
    *(_QWORD *)(i + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
  }
  v4 = 0LL;
  if ( (__int64 *)i != &qword_1C008EB38 )
    v4 = v1;
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  result = KeReleaseMutex(Mutex, 0);
  if ( v4 )
  {
    LODWORD(v7) = 0;
    DpiMiracastStopMiracastSessionSync(v4, 134, v7);
    return DpiMiracastReleaseMiracastDeviceContext(v4);
  }
  return result;
}
