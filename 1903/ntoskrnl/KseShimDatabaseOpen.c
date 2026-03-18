/*
 * XREFs of KseShimDatabaseOpen @ 0x14070CD24
 * Callers:
 *     KsepDbGetDriverShims @ 0x14070A930 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x14074D20C (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x140882C88 (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140A02BAC (KseInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KsepShimDbMapToMemory @ 0x140708904 (KsepShimDbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  char v4; // si

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( !KsepShimDbDuringBoot )
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v3 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1404467B8);
      goto LABEL_4;
    }
    v3 = KsepShimDbMapToMemory();
    if ( v3 >= 0 )
    {
      ++KsepShimDbRefCount;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1404467B4);
      goto LABEL_4;
    }
    *a1 = 0LL;
    _InterlockedIncrement(&dword_1404467BC);
LABEL_12:
    v3 = -1073741823;
    goto LABEL_4;
  }
  if ( !KsepShimDbHandle )
  {
    *a1 = 0LL;
    goto LABEL_12;
  }
  ++KsepShimDbRefCount;
  v3 = 0;
  *a1 = KsepShimDbHandle;
  _InterlockedIncrement(&dword_1404467B0);
LABEL_4:
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
