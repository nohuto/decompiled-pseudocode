/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14074BE90
 * Callers:
 *     KseQueryDeviceData @ 0x14074D8E0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140881F10 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KsepCacheLookup @ 0x14073B1E8 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x14073B744 (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rcx
  volatile signed __int64 *v7; // rbx
  char v8; // di
  _QWORD v10[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741811;
  memset(v10, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v6 = qword_1404681A8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v10[5], SourceString);
  if ( !KsepCacheLookup(qword_1404681A8, (__int64)v10) )
  {
    KsepCacheInsert(qword_1404681A8, a2);
    v4 = 0;
  }
  v7 = (volatile signed __int64 *)qword_1404681A8;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_1404681A8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
