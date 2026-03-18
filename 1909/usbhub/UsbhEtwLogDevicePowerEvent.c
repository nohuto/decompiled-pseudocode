/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C00031F0
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0002450 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000EEE8 (UsbhEtwGetDeviceInfo.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhEtwGetActivityId @ 0x1C005F144 (UsbhEtwGetActivityId.c)
 */

__int64 __fastcall UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  __int64 result; // rax
  int ActivityId; // eax
  const GUID *v8; // rdx
  _QWORD v9[2]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v10[48]; // [rsp+88h] [rbp-9h] BYREF

  memset(v10, 0, 0x2CuLL);
  result = 0LL;
  v9[0] = 0LL;
  v9[1] = 0LL;
  if ( dword_1C006F650 )
  {
    FdoExt(*(_QWORD *)(a1 + 1184));
    UsbhEtwGetDeviceInfo(a1, v10);
    ActivityId = UsbhEtwGetActivityId(a2, v9);
    v8 = (const GUID *)v9;
    if ( ActivityId < 0 )
      v8 = 0LL;
    return UsbhEtwWrite(a3, v8);
  }
  return result;
}
