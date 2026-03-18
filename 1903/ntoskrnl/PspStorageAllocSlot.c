/*
 * XREFs of PspStorageAllocSlot @ 0x1407599D8
 * Callers:
 *     PsAllocSiloContextSlot @ 0x1407598B0 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x1407598D0 (PsRegisterSiloMonitor.c)
 *     CmpInitSiloSupport @ 0x14077C180 (CmpInitSiloSupport.c)
 *     VRegSetup @ 0x140781F40 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140A03634 (PspInitializeSiloStructures.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x140085350 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  int v2; // edi
  ULONG ClearBitsAndSet; // ebx
  char v4; // al

  v2 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageExpansionBitmap, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v2 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  if ( v2 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v2;
}
