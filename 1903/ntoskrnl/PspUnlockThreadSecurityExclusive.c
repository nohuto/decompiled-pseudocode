/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x14012937C
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  char v4; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r14
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+70h] [rbp+18h]

  v2 = a1 + 1744;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1744), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1744));
  v19 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v7 = ++CurrentThread->AbAllocationRegionCount;
  v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    v20 = v10;
    if ( v9 )
      break;
    v11 = 1 << v10;
    v12 = v10;
    v13 = &CurrentThread->LockEntries[v12];
    v8 &= ~v11;
    if ( (v13->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v13->LockState.0 & 1) == 0
      && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && v13->LockState.SessionId == SessionId )
    {
      v13->AcquiredByte &= ~1u;
      if ( v13->LockState.0 )
      {
        if ( v13 )
        {
          v13->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v13->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v12].TreeNode);
          v14 = v13->BoostBitmap.AllFields & 0x1FFFF;
          v15 = v13->BoostBitmap.AllFields & 0xFFFE0000;
          v13->ThreadLocalFlags &= ~1u;
          v19 = v14;
          v13->BoostBitmap.AllFields = v15;
          v13->LockState.0 = 0LL;
          v16 = ((char *)v13 - (char *)CurrentThread - 800) / 96;
          if ( v7 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
          goto LABEL_16;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_16:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v19);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17);
  return KeLeaveCriticalRegionThread(a2);
}
