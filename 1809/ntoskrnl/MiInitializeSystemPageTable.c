/*
 * XREFs of MiInitializeSystemPageTable @ 0x140026984
 * Callers:
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiInitializePfnForOtherProcess @ 0x140026C2C (MiInitializePfnForOtherProcess.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140111958 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     MiTransformValidPteInPlace @ 0x14016A80C (MiTransformValidPteInPlace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned int a2, __int64 *a3, _QWORD *a4, __int64 a5)
{
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  __int64 LeafVa; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 ContainingPageTable; // rbp
  unsigned int v16; // r11d
  __int64 ValidPte; // rbx
  __int64 v18; // r8
  __int64 result; // rax
  int v20; // edx
  unsigned __int8 OldIrql; // bl
  bool v22; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 0;
  MI_READ_PTE_LOCK_FREE(a3);
  v10 = v9 + 0x58000000000LL;
  v11 = v10 / 48;
  v12 = (__int64)((_QWORD)a3 << 25) >> 16;
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    MiFillPhysicalPages(v10 / 48);
  LeafVa = MiGetLeafVa(a3);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v8 = 1;
  }
  else if ( v14 <= 0x7FFFFFFEFFFFLL
         || v14 <= qword_14043B5F0 && v14 >= qword_14043CB80
         || v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 4;
  }
  *a4 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    v16 |= 0x8000000u;
  ValidPte = MiMakeValidPte(a3, v11, v16);
  if ( a2 == 3 && (MiFlags & 0x30) != 0 && (v8 & 1) == 0 && v8 < 4 )
  {
    if ( PsInitialSystemProcess )
      ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
    else
      ContainingPageTable = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((((unsigned __int64)a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
  }
  MiInitializePfnForOtherProcess(
    v11,
    a3,
    ContainingPageTable,
    512LL,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  if ( (MI_READ_PTE_LOCK_FREE(a3) & 1) == 0 )
  {
    result = MiPteInShadowRange(a3, 0LL, v18);
    if ( !(_DWORD)result )
      goto LABEL_16;
    result = MiPteHasShadow();
    if ( (_DWORD)result )
    {
      v20 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v22 = (ValidPte & 1) == 0;
        goto LABEL_40;
      }
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1740LL) & 0x1000) != 0 )
      {
        v22 = (ValidPte & 1) == 0;
LABEL_40:
        if ( !v22 )
        {
          result = 0x8000000000000000uLL;
          ValidPte |= 0x8000000000000000uLL;
        }
      }
    }
LABEL_16:
    *a3 = ValidPte;
    if ( v20 )
      result = MiWritePteShadow(a3);
    goto LABEL_18;
  }
  result = MiTransformValidPteInPlace(a3, a3, ValidPte, a2);
  if ( a2 != 3 )
    return result;
  result = MiInsertRecursiveTbFlushEntries(a5, 3LL, a3);
LABEL_18:
  if ( a2 == 3 )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  return result;
}
