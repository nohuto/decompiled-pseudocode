/*
 * XREFs of UsbhQueueDriverOvercurrent @ 0x1C0042E50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0004640 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001CA20 (UsbhDispatch_HardResetEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C004313C (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhPCE_Disable @ 0x1C0045FCC (UsbhPCE_Disable.c)
 */

__int64 __fastcall UsbhQueueDriverOvercurrent(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 PortData; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 result; // rax
  _DWORD *v9; // rax

  v4 = FdoExt(a1);
  Log(a1, 0x4000, 1148155441, 0LL, *(unsigned __int16 *)(a2 + 20));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_77b63b465b19337bde5ec65a46dc4561_Traceguids);
  if ( !*((_BYTE *)v4 + 3010) )
  {
    *((_BYTE *)v4 + 3010) = 1;
    UsbhQueueWorkItemEx(a1, 1u, (int)UsbhSetHubOvercurrentDetectedKey, 0LL, 0, 1666340431, 0LL);
  }
  PortData = UsbhGetPortData(a1, *(_WORD *)(a2 + 20));
  v6 = PortData;
  if ( !PortData )
    return Usbh_OvercurrentDerefHubBusy(a1, 0LL, 0LL);
  v7 = PortData + 200;
  UsbhPCE_Disable(a1, *(unsigned __int16 *)(a2 + 20), PortData + 200);
  result = UsbhQueueWorkItemEx(
             a1,
             1u,
             (int)UsbhDriverOvercurrentResetWorker,
             v7,
             *(unsigned __int16 *)(v6 + 4),
             1666340431,
             0LL) & 0xC0000000LL;
  if ( (_DWORD)result == -1073741824 )
  {
    Usbh_OvercurrentDerefHubBusy(a1, v6, 0LL);
    v9 = FdoExt(a1);
    return UsbhDispatch_HardResetEvent(a1, (__int64)(v9 + 346), 3);
  }
  return result;
}
