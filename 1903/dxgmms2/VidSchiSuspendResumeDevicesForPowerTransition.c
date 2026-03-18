/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C00109BC
 * Callers:
 *     VidSchResumeAdapter @ 0x1C007CF00 (VidSchResumeAdapter.c)
 *     VidSchSuspendAdapter @ 0x1C007CF50 (VidSchSuspendAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0010A98 (VidSchiDecrementDeviceReference.c)
 *     VidSchSuspendResumeDevice @ 0x1C0010B50 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // r15
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_BYTE *)(a1 + 2400) = a2;
  v2 = (KSPIN_LOCK *)(a1 + 1648);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  v4 = *(_QWORD **)(a1 + 280);
  while ( v4 != (_QWORD *)(a1 + 280) )
  {
    v5 = v4 - 13;
    _InterlockedIncrement64(v4 - 10);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v4 - 7) & 0x10) == 0 && *(_QWORD **)(a1 + 224) != v5 )
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)(v4 - 13));
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v4 = (_QWORD *)*v4;
    VidSchiDecrementDeviceReference(v5);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
