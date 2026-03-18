/*
 * XREFs of Usbh_PCE_SD_Resume_Action @ 0x1C0046234
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000AA88 (UsbhFlushPortChangeQueue.c)
 *     UsbhLockPcqWithTag @ 0x1C000B800 (UsbhLockPcqWithTag.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C004572C (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_SD_Resume_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // [rsp+28h] [rbp-20h]
  KIRQL v14; // [rsp+58h] [rbp+10h] BYREF

  FdoExt(a1);
  Log(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x30u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v13,
      a3);
  }
  v8 = UsbhLockPcqWithTag(a1, a2, 13, &v14, 0);
  if ( v8 == 1 || v8 == 6 )
  {
    Log(a1, 512, 825782321, v8, *(unsigned __int16 *)(a2 + 4));
    UsbhFlushPortChangeQueue(a1, a2, v10, v11);
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v12 + a2 + 1384) = 2;
    UsbhSetPcqEventStatus(a1, a2, 2LL, 10);
    KeResetEvent((PRKEVENT)(a2 + 472));
  }
  else
  {
    v9 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v8;
    *(_DWORD *)(v9 + a2 + 1384) = v8;
  }
  UsbhUnlockPcqWithTag(a1, a2, v14);
}
