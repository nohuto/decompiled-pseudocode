/*
 * XREFs of UsbhEtwLogHubInformation @ 0x1C001FA68
 * Callers:
 *     UsbhSetFdoPnpState @ 0x1C001EDBC (UsbhSetFdoPnpState.c)
 *     UsbhEtwRundown @ 0x1C002B2BC (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001FF30 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhEtwLogHubInformation(__int64 a1)
{
  PCEVENT_DESCRIPTOR v1; // r10
  __int64 result; // rax
  _BYTE v3[40]; // [rsp+78h] [rbp-40h] BYREF

  if ( dword_1C006E650 )
  {
    UsbhEtwGetHubInfo(a1, v3);
    return UsbhEtwWrite(v1, 0LL);
  }
  return result;
}
