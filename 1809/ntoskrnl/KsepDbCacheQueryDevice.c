/*
 * XREFs of KsepDbCacheQueryDevice @ 0x140721D58
 * Callers:
 *     KseQueryDeviceData @ 0x140721BD0 (KseQueryDeviceData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KsepCacheLookup @ 0x14070DD7C (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x14072214C (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  volatile signed __int64 *v12; // rbx
  char v13; // di
  _BYTE v15[40]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v16; // [rsp+58h] [rbp-30h] BYREF

  DeviceData = -1073741275;
  RtlInitUnicodeString(&v16, SourceString);
  CurrentThread = KeGetCurrentThread();
  v10 = qword_14043D9B8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  v11 = KsepCacheLookup(qword_14043D9B8, (__int64)v15);
  if ( v11 )
    DeviceData = KsepDbCacheQueryDeviceData((int)v11, a2, a3, a4, a5);
  v12 = (volatile signed __int64 *)qword_14043D9B8;
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_14043D9B8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return DeviceData;
}
