/*
 * XREFs of RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C006EEC4
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C006A61C (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C006EF34 (RaGetUnitStorageDeviceIdProperty.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceIdPropertyIoctl(__int64 a1, IRP *a2)
{
  bool v2; // zf
  _IRP *MasterIrp; // rdx
  int v6; // ecx
  int UnitStorageDeviceIdProperty; // eax
  unsigned int v8; // r8d
  unsigned int Length; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136) == 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( v2 )
  {
    v8 = -1073741637;
  }
  else
  {
    v6 = *(_DWORD *)(&MasterIrp->Size + 1);
    if ( v6 )
    {
      if ( v6 == 1 )
        UnitStorageDeviceIdProperty = 0;
      else
        UnitStorageDeviceIdProperty = -1073741637;
    }
    else
    {
      UnitStorageDeviceIdProperty = RaGetUnitStorageDeviceIdProperty(a1, MasterIrp, &Length);
      if ( UnitStorageDeviceIdProperty >= 0 )
        a2->IoStatus.Information = Length;
    }
    v8 = UnitStorageDeviceIdProperty;
  }
  return RaidCompleteRequestEx(a2, 0, v8);
}
