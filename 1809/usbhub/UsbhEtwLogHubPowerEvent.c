/*
 * XREFs of UsbhEtwLogHubPowerEvent @ 0x1C0006394
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C0003E90 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0004200 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0004CD0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0005280 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0005B50 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C0006080 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001FF30 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     UsbhEtwGetActivityId @ 0x1C005CB08 (UsbhEtwGetActivityId.c)
 */

void __fastcall UsbhEtwLogHubPowerEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  __int64 v7; // rax
  int ActivityId; // eax
  const GUID *v9; // rdx
  __int128 v10; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v11[40]; // [rsp+80h] [rbp-9h] BYREF

  if ( dword_1C006E650 )
  {
    v7 = FdoExt(a1);
    UsbhEtwGetHubInfo(v7, v11);
    if ( a3 )
    {
      ActivityId = 0;
      v10 = *a3;
    }
    else
    {
      ActivityId = UsbhEtwGetActivityId(a2, &v10);
    }
    v9 = (const GUID *)&v10;
    if ( ActivityId < 0 )
      v9 = 0LL;
    UsbhEtwWrite(a4, v9);
  }
}
