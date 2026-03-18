/*
 * XREFs of IsPciBusAsync @ 0x1C0023B40
 * Callers:
 *     IsPciBusAsyncWorker @ 0x1C0010D70 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0022520 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C00268E0 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     IsNsobjPciBus @ 0x1C009D2C0 (IsNsobjPciBus.c)
 * Callees:
 *     IsPciBusAsyncWorker @ 0x1C0010D70 (IsPciBusAsyncWorker.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall IsPciBusAsync(volatile signed __int32 *a1, KSPIN_LOCK a2, KSPIN_LOCK a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  KSPIN_LOCK *PoolWithTag; // rbx
  char v11; // al
  KIRQL v13; // al
  __int64 v14; // rcx
  _BYTE *v15; // rdx

  *a4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  if ( (v9 & 0x100000000LL) != 0 )
    return 0LL;
  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x46706341u);
  if ( PoolWithTag )
    goto LABEL_5;
  v13 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
  v14 = 0LL;
  v15 = &unk_1C0081CA8;
  while ( *v15 )
  {
    v14 = (unsigned int)(v14 + 1);
    v15 += 144;
    if ( (unsigned int)v14 >= 4 )
      goto LABEL_15;
  }
  LOBYTE(gPreAllocPciPool[18 * v14 + 17]) = 1;
  PoolWithTag = &gPreAllocPciPool[18 * v14];
LABEL_15:
  KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v13);
  if ( !PoolWithTag )
    return 3221225626LL;
LABEL_5:
  memset(PoolWithTag + 1, 0, 0x80uLL);
  v11 = gdwfAMLI;
  *PoolWithTag = (KSPIN_LOCK)a1;
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (v11 & 4) != 0 )
    _InterlockedIncrement(a1 + 2);
  *((_DWORD *)PoolWithTag + 10) = -1;
  PoolWithTag[6] = a2;
  PoolWithTag[7] = a3;
  PoolWithTag[8] = (KSPIN_LOCK)a4;
  return IsPciBusAsyncWorker((__int64)a1, 0, 0, PoolWithTag);
}
