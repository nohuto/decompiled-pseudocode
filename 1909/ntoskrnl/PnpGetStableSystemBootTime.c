/*
 * XREFs of PnpGetStableSystemBootTime @ 0x14086185C
 * Callers:
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PipHardwareConfigGetLastUseTime @ 0x14085C8F4 (PipHardwareConfigGetLastUseTime.c)
 */

__int64 __fastcall PnpGetStableSystemBootTime(_QWORD *a1)
{
  __int64 v2; // rcx
  int LastUseTime; // edx
  _QWORD SystemInformation[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  LastUseTime = PipHardwareConfigGetLastUseTime(v2, a1);
  if ( LastUseTime < 0 )
  {
    LastUseTime = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
    if ( LastUseTime >= 0 )
      *a1 = SystemInformation[0] - SystemInformation[4];
  }
  return (unsigned int)LastUseTime;
}
