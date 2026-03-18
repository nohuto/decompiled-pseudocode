/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1C000207C
 * Callers:
 *     UsbhPdoSetDx @ 0x1C000138C (UsbhPdoSetDx.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00022B0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhSshResumeDownstream @ 0x1C0006D00 (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhPCE_Suspend @ 0x1C00021C4 (UsbhPCE_Suspend.c)
 *     UsbhPdoArmedForWake @ 0x1C000228C (UsbhPdoArmedForWake.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     Usbh__TestPoint__Ulong @ 0x1C001D1AC (Usbh__TestPoint__Ulong.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x1C005B0EC (UsbhEnableDeviceForWake.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebp
  __int64 v7; // rbx
  int PortState; // eax
  __int64 v9; // rsi
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  int v13; // [rsp+98h] [rbp+20h]

  v4 = 0;
  v13 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1,
        18,
        (__int64)&WPP_1a66e3aa0ae5301a947124a88b8d98c7_Traceguids,
        a2);
  }
  v7 = PdoExt(a2);
  PortState = UsbhQueryPortState(*(_QWORD *)(a1 + 8));
  if ( PortState >= 0 && (v13 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v7 + 1420) & 0x100) != 0 )
    {
      if ( (unsigned __int8)UsbhPdoArmedForWake(a2, (unsigned int)PortState) )
      {
        if ( !a3 && (*(_DWORD *)(v7 + 1420) & 4) == 0 )
        {
          v4 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v12);
          if ( (v4 & 0xC0000000) == 0xC0000000 )
          {
            LOBYTE(v11) = 0;
            UsbhException(
              *(_QWORD *)(a1 + 8),
              *(unsigned __int16 *)(v7 + 1428),
              50,
              0,
              0,
              v4,
              v12,
              usbfile_pdopwr_c,
              1404,
              v11);
          }
        }
      }
    }
    Usbh__TestPoint__Ulong(*(_QWORD *)(a1 + 8), 3LL, v4, *(unsigned __int16 *)(v7 + 1428));
    v9 = (unsigned int)UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *(unsigned __int16 *)(v7 + 1428));
    Usbh__TestPoint__Ulong(*(_QWORD *)(a1 + 8), 4LL, v9, *(unsigned __int16 *)(v7 + 1428));
  }
  else
  {
    LOBYTE(v11) = 0;
    UsbhException(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int16 *)(v7 + 1428),
      118,
      0,
      0,
      PortState,
      v12,
      usbfile_pdopwr_c,
      1420,
      v11);
    LODWORD(v9) = -1073741823;
  }
  return (unsigned int)v9;
}
