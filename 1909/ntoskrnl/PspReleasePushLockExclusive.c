/*
 * XREFs of PspReleasePushLockExclusive @ 0x140198344
 * Callers:
 *     PsStartSiloMonitor @ 0x14077E230 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9830 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspReleasePushLockExclusive(__int64 a1)
{
  char v1; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // si
  unsigned int v5; // r8d
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  _KLOCK_ENTRY *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h]

  v16 = a1;
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  LODWORD(v16) = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PspSiloMonitorLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v5);
    v17 = v7;
    if ( v6 )
      break;
    v8 = 1 << v7;
    v9 = v7;
    v10 = &CurrentThread->LockEntries[v9];
    v5 &= ~v8;
    if ( (v10->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v10->LockState.0 & 1) == 0
      && (*(_QWORD *)&v10->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PspSiloMonitorLock & 0x7FFFFFFFFFFFFFFCLL)
      && v10->LockState.SessionId == SessionId )
    {
      v10->AcquiredByte &= ~1u;
      if ( v10->LockState.0 )
      {
        if ( v10 )
        {
          v10->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v10->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v9].TreeNode);
          v11 = v10->BoostBitmap.AllFields & 0x1FFFF;
          v12 = v10->BoostBitmap.AllFields & 0xFFFE0000;
          v10->ThreadLocalFlags &= ~1u;
          LODWORD(v16) = v11;
          v10->BoostBitmap.AllFields = v12;
          v10->LockState.0 = 0LL;
          v13 = ((char *)v10 - (char *)CurrentThread - 800) / 96;
          if ( v4 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v13;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
          goto LABEL_16;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PspSiloMonitorLock, SessionId, 0LL);
LABEL_16:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PspSiloMonitorLock, &v16);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
