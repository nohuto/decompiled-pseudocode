/*
 * XREFs of EtwpSetCompressionSettings @ 0x1403340FC
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1)
{
  unsigned int v2; // esi
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r15
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v19; // rcx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h]

  v2 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], *a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = v4 + 1160;
    ExAcquirePushLockExclusiveEx(v4 + 1160, 0LL);
    v5[298] = a1[1];
    v5[297] = a1[2];
    v5[299] = a1[3];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    CurrentThread = KeGetCurrentThread();
    v21 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v9 = ++CurrentThread->AbAllocationRegionCount;
    v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v10);
      v22 = v15;
      if ( v14 )
        goto LABEL_15;
      v11 = 1 << v15;
      v12 = v15;
      v13 = &CurrentThread->LockEntries[v12];
      v10 &= ~v11;
      if ( (v13->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v13->LockState.0 & 1) == 0
        && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && v13->LockState.SessionId == SessionId )
      {
        v13->AcquiredByte &= ~1u;
        if ( v13->LockState.0 )
          break;
      }
    }
    if ( !v13 )
    {
LABEL_15:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, SessionId, 0LL);
      goto LABEL_22;
    }
    v13->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v13->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v12].TreeNode);
    v16 = v13->BoostBitmap.AllFields & 0x1FFFF;
    v17 = v13->BoostBitmap.AllFields & 0xFFFE0000;
    v13->ThreadLocalFlags &= ~1u;
    v21 = v16;
    v13->BoostBitmap.AllFields = v17;
    v13->LockState.0 = 0LL;
    v18 = ((char *)v13 - (char *)CurrentThread - 800) / 96;
    if ( v9 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v18;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
LABEL_22:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v6, &v21);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 )
    {
      v19 = &CurrentThread->152;
      if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v19->ApcState.ApcListHead[0].Flink != v19 )
        KiCheckForKernelApcDelivery((__int64)v19);
    }
    EtwpReleaseLoggerContext(v5, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
