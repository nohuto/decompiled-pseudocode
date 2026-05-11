/*
 * XREFs of ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F648
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BB8C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall CSidebandDevice::SetSidebandClaimed(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v4; // edi
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x8Bu,
        (__int64)&WPP_9af8842e681d335e16435351a8441770_Traceguids);
    *(_DWORD *)(*((_QWORD *)this + 5) + 144LL) = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    KeSetEvent((PRKEVENT)(*((_QWORD *)this + 5) + 96LL), 0, 0);
  }
  else
  {
    v4 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = -1073741811;
      v8 = 4;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        0x8Au,
        (__int64)&WPP_9af8842e681d335e16435351a8441770_Traceguids,
        v8,
        v9);
    }
  }
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
