/*
 * XREFs of EtwpCompressionProc @ 0x1403330A0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     EtwpCompressPendingBuffers @ 0x140332D80 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x140333A6C (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r14
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  _KLOCK_ENTRY *v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 280, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 280, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[288];
    if ( !v3 )
      break;
    if ( v4 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v4 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 282), 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 141, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 141);
    v17 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(a1 + 282)) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount;
    v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v3 = !_BitScanReverse((unsigned int *)&v12, v8);
      v18 = v12;
      if ( v3 )
        goto LABEL_19;
      v9 = 1 << v12;
      v10 = v12;
      v11 = &CurrentThread->LockEntries[v10];
      v8 &= ~v9;
      if ( (v11->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v11->LockState.0 & 1) == 0
        && (*(_QWORD *)&v11->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(a1 + 282) & 0x7FFFFFFFFFFFFFFCLL)
        && v11->LockState.SessionId == SessionId )
      {
        v11->AcquiredByte &= ~1u;
        if ( v11->LockState.0 )
          break;
      }
    }
    if ( !v11 )
    {
LABEL_19:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)(a1 + 282), SessionId, 0LL);
      goto LABEL_26;
    }
    v11->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v11->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v10].TreeNode);
    v13 = v11->BoostBitmap.AllFields & 0x1FFFF;
    v14 = v11->BoostBitmap.AllFields & 0xFFFE0000;
    v11->ThreadLocalFlags &= ~1u;
    v17 = v13;
    v11->BoostBitmap.AllFields = v14;
    v11->LockState.0 = 0LL;
    v15 = ((char *)v11 - (char *)CurrentThread - 800) / 96;
    if ( v7 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v15;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
LABEL_26:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)(a1 + 282), &v17);
    v3 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v3 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v16);
  }
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}
