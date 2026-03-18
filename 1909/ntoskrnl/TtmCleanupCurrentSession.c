/*
 * XREFs of TtmCleanupCurrentSession @ 0x1408BCB88
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     PsGetProcessSessionIdEx @ 0x1400F17F0 (PsGetProcessSessionIdEx.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PoUnregisterPowerSettingCallback @ 0x140747B40 (PoUnregisterPowerSettingCallback.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x1408BDDE0 (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1408BDFC4 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1408C0460 (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x1408C0504 (TtmiLogCleanupCurrentSessionStop.c)
 */

__int64 TtmCleanupCurrentSession()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  TtmiLogCleanupCurrentSessionStart();
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v3 = TtmpSession;
  if ( !TtmpSession || *(_DWORD *)TtmpSession == v2 )
  {
    TtmpCleanupPowerRequestsTrackingFromCurrentSession(TtmpSession);
    v4 = *(void **)(v3 + 24);
    *(_QWORD *)(v3 + 32) = 0LL;
    ObCloseHandle(v4, 0);
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_DWORD *)(v3 + 4) |= 4u;
    TtmpDereferenceSessionMaybeLast(v3);
    TtmpSession = 0LL;
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    v5 = *(void **)(v3 + 248);
    if ( v5 )
    {
      PoUnregisterPowerSettingCallback(v5);
      *(_QWORD *)(v3 + 248) = 0LL;
      TtmpDereferenceSessionMaybeLast(v3);
    }
    v6 = *(void **)(v3 + 256);
    if ( v6 )
    {
      PoUnregisterPowerSettingCallback(v6);
      *(_QWORD *)(v3 + 256) = 0LL;
      TtmpDereferenceSessionMaybeLast(v3);
    }
  }
  else
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return TtmiLogCleanupCurrentSessionStop();
}
