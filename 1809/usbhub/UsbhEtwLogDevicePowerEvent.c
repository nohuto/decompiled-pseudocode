/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C0003024
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0002340 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000EA28 (UsbhEtwGetDeviceInfo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     UsbhEtwGetActivityId @ 0x1C005CB08 (UsbhEtwGetActivityId.c)
 */

void __fastcall UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  int ActivityId; // eax
  const GUID *v7; // rdx
  _BYTE v8[16]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v9[48]; // [rsp+88h] [rbp-9h] BYREF

  if ( dword_1C006E650 )
  {
    FdoExt(*(_QWORD *)(a1 + 1184));
    UsbhEtwGetDeviceInfo(a1, v9);
    ActivityId = UsbhEtwGetActivityId(a2, v8);
    v7 = (const GUID *)v8;
    if ( ActivityId < 0 )
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
