/*
 * XREFs of UsbhPdoPower_QueryPower @ 0x1C00039C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0003AF4 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00417A4 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhPdoPower_QueryPower(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // rbp
  __int64 v6; // r14
  int v7; // r8d
  _IO_STACK_LOCATION *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9
  unsigned int Options; // ecx
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // rax
  int v16; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = PdoExt(a1);
  v6 = *(_QWORD *)(v5 + 1184);
  PdoExt(a1);
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  if ( v8->Parameters.Create.Options <= 1 )
  {
    Log(v6, 16, 1346653747, (_DWORD)v8, (__int64)a2);
    *(_QWORD *)(v9 + 8 * v10 + 800) = a2;
    *(_QWORD *)(v9 + 8 * v10 + 816) = v11;
    *(_DWORD *)(v9 + 4 * v10 + 832) = 703;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options )
  {
    if ( Options != 1 )
      goto LABEL_7;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_7;
    v16 = 11;
LABEL_12:
    WPP_RECORDER_SF_dD(
      v13->DeviceExtension,
      *(unsigned __int16 *)(v5 + 1428),
      v7,
      v16,
      (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
      *(_WORD *)(v5 + 1428),
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v16 = 10;
      goto LABEL_12;
    }
  }
LABEL_7:
  v14 = PdoExt(a1);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v14 + 1184), a1, a2, 716LL);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
