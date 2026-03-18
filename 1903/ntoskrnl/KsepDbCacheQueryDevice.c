/*
 * XREFs of KsepDbCacheQueryDevice @ 0x14074CFD8
 * Callers:
 *     KseQueryDeviceData @ 0x14074CE50 (KseQueryDeviceData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KsepCacheLookup @ 0x140738F58 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x14074CC48 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  _QWORD *v12; // rcx
  volatile signed __int64 *v13; // rbx
  char v14; // di
  _QWORD v16[10]; // [rsp+30h] [rbp-68h] BYREF

  DeviceData = -1073741275;
  memset(v16, 0, 0x48uLL);
  RtlInitUnicodeString((PUNICODE_STRING)&v16[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140468468;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = KsepCacheLookup(qword_140468468, (__int64)v16);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData((__int64)v12, a2, a3, a4, a5);
  v13 = (volatile signed __int64 *)qword_140468468;
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140468468, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return DeviceData;
}
