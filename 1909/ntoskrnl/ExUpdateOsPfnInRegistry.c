/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x14090BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 */

__int64 __fastcall ExUpdateOsPfnInRegistry(ULONG DataSize, PVOID Data, ULONG a3, PVOID a4)
{
  char v9; // [rsp+40h] [rbp-38h]
  NTSTATUS v10; // [rsp+44h] [rbp-34h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h]

  v10 = 0;
  KeyHandle = 0LL;
  v9 = 0;
  ExpSubscriptionPfnInitialized = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  if ( DataSize )
  {
    if ( a3 )
    {
      v10 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_140947EE0, 0, 0LL, 0, 0LL);
      if ( v10 >= 0 )
      {
        v9 = 1;
        v10 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140946E78, 0, 1u, Data, DataSize);
        if ( v10 >= 0 )
          v10 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140947288, 0, 1u, a4, a3);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v10;
}
