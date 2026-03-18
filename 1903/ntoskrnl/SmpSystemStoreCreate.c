/*
 * XREFs of SmpSystemStoreCreate @ 0x140785AEC
 * Callers:
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x1407859CC (SmProcessConfigRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x1406B3878 (SmpDirtyStoreCreate.c)
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
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140466188 + 7888LL) >> 8) >> 1,
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
