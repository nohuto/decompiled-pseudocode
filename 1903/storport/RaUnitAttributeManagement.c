/*
 * XREFs of RaUnitAttributeManagement @ 0x1C0043C98
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     WPP_SF_q @ 0x1C0037958 (WPP_SF_q.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C00467A8 (RaUnitUnresponsiveAttributeMgmt.c)
 */

__int64 __fastcall RaUnitAttributeManagement(__int64 a1, IRP *a2)
{
  unsigned int v3; // eax
  _IRP *MasterIrp; // rax
  __int64 MdlAddress_low; // rdx

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp )
    {
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      if ( (unsigned int)MdlAddress_low <= 1 )
      {
        if ( HIDWORD(MasterIrp->MdlAddress) == 0x80000000 )
          v3 = RaUnitUnresponsiveAttributeMgmt(a1, MdlAddress_low, a1);
        else
          v3 = -1073741637;
        goto LABEL_17;
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x36u,
        (__int64)&WPP_a32982da72aa344f3768c69018313f42_Traceguids,
        a1);
    }
    v3 = -1073741811;
    goto LABEL_17;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x35u,
      (__int64)&WPP_a32982da72aa344f3768c69018313f42_Traceguids,
      a1);
  }
  v3 = -1073741820;
LABEL_17:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v3);
}
