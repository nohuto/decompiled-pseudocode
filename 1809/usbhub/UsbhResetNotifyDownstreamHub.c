/*
 * XREFs of UsbhResetNotifyDownstreamHub @ 0x1C005034C
 * Callers:
 *     Usbh_HRS_WaitReady @ 0x1C000C5DC (Usbh_HRS_WaitReady.c)
 *     Usbh_HRS_Queued @ 0x1C004B5B4 (Usbh_HRS_Queued.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C00501A0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     UsbhSetPdo_FailIo @ 0x1C004846C (UsbhSetPdo_FailIo.c)
 */

_DWORD *__fastcall UsbhResetNotifyDownstreamHub(__int64 a1)
{
  unsigned int i; // edi
  _DWORD *result; // rax
  __int64 PortData; // rax
  __int64 v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rax

  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    v5 = *(_QWORD *)(PortData + 392);
    if ( v5 )
    {
      v6 = PdoExt(*(_QWORD *)(PortData + 392));
      v7 = v6;
      if ( *((_BYTE *)v6 + 2740) )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *((_QWORD *)v6 + 148),
            3u,
            0x18u,
            (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids,
            *((_QWORD *)v6 + 148));
        v8 = *((_QWORD *)v7 + 349);
        if ( v8 )
        {
          *(_QWORD *)(v8 + 56) = 1LL;
          *(_DWORD *)(*((_QWORD *)v7 + 349) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v7 + 349), 0);
        }
        UsbhSetPdo_FailIo(v5);
        Log(a1, 2, 1380861000, *((unsigned __int8 *)v7 + 2741), v5);
        *((_BYTE *)v7 + 2741) = 0;
      }
    }
  }
  return result;
}
