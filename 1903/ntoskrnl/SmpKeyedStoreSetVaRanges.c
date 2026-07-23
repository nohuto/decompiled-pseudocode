/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x140106760
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1406B36EC (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     SmpKeyedStoreEntryGet @ 0x14008AF3C (SmpKeyedStoreEntryGet.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 SmpKeyedStoreSetVaRanges(ULONG_PTR BugCheckParameter2, ...)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebp
  struct _KTHREAD *v4; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  __int64 v13; // rdx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v14; // rcx
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  va_list va; // [rsp+68h] [rbp+10h]
  __int64 v18; // [rsp+70h] [rbp+18h]
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF
  va_list va1; // [rsp+78h] [rbp+20h]
  va_list va2; // [rsp+80h] [rbp+28h] BYREF

  va_start(va2, BugCheckParameter2);
  va_start(va1, BugCheckParameter2);
  va_start(va, BugCheckParameter2);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v3 = SmpKeyedStoreEntryGet(BugCheckParameter2, (__int64 *)va, 0, 1) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  LODWORD(v19) = 0;
  v4 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
  else
    SessionId = -1;
  --v4->SpecialApcDisable;
  v6 = ++v4->AbAllocationRegionCount;
  v7 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    LODWORD(v18) = v9;
    if ( v8 )
      break;
    v10 = 1 << v9;
    v11 = v9;
    v12 = &v4->LockEntries[v11];
    v7 &= ~v10;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
      {
        if ( v12 )
        {
          v12->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v12->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v4->LockEntries[v11].TreeNode);
          LODWORD(v19) = v12->BoostBitmap.AllFields & 0x1FFFF;
          v12->BoostBitmap.AllFields &= 0xFFFE0000;
          v12->ThreadLocalFlags &= ~1u;
          v12->LockState.0 = 0LL;
          v13 = ((char *)v12 - (char *)v4 - 800) / 96;
          if ( v6 == 1 )
            v4->AbEntrySummary |= 1 << v13;
          else
            _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v13);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v4, BugCheckParameter2, SessionId, 0LL);
LABEL_17:
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, BugCheckParameter2, (__int64 *)va1);
  v8 = v4->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v14 = &v4->152;
    if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v14->ApcState.ApcListHead[0].Flink != v14 )
      KiCheckForKernelApcDelivery((__int64)v14);
  }
  KeLeaveCriticalRegion();
  return v3 - 1073741275;
}
