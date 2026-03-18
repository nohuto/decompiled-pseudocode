/*
 * XREFs of KseShimDatabaseOpen @ 0x14070EB04
 * Callers:
 *     KsepDbGetDriverShims @ 0x14070C710 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x14074DC9C (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x140882388 (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140A030C8 (KseInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KsepShimDbMapToMemory @ 0x14070A6E4 (KsepShimDbMapToMemory.c)
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
      _InterlockedIncrement(&dword_1404464D8);
      goto LABEL_4;
    }
    v3 = KsepShimDbMapToMemory();
    if ( v3 >= 0 )
    {
      ++KsepShimDbRefCount;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1404464D4);
      goto LABEL_4;
    }
    *a1 = 0LL;
    _InterlockedIncrement(&dword_1404464DC);
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
  _InterlockedIncrement(&dword_1404464D0);
LABEL_4:
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
