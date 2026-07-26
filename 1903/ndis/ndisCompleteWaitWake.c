/*
 * XREFs of ndisCompleteWaitWake @ 0x1C0013B78
 * Callers:
 *     ndisGenericWaitWakeCallback @ 0x1C0012A50 (ndisGenericWaitWakeCallback.c)
 *     ndisRequestWaitWake @ 0x1C0032E8C (ndisRequestWaitWake.c)
 *     ndisIdleWaitWakeCallback @ 0x1C00B8380 (ndisIdleWaitWakeCallback.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00BCAE0 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 */

void __fastcall ndisCompleteWaitWake(__int64 a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 1296) = 0LL;
  *(_QWORD *)(a1 + 520) = CurrentThread;
  v4 = v2;
  KeSetEvent((PRKEVENT)(a1 + 1304), 0, 0);
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  ndisDereferenceMiniport(a1, 0xAu);
}
