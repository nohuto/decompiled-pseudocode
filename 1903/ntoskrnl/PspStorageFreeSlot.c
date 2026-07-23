/*
 * XREFs of PspStorageFreeSlot @ 0x1408CD878
 * Callers:
 *     PsFreeSiloContextSlot @ 0x1408C4A10 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9F50 (PsUnregisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x140A03634 (PspInitializeSiloStructures.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageFreeSlot(unsigned int a1)
{
  unsigned int v1; // ebx
  _RTL_BITMAP *v2; // rdi
  unsigned int v3; // ebx

  v1 = a1;
  if ( a1 >= 0x20 )
  {
    v1 = a1 - 32;
    v2 = &PspStorageExpansionBitmap;
    if ( a1 - 32 >= 0x100 )
      return 3221225485LL;
  }
  else
  {
    v2 = &PspStorageBitmap;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  if ( _bittest64((const signed __int64 *)v2->Buffer, v1) )
  {
    _bittestandreset((signed __int32 *)v2->Buffer, v1);
    v3 = 0;
  }
  else
  {
    v3 = -1073741811;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  return v3;
}
