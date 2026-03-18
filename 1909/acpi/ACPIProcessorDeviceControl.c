/*
 * XREFs of ACPIProcessorDeviceControl @ 0x1C0091C40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNSObjectType @ 0x1C0005240 (AMLIGetNSObjectType.c)
 *     ACPIIoctlEnumChildren @ 0x1C000819C (ACPIIoctlEnumChildren.c)
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C00112B4 (ACPIIoctlEvalControlMethod.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     ACPIDispatchPowerIrpInvalid @ 0x1C0030DE0 (ACPIDispatchPowerIrpInvalid.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0056F38 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C005D0F4 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 */

__int64 __fastcall ACPIProcessorDeviceControl(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rbp
  _IRP *MasterIrp; // r14
  unsigned int LowPart; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v14; // edi
  unsigned int v16; // ecx
  __int64 *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v23, 0, 0x28uLL);
  if ( !Irp->RequestorMode )
  {
    DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v6 = DeviceExtension;
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart > 0x32C01C )
    {
      v16 = LowPart - 3325984;
      if ( !v16 )
        return (unsigned int)ACPIIoctlEnumChildren(
                               BugCheckParameter3,
                               Irp,
                               (__int64)Irp->Tail.Overlay.CurrentStackLocation);
      v20 = v16 - 28;
      if ( v20 )
      {
        v21 = v20 - 4;
        if ( !v21 )
          return (unsigned int)ACPIIoctlAsyncEvalControlMethod(
                                 BugCheckParameter3,
                                 Irp,
                                 (__int64)Irp->Tail.Overlay.CurrentStackLocation);
        v22 = v21 - 4;
        if ( v22 )
        {
          if ( v22 != 4 )
          {
LABEL_32:
            v14 = -1073741637;
            Irp->IoStatus.Status = -1073741637;
            goto LABEL_20;
          }
          return (unsigned int)ACPIIoctlAsyncEvalControlMethod(
                                 BugCheckParameter3,
                                 Irp,
                                 (__int64)Irp->Tail.Overlay.CurrentStackLocation);
        }
      }
      return (unsigned int)ACPIIoctlEvalControlMethod(
                             BugCheckParameter3,
                             Irp,
                             (__int64)Irp->Tail.Overlay.CurrentStackLocation);
    }
    if ( LowPart == 3325980 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(
                             BugCheckParameter3,
                             Irp,
                             (__int64)Irp->Tail.Overlay.CurrentStackLocation);
    v9 = LowPart - 2703744;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( !v10 )
        return (unsigned int)ACPIProcessorContainerGetLpiStatesIoctl(
                               Irp,
                               (__int64)Irp->Tail.Overlay.CurrentStackLocation);
      v11 = v10 - 622204;
      if ( v11 )
      {
        v12 = v11 - 4;
        if ( v12 && v12 != 20 )
          goto LABEL_32;
        return (unsigned int)ACPIIoctlEvalControlMethod(
                               BugCheckParameter3,
                               Irp,
                               (__int64)Irp->Tail.Overlay.CurrentStackLocation);
      }
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(
                             BugCheckParameter3,
                             Irp,
                             (__int64)Irp->Tail.Overlay.CurrentStackLocation);
    }
    if ( CurrentStackLocation->Parameters.Read.Length < 0xC )
    {
      Irp->IoStatus.Information = 0LL;
      v14 = -1073741820;
    }
    else
    {
      if ( (unsigned int)AMLIGetNSObjectType(*(_QWORD *)(DeviceExtension + 712)) != 12 )
      {
        v19 = *(_DWORD *)(v6 + 196);
        *(_DWORD *)&MasterIrp->AllocationProcessorNumber = 0;
        v14 = 0;
        *(_DWORD *)&MasterIrp->Type = v19;
        LOBYTE(MasterIrp->MdlAddress) = 0;
LABEL_17:
        if ( CurrentStackLocation->Parameters.Read.Length == 16 )
        {
          HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(v6 + 192);
          Irp->IoStatus.Information = 16LL;
        }
        else
        {
          Irp->IoStatus.Information = 12LL;
        }
        goto LABEL_19;
      }
      v14 = AMLIEvalNameSpaceObject(v17, v23, 0, 0LL);
      if ( v14 >= 0 )
      {
        v18 = v23[4];
        *(_DWORD *)&MasterIrp->Type = *(unsigned __int8 *)(v23[4] + 8LL);
        *(_DWORD *)&MasterIrp->AllocationProcessorNumber = *(_DWORD *)v18;
        LOBYTE(MasterIrp->MdlAddress) = *(_BYTE *)(v18 + 4);
        AMLIFreeDataBuffs(v23);
        goto LABEL_17;
      }
    }
LABEL_19:
    Irp->IoStatus.Status = v14;
LABEL_20:
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v14;
  }
  return ACPIDispatchPowerIrpInvalid(BugCheckParameter3, Irp);
}
