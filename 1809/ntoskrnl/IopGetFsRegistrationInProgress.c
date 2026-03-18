/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x140283C7C
 * Callers:
 *     IoEnumerateRegisteredFiltersList @ 0x14070CA20 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075BF80 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
 */

char IopGetFsRegistrationInProgress()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireQueuedSpinLock(0xAuLL);
  v1 = IopFsRegistrationInProgress;
  KeReleaseQueuedSpinLock(0xAuLL, v0);
  return v1;
}
