/*
 * XREFs of UsbhFreeTimerObject @ 0x1C0049E2C
 * Callers:
 *     UsbhBusPnpStart @ 0x1C0027460 (UsbhBusPnpStart.c)
 *     UsbhBusPnpStop_Action @ 0x1C0042850 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x1C000F100 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

void __fastcall UsbhFreeTimerObject(__int64 a1, __int64 *a2)
{
  KSPIN_LOCK *v4; // rbp
  void *v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // r14

  v4 = (KSPIN_LOCK *)FdoExt(a1);
  Log(a1, 0x2000, 1718773076, (__int64)a2, *a2);
  v5 = (void *)*a2;
  if ( *a2 )
  {
    UsbhDisableTimerObject(a1, *a2);
    v6 = KeAcquireSpinLockRaiseToDpc(v4 + 466);
    *a2 = 0LL;
    v7 = v6;
    Log(a1, 0x2000, 1718768689, (__int64)v5, 0LL);
    ExFreePoolWithTag(v5, 0);
    KeReleaseSpinLock(v4 + 466, v7);
  }
}
