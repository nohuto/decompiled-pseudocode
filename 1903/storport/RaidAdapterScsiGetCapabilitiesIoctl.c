/*
 * XREFs of RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C00351E8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0006D64 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidAdapterScsiGetCapabilitiesIoctl(__int64 a1, IRP *a2)
{
  unsigned int v4; // r8d
  _IRP *MasterIrp; // rcx
  int v6; // eax

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x18 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    *(_DWORD *)&MasterIrp->Type = 24;
    *(_DWORD *)(&MasterIrp->Size + 1) = *(_DWORD *)(a1 + 328);
    v6 = *(_DWORD *)(a1 + 332);
    HIDWORD(MasterIrp->MdlAddress) = 0;
    LODWORD(MasterIrp->MdlAddress) = v6;
    MasterIrp->Flags = *(_DWORD *)(a1 + 352);
    *((_BYTE *)&MasterIrp->Flags + 4) = 1;
    *((_BYTE *)&MasterIrp->Flags + 5) = *(_BYTE *)(a1 + 388);
    *((_BYTE *)&MasterIrp->Flags + 6) = 0;
    a2->IoStatus.Information = 24LL;
    v4 = 0;
  }
  else
  {
    v4 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
