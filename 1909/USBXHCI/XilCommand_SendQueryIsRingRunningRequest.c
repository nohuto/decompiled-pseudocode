/*
 * XREFs of XilCommand_SendQueryIsRingRunningRequest @ 0x1C000C828
 * Callers:
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilCommand_SendQueryIsRingRunningRequest(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v13[5]; // [rsp+38h] [rbp-50h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(v7 + 112);
  *(_OWORD *)&v13[1] = 0LL;
  v13[3] = v8;
  v13[4] = 18LL;
  v10 = SecureChannel_SendRequestSynchronously(v9, (unsigned int)v13, 40, (unsigned int)&v12, 8);
  if ( v10 >= 0 )
  {
    if ( (int)v12 >= 0 )
    {
      *a2 = BYTE4(v12);
      LOBYTE(v10) = BYTE5(v12);
      *a3 = BYTE5(v12);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v7 + 72),
          2u,
          7u,
          0x1Cu,
          (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
          v12);
      LOBYTE(v10) = Debug_FreAssertMsg(
                      "IOCTL succeeded but CommandQueryIsRingRunning failed in VTL-1 failed",
                      0LL,
                      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
                      889LL);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_SF_d(
                    *(_QWORD *)(v7 + 72),
                    2u,
                    7u,
                    0x1Bu,
                    (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
                    v10);
  }
  return v10;
}
