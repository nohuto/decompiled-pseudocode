/*
 * XREFs of UsbhPdoPower_QueryPower @ 0x1C0003A40
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0003B18 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhStartThisPowerIrp_Pdo @ 0x1C0003BD8 (UsbhStartThisPowerIrp_Pdo.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     WPP_RECORDER_SF_dD @ 0x1C004017C (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhPdoPower_QueryPower(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v5; // rbp
  int v6; // r8d
  unsigned int Options; // r9d
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rax
  int v11; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = PdoExt(a1);
  UsbhStartThisPowerIrp_Pdo(*(_QWORD *)(v5 + 1184), a1, a2, 703LL);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
  {
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_4;
    v11 = 10;
LABEL_8:
    WPP_RECORDER_SF_dD(
      v8->DeviceExtension,
      *(unsigned __int16 *)(v5 + 1428),
      v6,
      v11,
      (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
      *(_WORD *)(v5 + 1428),
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    goto LABEL_4;
  }
  if ( Options == 1 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 11;
      goto LABEL_8;
    }
  }
LABEL_4:
  v9 = PdoExt(a1);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v9 + 1184), a1, a2, 716LL);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
