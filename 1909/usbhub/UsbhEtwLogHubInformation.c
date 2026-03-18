/*
 * XREFs of UsbhEtwLogHubInformation @ 0x1C0020788
 * Callers:
 *     UsbhSetFdoPnpState @ 0x1C001FA7C (UsbhSetFdoPnpState.c)
 *     UsbhEtwRundown @ 0x1C002C4EC (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C0020C80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

void *__fastcall UsbhEtwLogHubInformation(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  void *result; // rax
  _BYTE v5[40]; // [rsp+78h] [rbp+1Fh] BYREF

  result = memset(v5, 0, 0x24uLL);
  if ( dword_1C006F650 )
  {
    UsbhEtwGetHubInfo(a1, v5);
    return (void *)UsbhEtwWrite(a2, 0LL);
  }
  return result;
}
