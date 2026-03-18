/*
 * XREFs of ExUpdateLicenseRegistry @ 0x1406C02D8
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406BF930 (ExpWatchProductTypeWork.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     NtSetValueKey @ 0x1405CC8E0 (NtSetValueKey.c)
 */

__int64 ExUpdateLicenseRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v1; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  v1 = ExpProductTypeKey;
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096E4E0, 0LL);
  if ( Data )
    v2 = NtSetValueKey(v1, (PUNICODE_STRING)&stru_140909148, 0, 3u, Data, *(_DWORD *)Data);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096E4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096E4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096E4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
