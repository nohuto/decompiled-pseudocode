/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1408D0000
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

__int64 __fastcall ExUpdateOsPfnInRegistry(ULONG DataSize, PVOID Data, ULONG a3, PVOID a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v10; // [rsp+40h] [rbp-28h]
  NTSTATUS v11; // [rsp+44h] [rbp-24h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0;
  KeyHandle = 0LL;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  if ( DataSize )
  {
    if ( a3 )
    {
      v11 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_14090B020, 0, 0LL, 0, 0LL);
      if ( v11 >= 0 )
      {
        v10 = 1;
        v11 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140909FE8, 0, 1u, Data, DataSize);
        if ( v11 >= 0 )
          v11 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14090A3F8, 0, 1u, a4, a3);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v11;
}
