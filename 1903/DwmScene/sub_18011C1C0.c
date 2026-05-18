/*
 * XREFs of sub_18011C1C0 @ 0x18011C1C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

DWORDLONG sub_18011C1C0()
{
  _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-58h] BYREF

  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  return Buffer.ullTotalPhys;
}
