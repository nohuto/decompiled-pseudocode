/*
 * XREFs of MiMarkFileOnlyPfnBad @ 0x1402B6578
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiTrimSharedPage @ 0x1400E97F0 (MiTrimSharedPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPersistPage @ 0x1402B67C0 (MiPersistPage.c)
 */

__int64 __fastcall MiMarkFileOnlyPfnBad(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned __int8 v4; // di
  unsigned __int64 v5; // r8
  char v6; // al
  char v7; // al
  int v8; // ecx
  char v9; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx

  v4 = MiLockPageInline(BugCheckParameter2);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000000LL) != 0
    && MiIsPfnFileOnly(BugCheckParameter2)
    && (v5 & 0x200000000000000LL) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0
    && *(ULONG_PTR **)(qword_14043B808 + 8 * ((v5 >> 40) & 0x3FF)) == &MiSystemPartition )
  {
    if ( (a2 & 0x10000000) != 0 )
    {
      v6 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( v6 >= 0 )
        *(_BYTE *)(BugCheckParameter2 + 35) = v6 | 0x80;
    }
    v7 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v7 & 0x40) == 0 )
    {
      if ( !*(_WORD *)(BugCheckParameter2 + 32) && ((v8 = *(_BYTE *)(BugCheckParameter2 + 34) & 7, v8 == 2) || v8 == 3) )
      {
        MiUnlinkPageFromList(BugCheckParameter2, 0);
        v9 = *(_BYTE *)(BugCheckParameter2 + 34);
        if ( (v9 & 0x10) != 0 )
        {
          if ( *(char *)(BugCheckParameter2 + 35) >= 0 )
          {
            MiPersistPage((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
            v9 = *(_BYTE *)(BugCheckParameter2 + 34);
          }
          *(_BYTE *)(BugCheckParameter2 + 34) = v9 & 0xEF;
        }
        *(_BYTE *)(BugCheckParameter2 + 35) |= 0x40u;
        MiInsertPageInList(BugCheckParameter2, 4);
      }
      else
      {
        *(_BYTE *)(BugCheckParameter2 + 35) = v7 | 0x40;
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
          MiTrimSharedPage(BugCheckParameter2, v4, a2);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v4);
    return 259LL;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
    __writecr8(v4);
    return 3221226548LL;
  }
}
