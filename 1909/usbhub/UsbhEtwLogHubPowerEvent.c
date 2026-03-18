/*
 * XREFs of UsbhEtwLogHubPowerEvent @ 0x1C000688C
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004020 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C00043A0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0005020 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0005720 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C0006560 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C0020C80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhEtwGetActivityId @ 0x1C005F144 (UsbhEtwGetActivityId.c)
 */

__int64 __fastcall UsbhEtwLogHubPowerEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  int ActivityId; // eax
  const GUID *v11; // rdx
  __int128 v12; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v13[40]; // [rsp+80h] [rbp-19h] BYREF

  memset(v13, 0, 0x24uLL);
  result = 0LL;
  v12 = 0uLL;
  if ( dword_1C006F650 )
  {
    v9 = FdoExt(a1);
    UsbhEtwGetHubInfo(v9, v13);
    if ( a3 )
    {
      ActivityId = 0;
      v12 = *a3;
    }
    else
    {
      ActivityId = UsbhEtwGetActivityId(a2, &v12);
    }
    v11 = (const GUID *)&v12;
    if ( ActivityId < 0 )
      v11 = 0LL;
    return UsbhEtwWrite(a4, v11);
  }
  return result;
}
