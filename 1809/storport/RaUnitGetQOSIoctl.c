/*
 * XREFs of RaUnitGetQOSIoctl @ 0x1C0047198
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     WPP_SF_q @ 0x1C003BA90 (WPP_SF_q.c)
 */

__int64 __fastcall RaUnitGetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  __int64 v5; // rax
  unsigned int v6; // r8d
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x24 )
  {
    memset(MasterIrp, 0, 0x24uLL);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(_DWORD *)(&MasterIrp->Size + 1) = 36;
    LOBYTE(MasterIrp->MdlAddress) = *(_BYTE *)(a1 + 3192);
    LODWORD(MasterIrp->ThreadListEntry.Flink) = *(_DWORD *)(a1 + 3204);
    HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 3196);
    *(&MasterIrp->Flags + 1) = 1000 * *(_DWORD *)(a1 + 3208);
    v7 = -1;
    v8 = *(_DWORD *)(a1 + 3200);
    if ( v8 == -1 )
      v9 = -1;
    else
      v9 = 500 * v8;
    HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v9;
    v10 = *(_DWORD *)(a1 + 3216);
    if ( v10 != -1 )
      v7 = 500 * v10;
    MasterIrp->Flags = v7;
    MasterIrp->AssociatedIrp.IrpCount = 1000 * *(_DWORD *)(a1 + 3212);
    v6 = 0;
    v5 = 36LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Au,
        (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        a1);
    }
    v5 = 0LL;
    v6 = -1073741789;
  }
  a2->IoStatus.Information = v5;
  return RaidCompleteRequestEx(a2, 0, v6);
}
