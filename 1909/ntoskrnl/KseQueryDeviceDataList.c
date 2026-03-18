/*
 * XREFs of KseQueryDeviceDataList @ 0x140881F10
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140908970 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KsepShimDbChanged @ 0x140182E4C (KsepShimDbChanged.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KsepCacheLookup @ 0x14073B1E8 (KsepCacheLookup.c)
 *     KsepDbCacheInsertDevice @ 0x14074BE90 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheReadDevice @ 0x14074DC9C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x14074DE20 (KsepCacheDeviceFree.c)
 *     KseResetDeviceCache @ 0x1408820C4 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x1408822B8 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140882638 (KsepDbQueryRegistryDeviceDataList.c)
 */

__int64 __fastcall KseQueryDeviceDataList(wchar_t *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  volatile signed __int64 *v12; // rsi
  _QWORD *v13; // rbx
  _QWORD *v15; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v16[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v16, 0, 0x48uLL);
  v15 = 0LL;
  if ( dword_140468164 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList(SourceString, a2, a3, a4);
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache();
LABEL_13:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, (__int64 *)&v15);
      if ( RegistryDeviceDataList >= 0 )
      {
        v13 = v15;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v15, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v13) < 0 )
          KsepCacheDeviceFree(v13);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&v16[5], SourceString);
    CurrentThread = KeGetCurrentThread();
    v10 = qword_1404681A8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = KsepCacheLookup(qword_1404681A8, (__int64)v16);
    v15 = v11;
    if ( v11 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v11, a2, a3, a4);
    v12 = (volatile signed __int64 *)qword_1404681A8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1404681A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v15 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
