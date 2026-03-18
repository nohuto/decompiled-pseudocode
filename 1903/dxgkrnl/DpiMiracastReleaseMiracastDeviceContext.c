/*
 * XREFs of DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF50
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0018E60 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C004D050 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1A0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C004D780 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DC70 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C004E440 (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C004F610 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C013DD00 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01546E0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C02A4260 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C02A58C0 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C02A59A0 (DpiMiracastStopMiracastSessionWork.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C02A5A00 (DpiMiracastStopSessionRequestCallback.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5A48 (DxgkHandleMiracastEscape.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C02A61AC (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastReleaseMiracastDeviceContext(int *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rcx
  PVOID *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  _InterlockedXor(P + 7, a2);
  if ( _InterlockedExchangeAdd(P + 6, 0xFFFFFFFF) == 1 )
  {
    if ( P[7] )
    {
      v4 = WdLogNewEntry5_WdError(P, a2, a3);
      *(_QWORD *)(v4 + 24) = P[7];
      *(_QWORD *)(v4 + 32) = -1073741823LL;
      WdLogEvent5_WdError(v4);
    }
    P[4] = 0;
    v5 = (void *)*((_QWORD *)P + 60);
    if ( v5 )
      ObfDereferenceObject(v5);
    ObfDereferenceObject(*((PVOID *)P + 58));
    v6 = (void *)*((_QWORD *)P + 74);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v7 = *(_QWORD **)P;
    if ( *(int **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
}
