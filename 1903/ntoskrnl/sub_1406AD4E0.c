/*
 * XREFs of sub_1406AD4E0 @ 0x1406AD4E0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 */

__int64 sub_1406AD4E0()
{
  char v1; // [rsp+60h] [rbp+8h]
  NTSTATUS v2; // [rsp+68h] [rbp+10h]
  HANDLE KeyHandle; // [rsp+70h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+20h]

  v2 = 0;
  KeyHandle = 0LL;
  v1 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  if ( Data )
  {
    v2 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_140948440, 0, 0LL, 0, 0LL);
    if ( v2 >= 0 )
    {
      v1 = 1;
      v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140947808, 0, 3u, Data, *(_DWORD *)Data);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v1 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
