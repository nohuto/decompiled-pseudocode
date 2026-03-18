/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x14065EEFC
 * Callers:
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 *     HvpPerformLogFileRecovery @ 0x140830814 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1405D5130 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1405D5440 (HvpGetCellMap.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  __int64 CellMap; // rax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi

  CellMap = HvpGetCellMap(BugCheckParameter2, 0);
  v3 = 0;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x13D4uLL);
  v4 = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_QWORD *)(v4 + 0x14) != *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL) )
  {
    if ( HvpMarkDirty(BugCheckParameter2, 0, 0x20u, 0) )
      *(_QWORD *)(v4 + 20) = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL);
    else
      return (unsigned int)-1073741443;
  }
  return v3;
}
