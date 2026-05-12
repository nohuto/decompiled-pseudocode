/*
 * XREFs of RaidAdapterStorageBreakReservationIoctl @ 0x1C003A4A0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0003014 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     StorLogIoError @ 0x1C00463C4 (StorLogIoError.c)
 *     RaidUnitHierarchicalReset @ 0x1C0049F94 (RaidUnitHierarchicalReset.c)
 */

__int64 __fastcall RaidAdapterStorageBreakReservationIoctl(__int64 a1, IRP *a2)
{
  unsigned int v4; // r8d
  _IRP *MasterIrp; // rcx
  __int64 Unit; // rsi
  int v7; // eax
  unsigned int v9; // [rsp+38h] [rbp+10h]

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    LOWORD(v9) = *(unsigned __int16 *)((char *)&MasterIrp->Size + 3);
    BYTE2(v9) = *((_BYTE *)&MasterIrp->Size + 5);
    Unit = RaidAdapterFindUnit(a1, v9);
    if ( Unit )
    {
      StorLogIoError(a1, v9, 2147745910LL, 4LL);
      ++*(_DWORD *)(*(_QWORD *)(Unit + 24) + 4848LL);
      v7 = RaidUnitHierarchicalReset(Unit);
    }
    else
    {
      v7 = -1073741810;
    }
    v4 = v7;
  }
  else
  {
    v4 = -1073741811;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
