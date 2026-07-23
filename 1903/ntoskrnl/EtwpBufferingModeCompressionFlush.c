/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x140332D80
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408FAC14 (EtwpBufferingModeFlush.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     EtwpCompressPendingBuffers @ 0x140333320 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x14033400C (EtwpRelinquishCompressionTarget.c)
 */

__int64 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // bp
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  _KLOCK_ENTRY *v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+58h] [rbp+10h]

  result = *(unsigned int *)(a1 + 1184);
  if ( (_DWORD)result )
  {
    EtwpCompressPendingBuffers();
    v3 = a1 + 1160;
    ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1160));
    v18 = 0;
    v4 = a1 + 1160;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount;
    v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v13, v8);
      v19 = v13;
      if ( v12 )
        goto LABEL_14;
      v9 = 1 << v13;
      v10 = v13;
      v11 = &CurrentThread->LockEntries[v10];
      v8 &= ~v9;
      if ( (v11->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v11->LockState.0 & 1) == 0
        && (*(_QWORD *)&v11->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && v11->LockState.SessionId == SessionId )
      {
        v11->AcquiredByte &= ~1u;
        if ( v11->LockState.0 )
          break;
      }
    }
    if ( !v11 )
    {
LABEL_14:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
      goto LABEL_21;
    }
    v11->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v11->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v10].TreeNode);
    v14 = v11->BoostBitmap.AllFields & 0x1FFFF;
    v15 = v11->BoostBitmap.AllFields & 0xFFFE0000;
    v11->ThreadLocalFlags &= ~1u;
    v18 = v14;
    v11->BoostBitmap.AllFields = v15;
    v11->LockState.0 = 0LL;
    v16 = ((char *)v11 - (char *)CurrentThread - 800) / 96;
    if ( v7 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v16;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
LABEL_21:
    --CurrentThread->AbAllocationRegionCount;
    result = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v18);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery(v17);
    }
  }
  return result;
}
