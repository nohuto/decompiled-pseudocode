/*
 * XREFs of MiFreeLargePageMemory @ 0x140146DD8
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1400BC810 (MiDeleteSubsectionPages.c)
 *     MiFreeMdlPageRun @ 0x1400DDBF4 (MiFreeMdlPageRun.c)
 *     MiFreeContiguousPages @ 0x1400F4FD4 (MiFreeContiguousPages.c)
 *     MiDecommitLargePoolVa @ 0x140146B90 (MiDecommitLargePoolVa.c)
 *     MiFreeSlabEntry @ 0x1402DBAB8 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x1402DF674 (MiFreeLargePages.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiReadyLargePageToFree @ 0x140146F40 (MiReadyLargePageToFree.c)
 *     MiTryConvertLargePageAttribute @ 0x14017D7C0 (MiTryConvertLargePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPfnContentsRetainedAcrossAttributeChange @ 0x1402DAFD8 (MiPfnContentsRetainedAcrossAttributeChange.c)
 */

unsigned __int64 __fastcall MiFreeLargePageMemory(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3)
{
  __int64 v6; // rbx
  ULONG_PTR v7; // rdi
  BOOL v8; // esi
  ULONG_PTR v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int8 v11; // bp
  int v13; // ebp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v6 = MiLargePageSizes[a2];
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = !(a3 & 1);
  if ( (*(_BYTE *)(v7 + 34) & 0xC0) != 0x40 )
  {
    v13 = 1;
    if ( (a3 & 1) != 0 )
      v13 = MiPfnContentsRetainedAcrossAttributeChange(v7);
    if ( (unsigned int)MiTryConvertLargePageAttribute(BugCheckParameter2, a2) && !v13 )
      v8 = 1;
  }
  v9 = BugCheckParameter2;
  if ( a2 > 1 )
  {
    v9 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
    v10 = 512LL;
  }
  else
  {
    v10 = v6;
  }
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL)), v9, v10, 0, 0);
  if ( !(unsigned int)MiReadyLargePageToFree(BugCheckParameter2, a2, v8, &v15) )
    return v15;
  if ( (a3 & 2) != 0 )
    return v6 | 0x8000000000000000uLL;
  v11 = MiLockPageInline(48 * BugCheckParameter2 - 0x58000000000LL);
  MiInsertLargePageInNodeList(BugCheckParameter2, v8, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v11);
  return v6;
}
