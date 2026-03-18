/*
 * XREFs of SmpSystemStoreCreate @ 0x140787E4C
 * Callers:
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x140787D2C (SmProcessConfigRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x140672F50 (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14058C1B8, 0LL);
  if ( dword_14058C1B0 == -1 )
  {
    v1 = SmpDirtyStoreCreate(
           (__int64)&SmGlobals,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140465E88 + 7888LL) >> 8) >> 1,
           0,
           &v3);
    if ( v1 >= 0 )
      dword_14058C1B0 = v3;
  }
  else
  {
    v1 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14058C1B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14058C1B8);
  KeAbPostRelease((ULONG_PTR)&qword_14058C1B8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
