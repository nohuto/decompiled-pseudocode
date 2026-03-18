/*
 * XREFs of KseQueryDeviceDataList @ 0x140882810
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140908F10 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KsepShimDbChanged @ 0x14018289C (KsepShimDbChanged.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KsepCacheLookup @ 0x140738F58 (KsepCacheLookup.c)
 *     KsepDbCacheInsertDevice @ 0x14074B400 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheReadDevice @ 0x14074D20C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x14074D390 (KsepCacheDeviceFree.c)
 *     KseResetDeviceCache @ 0x1408829C4 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x140882BB8 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140882F38 (KsepDbQueryRegistryDeviceDataList.c)
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
  if ( dword_140468424 != 2 || (KseEngine & 2) != 0 )
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
    v10 = qword_140468468;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = KsepCacheLookup(qword_140468468, (__int64)v16);
    v15 = v11;
    if ( v11 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v11, a2, a3, a4);
    v12 = (volatile signed __int64 *)qword_140468468;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140468468, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v15 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
