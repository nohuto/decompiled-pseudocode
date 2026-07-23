/*
 * XREFs of KseQueryDeviceDataList @ 0x140848610
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1408CC820 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KsepShimDbChanged @ 0x14017907C (KsepShimDbChanged.c)
 *     KsepCacheLookup @ 0x14070DD7C (KsepCacheLookup.c)
 *     KsepDbCacheReadDevice @ 0x140721F7C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x1407220F0 (KsepCacheDeviceFree.c)
 *     KsepDbCacheInsertDevice @ 0x140723A90 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x1408487A8 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x140848998 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140848CE4 (KsepDbQueryRegistryDeviceDataList.c)
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
  _BYTE v16[40]; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v15 = 0LL;
  if ( dword_14043D974 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList();
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache();
LABEL_13:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, &v15);
      if ( RegistryDeviceDataList >= 0 )
      {
        v13 = v15;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v15, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v13) < 0 )
          KsepCacheDeviceFree(v13);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    CurrentThread = KeGetCurrentThread();
    v10 = qword_14043D9B8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = KsepCacheLookup(qword_14043D9B8, (__int64)v16);
    v15 = v11;
    if ( v11 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v11, a2, a3, a4);
    v12 = (volatile signed __int64 *)qword_14043D9B8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_14043D9B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v15 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
