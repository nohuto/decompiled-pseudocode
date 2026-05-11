/*
 * XREFs of USBCaptureClosePin @ 0x1C0030490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C000560C (USBCaptureWaitForWorkerComplete.c)
 *     USBHwFreePipes @ 0x1C002B2E8 (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x1C002B320 (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBCaptureClosePin(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v2 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x13u,
      (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
      a1);
  USBCaptureWaitForWorkerComplete(v2, (_BYTE *)(v4 + 208), (struct _KEVENT *)(v4 + 216));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v4 + 240));
  USBCaptureWaitForWorkerComplete(v2, (_BYTE *)(v4 + 248), (struct _KEVENT *)(v4 + 256));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v4 + 280));
  USBHwFreePipes(a1);
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
