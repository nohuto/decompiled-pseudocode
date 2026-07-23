/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x1400AE3F0
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rdi
  unsigned __int64 p_ActiveProcessors; // r12
  char *Next; // r15
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned __int64 *v13; // rax
  __int64 v14; // rsi
  bool v15; // zf
  char *v16; // rcx
  unsigned int v17; // r15d
  char v18; // al
  struct _KTHREAD *v19; // rbx
  unsigned int SessionId; // r10d
  unsigned __int8 v21; // si
  _KLOCK_ENTRY *v22; // rdi
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rcx
  _KLOCK_ENTRY *v26; // rdx
  _KLOCK_ENTRY_BOOST_BITMAP v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  int v32; // [rsp+30h] [rbp-68h]
  int v33; // [rsp+34h] [rbp-64h]
  struct _SINGLE_LIST_ENTRY *P; // [rsp+38h] [rbp-60h]
  unsigned __int64 v35; // [rsp+40h] [rbp-58h]
  unsigned __int64 v36; // [rsp+48h] [rbp-50h]
  int v37; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+B0h] [rbp+18h]
  int v39; // [rsp+B8h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v35 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v36 = v2;
  if ( v2 < v35 )
    return 3221225621LL;
  v3 = v2 - v35;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v33 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v32 = 12 * v4;
  P = 0LL;
  v38 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  p_ActiveProcessors = (unsigned __int64)&Process[2].ActiveProcessors;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].ActiveProcessors, 0LL);
  Next = (char *)Process[2].SwapListEntry.Next;
  if ( Next )
  {
    v10 = *(_DWORD *)Next;
    v11 = *((_DWORD *)Next + 1);
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( v10 + 1 > v11 )
  {
    v30 = v11 + 10;
    if ( (unsigned int)v30 < v11 )
    {
      v17 = -1073741675;
      goto LABEL_22;
    }
    v31 = 24 * v30 + 16;
    if ( v31 >= 0xFFFFFFFF )
    {
      v17 = -1073741675;
      goto LABEL_22;
    }
    P = Process[2].SwapListEntry.Next;
    Next = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v31, 0x46447452u);
    if ( !Next )
    {
      v17 = -1073741670;
      P = 0LL;
      goto LABEL_22;
    }
    if ( v10 )
    {
      memmove(Next + 16, &P[2], 24LL * v10);
    }
    else
    {
      *((_QWORD *)Next + 2) = 0LL;
      *((_QWORD *)Next + 3) = 0LL;
      *((_QWORD *)Next + 4) = 0LL;
      v10 = 1;
    }
    *(_DWORD *)Next = v10;
    *((_DWORD *)Next + 1) = v30;
    Next[12] = 0;
    Process[2].SwapListEntry.Next = (struct _SINGLE_LIST_ENTRY *)Next;
  }
  v12 = 1;
  if ( v10 > 1 )
  {
    v13 = (unsigned __int64 *)(Next + 48);
    do
    {
      if ( v35 < *v13 )
        break;
      ++v12;
      v13 += 3;
    }
    while ( v12 < v10 );
  }
  if ( *(_QWORD *)&Next[24 * v12] + (unsigned __int64)*(unsigned int *)&Next[24 * v12 + 8] > v35 )
  {
    v17 = -1073741800;
  }
  else
  {
    v14 = v12;
    v15 = v12 == v10;
    if ( v12 >= v10 )
    {
LABEL_19:
      if ( !v15 )
        memmove(&Next[16 * v12 + 40 + 8 * v12], &Next[16 * v12 + 16 + 8 * v12], 24LL * (v10 - v12));
      v16 = &Next[24 * v14];
      *((_QWORD *)v16 + 2) = a1;
      *((_QWORD *)v16 + 3) = v35;
      *((_DWORD *)v16 + 8) = v33;
      *((_DWORD *)v16 + 9) = v32;
      *(_DWORD *)Next = v10 + 1;
      v17 = v38;
      goto LABEL_22;
    }
    if ( *(_QWORD *)&Next[24 * v12 + 24] >= v36 )
    {
      v15 = v12 == v10;
      goto LABEL_19;
    }
    v17 = -1073741800;
  }
LABEL_22:
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)p_ActiveProcessors, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_ActiveProcessors);
  v37 = 0;
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(p_ActiveProcessors) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v19->ApcState.Process);
  else
    SessionId = -1;
  --v19->SpecialApcDisable;
  v21 = ++v19->AbAllocationRegionCount;
  v22 = 0LL;
  v23 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  v15 = !_BitScanReverse((unsigned int *)&v24, v23);
  v39 = v24;
  if ( !v15 )
  {
    while ( 1 )
    {
      v23 &= ~(1 << v24);
      v25 = v24;
      v26 = &v19->LockEntries[v25];
      if ( (v26->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v26->LockState.0 & 1) == 0
        && (*(_QWORD *)&v26->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (p_ActiveProcessors & 0x7FFFFFFFFFFFFFFCLL)
        && v26->LockState.SessionId == SessionId )
      {
        v26->AcquiredByte &= ~1u;
        if ( v26->LockState.0 )
          break;
      }
      v15 = !_BitScanReverse((unsigned int *)&v24, v23);
      v39 = v24;
      if ( v15 )
        goto LABEL_32;
    }
    v22 = &v19->LockEntries[v25];
  }
LABEL_32:
  if ( v22 )
  {
    v22->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v22->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v22->TreeNode);
    v27.AllFields = (unsigned int)v22->BoostBitmap;
    v37 = v27.AllFields & 0x1FFFF;
    v22->BoostBitmap.AllFields = v27.AllFields & 0xFFFE0000;
    v22->ThreadLocalFlags &= ~1u;
    v22->LockState.0 = 0LL;
    v28 = ((char *)v22 - (char *)v19 - 800) / 96;
    if ( v21 == 1 )
      v19->AbEntrySummary |= 1 << v28;
    else
      _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v28);
  }
  else if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
  {
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, p_ActiveProcessors, SessionId, 0LL);
  }
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19, p_ActiveProcessors, &v37);
  v15 = v19->SpecialApcDisable++ == -1;
  if ( v15 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v29);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( P )
    ExFreePoolWithTag(P, 0x46447452u);
  return v17;
}
