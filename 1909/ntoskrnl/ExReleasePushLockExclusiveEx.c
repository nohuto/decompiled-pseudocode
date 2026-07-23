/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x14003E840
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  char result; // al
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v9; // r15
  unsigned int v10; // edx
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  int v19; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+70h] [rbp+18h]

  v4 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( result == 2 )
    result = ExfTryToWakePushLock(BugCheckParameter2);
  if ( (v4 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0;
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2, BugCheckParameter1, a3, a4) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v9 = ++CurrentThread->AbAllocationRegionCount;
    v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    v20 = v12;
    if ( v11 )
      goto LABEL_24;
    while ( 1 )
    {
      v13 = 1 << v12;
      v14 = v12;
      v15 = &CurrentThread->LockEntries[v14];
      v10 &= ~v13;
      if ( (v15->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v15->LockState.0 & 1) == 0
        && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v15->LockState.SessionId == (_DWORD)SessionId )
      {
        v15->AcquiredByte &= ~1u;
        if ( v15->LockState.0 )
          break;
      }
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      v20 = v12;
      if ( v11 )
        goto LABEL_24;
    }
    if ( !v15 )
    {
LABEL_24:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      v15->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v15->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v14].TreeNode);
      v16 = v15->BoostBitmap.AllFields & 0x1FFFF;
      v17 = v15->BoostBitmap.AllFields & 0xFFFE0000;
      v15->ThreadLocalFlags &= ~1u;
      v19 = v16;
      v15->BoostBitmap.AllFields = v17;
      v15->LockState.0 = 0LL;
      v18 = ((char *)v15 - (char *)CurrentThread - 800) / 96;
      if ( v9 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v18;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
    }
    --CurrentThread->AbAllocationRegionCount;
    result = KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v19);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
