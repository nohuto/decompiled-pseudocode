/*
 * XREFs of ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CBF8
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000ABB0 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x1C000BC90 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneVolumePropertyValues(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  NTSTATUS SidetoneVolumePropertyBasicSupport; // edi
  unsigned __int16 v7; // r9
  unsigned int NamedPipeType; // esi
  PVOID UserBuffer; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]
  unsigned int Length; // [rsp+68h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 4 )
  {
    SidetoneVolumePropertyBasicSupport = -1073741811;
    v7 = 56;
    v14 = 4;
LABEL_3:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      a3,
      v7,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v14,
      -1073741811);
    goto LABEL_9;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
    SidetoneVolumePropertyBasicSupport = -1073741811;
    v7 = 57;
    v14 = NamedPipeType;
    goto LABEL_3;
  }
  UserBuffer = Irp->UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  SidetoneVolumePropertyBasicSupport = CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
                                         this,
                                         NamedPipeType,
                                         &Length,
                                         UserBuffer);
  if ( SidetoneVolumePropertyBasicSupport >= 0 )
    Irp->IoStatus.Information = Length;
  WPP_RECORDER_SF_dq((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v11, 0x3Au, v13);
LABEL_9:
  Irp->IoStatus.Status = SidetoneVolumePropertyBasicSupport;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SidetoneVolumePropertyBasicSupport;
}
