/*
 * XREFs of EmpParseInfDatabase @ 0x1409F9974
 * Callers:
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x1409F9BE0 (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x1409F9F14 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409FA08C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409FA908 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409FAC24 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409FAE60 (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x140A0F0E8 (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  PVOID *v5; // rbx
  int v6; // edi
  char v7; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v10; // bp
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rsi
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // [rsp+80h] [rbp+18h] BYREF
  int v23; // [rsp+88h] [rbp+20h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpParseLock, 0LL);
  v23 = 0;
  v4 = CmpParseInfBuffer(a1, a2, &v23);
  v5 = (PVOID *)v4;
  if ( v4 )
  {
    v6 = EmpParseEntryTypes(v4);
    if ( v6 >= 0 )
    {
      v6 = EmpParseCallbacks(v5);
      if ( v6 >= 0 )
      {
        v6 = EmpParseRules(v5);
        if ( v6 >= 0 )
        {
          v6 = EmpParseStrings(v5);
          if ( v6 >= 0 )
            v6 = EmpParseTargetRules(v5);
        }
      }
    }
    CmpFreeSectionList(*v5);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v6 = -1073741816;
  }
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock);
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpParseLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v10 = ++CurrentThread->AbAllocationRegionCount;
  v11 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v13, v11);
    if ( v12 )
      break;
    v14 = 1 << v13;
    v15 = v13;
    v16 = &CurrentThread->LockEntries[v15];
    v11 &= ~v14;
    if ( (v16->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v16->LockState.0 & 1) == 0
      && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpParseLock & 0x7FFFFFFFFFFFFFFCLL)
      && v16->LockState.SessionId == SessionId )
    {
      v16->AcquiredByte &= ~1u;
      if ( v16->LockState.0 )
      {
        if ( v16 )
        {
          v16->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v16->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v15].TreeNode);
          v17 = v16->BoostBitmap.AllFields & 0x1FFFF;
          v18 = v16->BoostBitmap.AllFields & 0xFFFE0000;
          v16->ThreadLocalFlags &= ~1u;
          v22 = v17;
          v16->BoostBitmap.AllFields = v18;
          v16->LockState.0 = 0LL;
          v19 = ((char *)v16 - (char *)CurrentThread - 800) / 96;
          if ( v10 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_23;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&EmpParseLock, SessionId, 0LL);
LABEL_23:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&EmpParseLock, &v22);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v20);
  return (unsigned int)v6;
}
