/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x140298ED4
 * Callers:
 *     IoEnumerateRegisteredFiltersList @ 0x14071CC10 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140784E10 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
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
