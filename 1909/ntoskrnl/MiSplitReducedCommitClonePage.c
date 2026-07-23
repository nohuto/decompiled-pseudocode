/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x1402BFA80
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140001AA8 (MiProcessCommitIntact.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateCloneAddress @ 0x1400BFAB8 (MiLocateCloneAddress.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiLockProbePacketWorkingSet @ 0x1400DE7AC (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400DE7F4 (MiUnlockProbePacketWorkingSet.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E54BC (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140605690 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 *a1)
{
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // r15d
  __int64 v8; // r14
  struct _KTHREAD *v9; // rbx
  unsigned int v10; // edx
  unsigned __int8 v11; // r12
  unsigned int v12; // r8d
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 valid; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *CloneAddress; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  struct _KTHREAD *v24; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v26; // r12
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // [rsp+30h] [rbp-18h] BYREF
  __int64 v33; // [rsp+38h] [rbp-10h] BYREF
  int v34; // [rsp+90h] [rbp+48h] BYREF
  int v35; // [rsp+98h] [rbp+50h] BYREF
  int v36; // [rsp+A0h] [rbp+58h]
  int v37; // [rsp+A8h] [rbp+60h]

  if ( !MiProcessCommitIntact(*a1) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v3 = 1;
  CurrentThread = KeGetCurrentThread();
  v5 = (((unsigned __int64)*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a1[10];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v6 + 888, 0LL);
  v7 = MiChargeFullProcessCommitment(a1[10], 1LL);
  if ( v7 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1);
    valid = MiLockLowestValidPageTable(a1[12], v5, &v32);
    v18 = v32;
    a1[4] = valid;
    if ( v18 == v5 )
    {
      v33 = MI_READ_PTE_LOCK_FREE(v18);
      if ( (v33 & 1) != 0 )
      {
        v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33);
        if ( (*(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) != 0 )
        {
          v20 = *(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
          if ( v20 < 0 )
          {
            CloneAddress = MiLocateCloneAddress(a1[10], v20 | 0x8000000000000000uLL);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v22 + 1296) + 360LL) > CloneAddress[12] )
              {
                v7 = MiCopyOnWrite(*a1, v5, 0xFFFFFFFFFFFFFFFFuLL, 0);
                v3 = v7 < 0;
              }
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v3 )
      MiReturnFullProcessCommitment(a1[10], 1LL);
    v23 = a1[10] + 888;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v23);
    v35 = 0;
    v24 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v23) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
    else
      SessionId = -1;
    --v24->SpecialApcDisable;
    v26 = ++v24->AbAllocationRegionCount;
    v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v28, v27);
      v37 = v28;
      if ( v14 )
        break;
      v29 = (__int64)&v24->LockEntries[v28];
      v27 &= ~(1 << v28);
      if ( (*(_BYTE *)(v29 + 26) & 1) != 0
        && (*(_DWORD *)(v29 + 32) & 1) == 0
        && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v23 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v29 + 40) == SessionId )
      {
        *(_BYTE *)(v29 + 26) &= ~1u;
        if ( *(_QWORD *)(v29 + 32) )
        {
          if ( v29 )
          {
            *(_BYTE *)(v29 + 32) |= 2u;
            if ( *(__int64 *)(v29 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v29);
            v35 = *(_DWORD *)(v29 + 88) & 0x1FFFF;
            *(_DWORD *)(v29 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v29 + 25) &= ~1u;
            *(_QWORD *)(v29 + 32) = 0LL;
            v30 = (v29 - (__int64)v24 - 800) / 96;
            if ( v26 == 1 )
              v24->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v30);
            goto LABEL_55;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, SessionId, 0LL);
LABEL_55:
    --v24->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v24, v23, &v35);
    v14 = v24->SpecialApcDisable++ == -1;
    if ( v14 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery(v31);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v7 < 0 )
      MiCopyOnWriteCheckConditions(a1[12], (unsigned int)v7);
    MiLockProbePacketWorkingSet((__int64)a1);
    return 0LL;
  }
  else
  {
    v8 = a1[10] + 888;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    v34 = 0;
    v9 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
      v10 = MmGetSessionIdEx((__int64)v9->ApcState.Process);
    else
      v10 = -1;
    --v9->SpecialApcDisable;
    v11 = ++v9->AbAllocationRegionCount;
    v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v12);
      v36 = v15;
      if ( v14 )
        goto LABEL_16;
      v13 = (__int64)&v9->LockEntries[v15];
      v12 &= ~(1 << v15);
      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
        && (*(_DWORD *)(v13 + 32) & 1) == 0
        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v13 + 40) == v10 )
      {
        *(_BYTE *)(v13 + 26) &= ~1u;
        if ( *(_QWORD *)(v13 + 32) )
          break;
      }
    }
    if ( !v13 )
    {
LABEL_16:
      if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v9, v8, v10, 0LL);
      goto LABEL_23;
    }
    *(_BYTE *)(v13 + 32) |= 2u;
    if ( *(__int64 *)(v13 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
    v34 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
    *(_DWORD *)(v13 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v13 + 25) &= ~1u;
    *(_QWORD *)(v13 + 32) = 0LL;
    v16 = (v13 - (__int64)v9 - 800) / 96;
    if ( v11 == 1 )
      v9->AbEntrySummary |= 1 << v16;
    else
      _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v16);
LABEL_23:
    --v9->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v9, v8, &v34);
    v14 = v9->SpecialApcDisable++ == -1;
    if ( v14 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
      KiCheckForKernelApcDelivery(1LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiLockProbePacketWorkingSet((__int64)a1);
    return (unsigned int)v7;
  }
}
