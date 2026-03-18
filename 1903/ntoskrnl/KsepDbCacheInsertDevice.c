/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14074B400
 * Callers:
 *     KseQueryDeviceData @ 0x14074CE50 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140882810 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KsepCacheLookup @ 0x140738F58 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x1407394B4 (KsepCacheInsert.c)
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
  v6 = qword_140468468;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v10[5], SourceString);
  if ( !KsepCacheLookup(qword_140468468, (__int64)v10) )
  {
    KsepCacheInsert(qword_140468468, a2);
    v4 = 0;
  }
  v7 = (volatile signed __int64 *)qword_140468468;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140468468, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
