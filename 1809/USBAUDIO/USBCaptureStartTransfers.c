/*
 * XREFs of USBCaptureStartTransfers @ 0x1C002ECA0
 * Callers:
 *     USBCaptureResetWorker @ 0x1C0005700 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0005E90 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00063D0 (USBCaptureChangePowerState.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C002A664 (USBHwDataPipeReset.c)
 *     USBCaptureSubmitRequest @ 0x1C002EB44 (USBCaptureSubmitRequest.c)
 */

__int64 __fastcall USBCaptureStartTransfers(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // rbp
  unsigned int v6; // ebx
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  KeWaitForSingleObject((PVOID)(v5 + 152), Executive, 0, 0, 0LL);
  if ( a2 )
    v4 = USBHwDataPipeReset(a1);
  v6 = 0;
  do
  {
    if ( v4 < 0 )
      break;
    v4 = USBCaptureSubmitRequest((_QWORD *)(v5 + 288 + 56LL * v6++));
    *(_BYTE *)(v5 + 96) = v4 >= 0;
  }
  while ( v6 < 0xC );
  v7 = 0;
  if ( v4 != 259 )
    v7 = v4;
  KeReleaseMutex((PRKMUTEX)(v5 + 152), 0);
  if ( v7 < 0 )
  {
    v10 = v7;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      8u,
      0x10u,
      (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
      a1,
      v10);
  }
  return (unsigned int)v7;
}
