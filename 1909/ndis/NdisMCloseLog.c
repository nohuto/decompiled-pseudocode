/*
 * XREFs of NdisMCloseLog @ 0x1C0091950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMCloseLog(NDIS_HANDLE LogHandle)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al

  v1 = *(KSPIN_LOCK **)LogHandle;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)LogHandle + 96LL));
  v1[117] = 0LL;
  v1[65] = 0LL;
  KeReleaseSpinLock(v1 + 12, v3);
  ExFreePoolWithTag(LogHandle, 0);
}
