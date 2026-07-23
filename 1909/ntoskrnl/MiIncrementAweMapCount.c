/*
 * XREFs of MiIncrementAweMapCount @ 0x1402D6340
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x1408960F4 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiChangeAwePageAttributes @ 0x1402D5428 (MiChangeAwePageAttributes.c)
 */

__int64 __fastcall MiIncrementAweMapCount(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // r14d
  __int64 v6; // r12
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v11; // r14
  int v12; // r12d
  struct _KPRCB *v13; // rcx
  struct _KTHREAD *v14; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r15
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  struct _KTHREAD *v30; // r13
  _QWORD *v31; // rbx
  _QWORD *v32; // r15
  ULONG_PTR v33; // r14
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  struct _KTHREAD *v36; // rbx
  unsigned int v37; // edx
  unsigned __int8 v38; // r12
  unsigned int v39; // r8d
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  _KLOCK_ENTRY *v43; // rsi
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rbx
  __int64 result; // rax
  struct _KPRCB *v50; // rcx
  __int64 v51; // rdx
  struct _KPRCB *v52; // rcx
  int v53; // [rsp+30h] [rbp-40h] BYREF
  int v54; // [rsp+34h] [rbp-3Ch] BYREF
  int v55; // [rsp+38h] [rbp-38h]
  int v56; // [rsp+3Ch] [rbp-34h]
  int v57; // [rsp+40h] [rbp-30h]
  _QWORD v58[5]; // [rsp+48h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a1;
  memset(v58, 0, sizeof(v58));
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = MiLockPageInline(a2);
      if ( (*(_DWORD *)v6 & 1) != 0 && (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_96;
      v8 = *(_BYTE *)(a2 + 34);
      if ( (v8 & 0x20) == 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v7);
      CurrentThread = KeGetCurrentThread();
      HIDWORD(v58[2]) = 0;
      v58[4] = &v58[3];
      v58[3] = &v58[3];
      v58[1] = a2;
      LOWORD(v58[2]) = 263;
      BYTE2(v58[2]) = 6;
      --CurrentThread->SpecialApcDisable;
      v11 = v6 + 40;
      ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
      MiLockPageInline(a2);
      if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
      {
        v58[0] = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 48) = v58;
        v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
      {
        v13 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
      __writecr8(v7);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      v53 = 0;
      v14 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
      else
        SessionId = -1;
      --v14->SpecialApcDisable;
      v16 = ++v14->AbAllocationRegionCount;
      v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
      v18 = !_BitScanReverse((unsigned int *)&v19, v17);
      v55 = v19;
      if ( v18 )
        goto LABEL_30;
      while ( 1 )
      {
        v20 = 1 << v19;
        v21 = v19;
        v22 = &v14->LockEntries[v21];
        v17 &= ~v20;
        if ( (v22->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v22->LockState.0 & 1) == 0
          && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
          && v22->LockState.SessionId == SessionId )
        {
          v22->AcquiredByte &= ~1u;
          if ( v22->LockState.0 )
            break;
        }
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        v55 = v19;
        if ( v18 )
          goto LABEL_30;
      }
      if ( !v22 )
      {
LABEL_30:
        if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v14, v11, SessionId, 0LL);
      }
      else
      {
        v22->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v22->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v14->LockEntries[v21].TreeNode);
        v24 = v22->BoostBitmap.AllFields & 0x1FFFF;
        v25 = v22->BoostBitmap.AllFields & 0xFFFE0000;
        v22->ThreadLocalFlags &= ~1u;
        v53 = v24;
        v22->BoostBitmap.AllFields = v25;
        v22->LockState.0 = 0LL;
        v26 = ((char *)v22 - (char *)v14 - 800) / 96;
        if ( v16 == 1 )
          v14->AbEntrySummary |= 1 << v26;
        else
          _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v26);
      }
      --v14->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v14, v11, &v53);
      v18 = v14->SpecialApcDisable++ == -1;
      if ( v18 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
        KiCheckForKernelApcDelivery(v23);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v5 = a3;
      v18 = v12 == 0;
      v6 = a1;
      if ( !v18 )
        KeWaitForGate((__int64)&v58[2], 18);
    }
    v27 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v8 >> 6 == v5 )
      goto LABEL_93;
    if ( *(_WORD *)(a2 + 32) > 2u || v27 != 1 || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_96;
    if ( *(_QWORD *)(v6 + 8) == 1LL )
      break;
    *(_BYTE *)(a2 + 34) = v8 | 0x20;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v28);
    }
    __writecr8(v7);
    v57 = MiChangeAwePageAttributes(v6, a2, v5);
    MiLockPageInline(a2);
    *(_BYTE *)(a2 + 34) &= ~0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v29 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v29);
    }
    __writecr8(v7);
    v30 = KeGetCurrentThread();
    v31 = (_QWORD *)(v6 + 48);
    v32 = 0LL;
    --v30->SpecialApcDisable;
    v33 = v6 + 40;
    ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
    v34 = *(_QWORD **)(v6 + 48);
    if ( v34 )
    {
      do
      {
        v35 = (_QWORD *)*v34;
        if ( v34[1] == a2 )
        {
          *v34 = v32;
          v32 = v34;
          *v31 = v35;
        }
        else
        {
          v31 = v34;
        }
        v34 = v35;
      }
      while ( v35 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    v54 = 0;
    v36 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6 + 40) == 1 )
      v37 = MmGetSessionIdEx((__int64)v36->ApcState.Process);
    else
      v37 = -1;
    --v36->SpecialApcDisable;
    v38 = ++v36->AbAllocationRegionCount;
    v39 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v18 = !_BitScanReverse((unsigned int *)&v40, v39);
      v56 = v40;
      if ( v18 )
        break;
      v41 = 1 << v40;
      v42 = v40;
      v43 = &v36->LockEntries[v42];
      v39 &= ~v41;
      if ( (v43->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v43->LockState.0 & 1) == 0
        && (*(_QWORD *)&v43->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v33 & 0x7FFFFFFFFFFFFFFCLL)
        && v43->LockState.SessionId == v37 )
      {
        v43->AcquiredByte &= ~1u;
        if ( v43->LockState.0 )
        {
          if ( v43 )
          {
            v43->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v43->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v36->LockEntries[v42].TreeNode);
            v44 = v43->BoostBitmap.AllFields & 0x1FFFF;
            v45 = v43->BoostBitmap.AllFields & 0xFFFE0000;
            v43->ThreadLocalFlags &= ~1u;
            v54 = v44;
            v43->BoostBitmap.AllFields = v45;
            v43->LockState.0 = 0LL;
            v46 = ((char *)v43 - (char *)v36 - 800) / 96;
            if ( v38 == 1 )
              v36->AbEntrySummary |= 1 << v46;
            else
              _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v46);
            goto LABEL_82;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v36, v33, v37, 0LL);
LABEL_82:
    --v36->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v36, v33, &v54);
    v18 = v36->SpecialApcDisable++ == -1;
    if ( v18 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery(v47);
    KiLeaveGuardedRegionUnsafe((__int64)v30);
    if ( v32 )
    {
      do
      {
        v48 = (_QWORD *)*v32;
        KeSignalGate((__int64)(v32 + 2), 1u);
        v32 = v48;
      }
      while ( v48 );
    }
    result = (unsigned int)v57;
    if ( v57 < 0 )
      return result;
    v6 = a1;
    v5 = a3;
  }
  MiChangePageAttribute(a2, v5, 1);
LABEL_93:
  if ( v27 > 1 && (*(_DWORD *)v6 & 1) != 0 || v27 >= 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_96:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v50 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v50);
    }
    __writecr8(v7);
    return 3221225496LL;
  }
  v51 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 8) = a4;
  *(_QWORD *)(a2 + 24) = v51 ^ ((v51 + 1) ^ v51) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v52 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v52);
  }
  __writecr8(v7);
  return 0LL;
}
