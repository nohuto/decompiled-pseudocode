/*
 * XREFs of MiFreeBootPageTable @ 0x1409D4228
 * Callers:
 *     MxZeroBootMappings @ 0x1409D4114 (MxZeroBootMappings.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiPageToChannel @ 0x14009CF2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiLockAndInsertPageInFreeList @ 0x140188D5C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  unsigned __int8 v4; // al
  char v5; // cl
  unsigned __int8 v6; // di
  struct _KPRCB *CurrentPrcb; // rcx
  char v9; // al
  __int64 v10; // rdx

  v2 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = *(_WORD *)(v2 + 32);
  if ( v3 )
  {
    if ( v3 != 2 || (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, 0LL, 0LL);
    v4 = MiLockPageInline(v2);
    v5 = *(_BYTE *)(v2 + 34);
    v6 = v4;
    *(_WORD *)(v2 + 32) = 0;
    *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(v2 + 34) = v5 & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
  }
  else
  {
    *(_QWORD *)(v2 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(BugCheckParameter2, 0) << 58) | *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL;
    v9 = MiPageToChannel(BugCheckParameter2);
    v10 = *(_QWORD *)(v2 + 40);
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 40) = v10 & 0xFFFFFFCFFFFFFFFFuLL | ((unsigned __int64)(v9 & 3) << 36) | 0x20000000000000LL;
  }
  return MiLockAndInsertPageInFreeList(v2);
}
