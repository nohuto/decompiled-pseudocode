/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x1400ADFF0
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
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int SessionId; // r15d
  unsigned int v2; // r12d
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rbx
  unsigned __int64 p_ActiveProcessors; // r14
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  struct _SINGLE_LIST_ENTRY *v9; // rax
  unsigned int v10; // esi
  char v11; // al
  struct _KTHREAD *v12; // rbx
  _KLOCK_ENTRY *v13; // rsi
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdx
  _KLOCK_ENTRY_BOOST_BITMAP v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _SINGLE_LIST_ENTRY *v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  unsigned __int8 v25; // [rsp+98h] [rbp+10h]
  int v26; // [rsp+A0h] [rbp+18h] BYREF
  int v27; // [rsp+A8h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v23 = *(struct _SINGLE_LIST_ENTRY **)(a1 + 48);
  v24 = *(_QWORD *)(a1 + 40);
  SessionId = -1;
  if ( (unsigned __int64)(v24 - (_QWORD)v23) >= 0xFFFFFFFF )
    return 3221225621LL;
  v2 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  p_ActiveProcessors = (unsigned __int64)&Process[2].ActiveProcessors;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].ActiveProcessors, 0LL);
  Next = Process[2].SwapListEntry.Next;
  if ( Next )
  {
    v7 = (unsigned int)Next->Next;
    v8 = 1;
    if ( LODWORD(Next->Next) > 1 )
    {
      v9 = Next + 6;
      while ( v9->Next < v23 )
      {
        ++v8;
        v9 += 3;
        if ( v8 >= v7 )
          goto LABEL_15;
      }
      if ( Next[3 * v8 + 3].Next == v23 && LODWORD(Next[3 * v8 + 4].Next) == (_DWORD)v24 - (_DWORD)v23 )
      {
        v10 = v7 - 1;
        if ( v8 != v7 - 1 )
          memmove(&Next[3 * v8 + 2], &Next[2 * v8 + 5 + v8], 24LL * (v7 - v8 - 1));
        v2 = 0;
        LODWORD(Next->Next) = v10;
      }
    }
  }
LABEL_15:
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)p_ActiveProcessors, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_ActiveProcessors);
  v26 = 0;
  v12 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(p_ActiveProcessors) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
  --v12->SpecialApcDisable;
  v25 = ++v12->AbAllocationRegionCount;
  v13 = 0LL;
  v14 = ((char)v12->AbEntrySummary | (char)v12->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    v27 = v16;
    if ( v15 )
      break;
    v14 &= ~(1 << v16);
    v17 = v16;
    v18 = &v12->LockEntries[v17];
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (p_ActiveProcessors & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
      {
        v13 = &v12->LockEntries[v17];
        break;
      }
    }
  }
  if ( v13 )
  {
    v13->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v13->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v13->TreeNode);
    v19.AllFields = (unsigned int)v13->BoostBitmap;
    v26 = v19.AllFields & 0x1FFFF;
    v13->BoostBitmap.AllFields = v19.AllFields & 0xFFFE0000;
    v13->ThreadLocalFlags &= ~1u;
    v13->LockState.0 = 0LL;
    v20 = ((char *)v13 - (char *)v12 - 800) / 96;
    if ( v25 == 1 )
      v12->AbEntrySummary |= 1 << v20;
    else
      _InterlockedOr8((volatile signed __int8 *)&v12->AbOrphanedEntrySummary, 1 << v20);
  }
  else if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
  {
    KeBugCheckEx(0x162u, (ULONG_PTR)v12, p_ActiveProcessors, SessionId, 0LL);
  }
  --v12->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v12, p_ActiveProcessors, &v26);
  v15 = v12->SpecialApcDisable++ == -1;
  if ( v15 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery(v21);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v2;
}
