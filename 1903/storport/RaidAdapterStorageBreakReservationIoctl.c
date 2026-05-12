/*
 * XREFs of RaidAdapterStorageBreakReservationIoctl @ 0x1C0036138
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0006D64 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005F98 (RaidAdapterFindUnit.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     StorLogIoError @ 0x1C0043744 (StorLogIoError.c)
 *     RaidUnitHierarchicalReset @ 0x1C0047634 (RaidUnitHierarchicalReset.c)
 */

__int64 __fastcall RaidAdapterStorageBreakReservationIoctl(__int64 a1, IRP *a2)
{
  unsigned int v4; // r8d
  _IRP *MasterIrp; // rcx
  __int64 Unit; // rsi
  int v7; // eax
  unsigned int v9; // [rsp+38h] [rbp+10h]

  HIBYTE(v9) = 0;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    LOWORD(v9) = *(unsigned __int16 *)((char *)&MasterIrp->Size + 3);
    BYTE2(v9) = *((_BYTE *)&MasterIrp->Size + 5);
    Unit = RaidAdapterFindUnit(a1, v9);
    if ( Unit )
    {
      StorLogIoError(a1, v9, 2147745910LL, 4LL);
      ++*(_DWORD *)(*(_QWORD *)(Unit + 24) + 4784LL);
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
