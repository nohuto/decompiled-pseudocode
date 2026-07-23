/*
 * XREFs of ExpPutLicenseDataIntoRegistry @ 0x1405A3404
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

__int64 ExpPutLicenseDataIntoRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // [rsp+50h] [rbp+8h]
  NTSTATUS v3; // [rsp+58h] [rbp+10h]
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  KeyHandle = 0LL;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  if ( Data )
  {
    v3 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_14090B050, 0, 0LL, 0, 0LL);
    if ( v3 >= 0 )
    {
      v2 = 1;
      v3 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14090A3E8, 0, 3u, Data, *(_DWORD *)Data);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v2 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
