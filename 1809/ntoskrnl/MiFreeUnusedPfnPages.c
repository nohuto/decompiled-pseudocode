/*
 * XREFs of MiFreeUnusedPfnPages @ 0x140184120
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     MiGetNextNonGapPfnPage @ 0x1401845A8 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlCompareMemoryUlong @ 0x1401C5DB0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r14
  char *AnyMultiplexedVm; // r13
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rsi
  unsigned int i; // r12d
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // di
  __int64 v10; // r8
  _QWORD *NextNonGapPfnPage; // rbx
  __int64 v12; // r8
  SIZE_T v13; // rdi
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *v18; // rbx
  unsigned __int8 v19; // r14
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 result; // rax
  SIZE_T v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // r15
  char *v32; // r15
  char *v33; // r12
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KTHREAD *v36; // rbx
  __int64 v37; // rdx
  unsigned __int8 v38; // r12
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int8 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rdx
  SIZE_T Length; // [rsp+30h] [rbp-49h] BYREF
  int v50; // [rsp+38h] [rbp-41h]
  int v51; // [rsp+3Ch] [rbp-3Dh]
  int v52; // [rsp+40h] [rbp-39h]
  struct _KTHREAD *v53; // [rsp+48h] [rbp-31h]
  __int64 v54; // [rsp+50h] [rbp-29h] BYREF
  ULONG_PTR v55; // [rsp+58h] [rbp-21h] BYREF
  __int16 v56; // [rsp+60h] [rbp-19h] BYREF
  char v57; // [rsp+62h] [rbp-17h]
  int v58; // [rsp+64h] [rbp-15h]
  _QWORD v59[2]; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR *v60; // [rsp+78h] [rbp-1h]
  char *v61; // [rsp+80h] [rbp+7h]
  KIRQL v62; // [rsp+E0h] [rbp+67h]
  int v63; // [rsp+E8h] [rbp+6Fh] BYREF
  int v64; // [rsp+F0h] [rbp+77h] BYREF
  int v65; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = &MiSystemPartition;
  if ( a1 )
    v1 = a1;
  v60 = v1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v61 = AnyMultiplexedVm;
  CurrentThread = KeGetCurrentThread();
  v5 = (ULONG_PTR)(v1 + 23);
  v53 = CurrentThread;
  for ( i = -1; ; i = -1 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 23), 0LL);
    if ( !a1 && *((_BYTE *)v1 + 196) == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v1 + 23);
      v64 = 0;
      v18 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 23)) == 1 )
        i = MmGetSessionIdEx((__int64)v18->ApcState.Process);
      --v18->SpecialApcDisable;
      v44 = ++v18->AbAllocationRegionCount;
      LODWORD(v45) = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v46, v45);
        v51 = v46;
        if ( v21 )
          goto LABEL_104;
        v47 = (__int64)&v18->LockEntries[v46];
        v45 = ~(1 << v46) & (unsigned int)v45;
        if ( (*(_BYTE *)(v47 + 26) & 1) != 0
          && (*(_DWORD *)(v47 + 32) & 1) == 0
          && (*(_QWORD *)(v47 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v47 + 40) == i )
        {
          *(_BYTE *)(v47 + 26) &= ~1u;
          if ( *(_QWORD *)(v47 + 32) )
            break;
        }
      }
      if ( v47 )
      {
        *(_BYTE *)(v47 + 32) |= 2u;
        if ( *(__int64 *)(v47 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v47, v45);
        v64 = 0;
        v64 = *(_DWORD *)(v47 + 88) & 0x1FFFF;
        *(_DWORD *)(v47 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v47 + 25) &= ~1u;
        *(_QWORD *)(v47 + 32) = 0LL;
        v48 = (v47 - (__int64)v18 - 800) / 96;
        if ( v44 == 1 )
          v18->AbEntrySummary |= 1 << v48;
        else
          _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v48);
      }
      else
      {
LABEL_104:
        if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v18, v5, i, 0LL);
      }
      --v18->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v18, v5, (__int64)&v64);
      v21 = v18->SpecialApcDisable++ == -1;
      if ( !v21 )
        return KiLeaveGuardedRegionUnsafe((__int64)v53);
      goto LABEL_48;
    }
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v8 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v9 = v8;
    v62 = v8;
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1 + 48);
    if ( !v1[5] )
    {
      if ( !a1 )
        *((_BYTE *)v1 + 196) = 1;
      v54 = 0LL;
      LOBYTE(v10) = v9;
      NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v54, &Length, v10, 1LL);
      if ( !NextNonGapPfnPage )
        goto LABEL_17;
      while ( 1 )
      {
        v13 = Length;
        if ( (Length & 0xFFF) != 0 )
          goto LABEL_15;
        do
        {
          if ( *NextNonGapPfnPage )
          {
LABEL_12:
            v14 = 4096LL;
            goto LABEL_13;
          }
          v29 = RtlCompareMemoryUlong(NextNonGapPfnPage, v13, 0);
          v14 = v29;
          if ( v29 >= 0x1000 )
          {
            Length = (SIZE_T)NextNonGapPfnPage;
            v30 = (__int64)(NextNonGapPfnPage + 0xB000000000LL) / 48;
            v31 = (_QWORD *)(48 * v30 - 0x58000000000LL);
            if ( v31 != NextNonGapPfnPage
              && (!MiIsAddressValid(48 * v30 - 0x58000000000LL) || RtlCompareMemoryUlong(v31, 0x30uLL, 0) != 48) )
            {
              Length = (SIZE_T)(NextNonGapPfnPage + 512);
            }
            v32 = (char *)NextNonGapPfnPage + (v14 & 0xFFFFFFFFFFFFF000uLL);
            v33 = (char *)(48 * ((__int64)(v32 + 0x58000000000LL) / 48) - 0x58000000000LL);
            if ( v33 != v32 && (!MiIsAddressValid((__int64)(v33 + 48)) || RtlCompareMemoryUlong(v33, 0x30uLL, 0) != 48) )
              v32 -= 4096;
            MiPfnRangeIsZero(Length, v32);
          }
          else if ( !v29 )
          {
            goto LABEL_12;
          }
LABEL_13:
          v15 = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          NextNonGapPfnPage = (_QWORD *)((char *)NextNonGapPfnPage + v15);
          v13 -= v15;
        }
        while ( v13 >= 0x1000 );
        Length = v13;
LABEL_15:
        v9 = v62;
        LOBYTE(v12) = v62;
        NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v54, &Length, v12, 1LL);
        if ( !NextNonGapPfnPage )
        {
          v1 = v60;
          i = -1;
          AnyMultiplexedVm = v61;
          v5 = (ULONG_PTR)(v60 + 23);
LABEL_17:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 48);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
            KeGetCurrentIrql();
          __writecr8(2uLL);
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v9, v16, v17);
          *((_BYTE *)v1 + 196) = 0;
          v1[10] = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v5);
          v65 = 0;
          v18 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
            i = MmGetSessionIdEx((__int64)v18->ApcState.Process);
          --v18->SpecialApcDisable;
          v19 = ++v18->AbAllocationRegionCount;
          LODWORD(v20) = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v21 = !_BitScanReverse((unsigned int *)&v22, v20);
            v52 = v22;
            if ( v21 )
              break;
            v23 = 1 << v22;
            v24 = v22;
            v25 = &v18->LockEntries[v24];
            v20 = ~v23 & (unsigned int)v20;
            if ( (v25->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v25->LockState.0 & 1) == 0
              && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
              && v25->LockState.SessionId == i )
            {
              v25->AcquiredByte &= ~1u;
              if ( v25->LockState.0 )
              {
                if ( v25 )
                {
                  v25->CrossThreadReleasableAndBusyByte |= 2u;
                  if ( (__int64)v25->LockState.LockState < 0 )
                    KiAbEntryRemoveFromTree(&v18->LockEntries[v24].TreeNode, v20);
                  v65 = 0;
                  v65 = v25->BoostBitmap.AllFields & 0x1FFFF;
                  v25->BoostBitmap.AllFields &= 0xFFFE0000;
                  v25->ThreadLocalFlags &= ~1u;
                  v25->LockState.0 = 0LL;
                  v26 = ((char *)v25 - (char *)v18 - 800) / 96;
                  if ( v19 == 1 )
                    v18->AbEntrySummary |= 1 << v26;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v26);
                  goto LABEL_34;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v18, v5, i, 0LL);
LABEL_34:
          --v18->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v18, v5, (__int64)&v65);
          v21 = v18->SpecialApcDisable++ == -1;
          if ( !v21 )
            return KiLeaveGuardedRegionUnsafe((__int64)v53);
LABEL_48:
          if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
            KiCheckForKernelApcDelivery(v27);
          return KiLeaveGuardedRegionUnsafe((__int64)v53);
        }
      }
    }
    if ( a1 )
    {
      v56 = 263;
      v59[1] = v59;
      v59[0] = v59;
      v55 = v1[11];
      v1[11] = (ULONG_PTR)&v55;
      v57 = 6;
      v58 = 0;
    }
    else
    {
      v1[6] = 0LL;
      v1[8] = (ULONG_PTR)MiFreeUnusedPfnPages;
      v1[9] = (ULONG_PTR)v1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 6), DelayedWorkQueue);
      *((_BYTE *)v1 + 196) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 48);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v9, v34, v35);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1 + 23);
    v63 = 0;
    v36 = KeGetCurrentThread();
    v37 = (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 23)) == 1
        ? (unsigned int)MmGetSessionIdEx((__int64)v36->ApcState.Process)
        : 0xFFFFFFFFLL;
    --v36->SpecialApcDisable;
    v38 = ++v36->AbAllocationRegionCount;
    v39 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v21 = !_BitScanReverse((unsigned int *)&v40, v39);
      v50 = v40;
      if ( v21 )
        break;
      v41 = (__int64)&v36->LockEntries[v40];
      v39 &= ~(1 << v40);
      if ( (*(_BYTE *)(v41 + 26) & 1) != 0
        && (*(_DWORD *)(v41 + 32) & 1) == 0
        && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v41 + 40) == (_DWORD)v37 )
      {
        *(_BYTE *)(v41 + 26) &= ~1u;
        if ( *(_QWORD *)(v41 + 32) )
        {
          if ( v41 )
          {
            *(_BYTE *)(v41 + 32) |= 2u;
            if ( *(__int64 *)(v41 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v41, v37);
            v63 = 0;
            v63 = *(_DWORD *)(v41 + 88) & 0x1FFFF;
            *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v41 + 25) &= ~1u;
            *(_QWORD *)(v41 + 32) = 0LL;
            v42 = (v41 - (__int64)v36 - 800) / 96;
            if ( v38 == 1 )
              v36->AbEntrySummary |= 1 << v42;
            else
              _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v42);
            goto LABEL_75;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v36, (ULONG_PTR)(v1 + 23), (unsigned int)v37, 0LL);
LABEL_75:
    --v36->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v36, (__int64)(v1 + 23), (__int64)&v63);
    v21 = v36->SpecialApcDisable++ == -1;
    if ( v21 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery(v43);
    result = KiLeaveGuardedRegionUnsafe((__int64)v53);
    if ( !a1 )
      break;
    KeWaitForGate((__int64)&v56, 0x12u);
    CurrentThread = v53;
  }
  return result;
}
