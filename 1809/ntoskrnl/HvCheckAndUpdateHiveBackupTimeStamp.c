/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405A83BC
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  __int64 CellMap; // rax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi

  CellMap = HvpGetCellMap(BugCheckParameter2, 0LL);
  v3 = 0;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x106FuLL);
  v4 = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_QWORD *)(v4 + 0x14) != *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL) )
  {
    if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
      *(_QWORD *)(v4 + 20) = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL);
    else
      return (unsigned int)-1073741443;
  }
  return v3;
}
