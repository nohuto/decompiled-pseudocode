/*
 * XREFs of SmpSystemStoreCreate @ 0x14075EB48
 * Callers:
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x14075EA34 (SmProcessConfigRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x14066B50C (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14055B1B8, 0LL);
  if ( dword_14055B1B0 == -1 )
  {
    v1 = SmpDirtyStoreCreate(
           (__int64)&SmGlobals,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_14043A748 + 7120LL) >> 8) >> 1,
           0,
           &v3);
    if ( v1 >= 0 )
      dword_14055B1B0 = v3;
  }
  else
  {
    v1 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14055B1B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14055B1B8);
  KeAbPostRelease((ULONG_PTR)&qword_14055B1B8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
