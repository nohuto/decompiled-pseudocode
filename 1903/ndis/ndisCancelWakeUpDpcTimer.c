/*
 * XREFs of ndisCancelWakeUpDpcTimer @ 0x1C0014778
 * Callers:
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00B6E00 (NdisMIdleNotificationConfirm.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisCancelWakeUpDpcTimer(__int64 a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v4; // bp

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(a1 + 124) |= 0x20000000u;
  *(_QWORD *)(a1 + 520) = CurrentThread;
  v4 = v2;
  if ( KeCancelTimer((PKTIMER)(a1 + 216)) )
    KeSetEvent((PRKEVENT)(a1 + 1912), 0, 0);
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return KeWaitForSingleObject((PVOID)(a1 + 1912), Executive, 0, 0, 0LL);
}
