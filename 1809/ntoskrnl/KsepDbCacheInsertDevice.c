/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1407227F0
 * Callers:
 *     KseQueryDeviceData @ 0x140720930 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408473B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     KsepCacheLookup @ 0x14070CADC (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x14070CF8C (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx
  unsigned int v6; // esi
  volatile signed __int64 *v7; // rbx
  char v8; // di
  _BYTE v10[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = qword_14043C8F8;
  v6 = -1073741811;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_14043C8F8, (__int64)v10) )
  {
    KsepCacheInsert(qword_14043C8F8, a2);
    v6 = 0;
  }
  v7 = (volatile signed __int64 *)qword_14043C8F8;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_14043C8F8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
