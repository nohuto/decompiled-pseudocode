/*
 * XREFs of ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C708
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000A804 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x1C000BC90 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall CSidebandDevice::GetMutePropertyValues(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v6; // esi
  unsigned __int16 v7; // r9
  unsigned int NamedPipeType; // ebp
  PVOID UserBuffer; // r9
  unsigned int MutePropertyBasicSupport; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  unsigned int Length; // [rsp+58h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
    {
      UserBuffer = Irp->UserBuffer;
      Length = CurrentStackLocation->Parameters.Read.Length;
      MutePropertyBasicSupport = CSidebandDevice::GetMutePropertyBasicSupport(this, NamedPipeType, &Length, UserBuffer);
      v11 = Length;
      v6 = MutePropertyBasicSupport;
      Irp->IoStatus.Information = Length;
      WPP_RECORDER_SF_dq((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v12, 0x2Bu, v14);
      goto LABEL_7;
    }
    v6 = -1073741811;
    v7 = 42;
    v15 = NamedPipeType;
  }
  else
  {
    v6 = -1073741811;
    v7 = 41;
    v15 = 4;
  }
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)Irp,
    a3,
    v7,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    v15,
    -1073741811);
LABEL_7:
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return v6;
}
