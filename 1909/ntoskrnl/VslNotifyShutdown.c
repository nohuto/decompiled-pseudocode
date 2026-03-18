/*
 * XREFs of VslNotifyShutdown @ 0x14028FD60
 * Callers:
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1405ADEE4 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = a1;
  memset(v3, 0, 0x68uLL);
  v3[1] = v1;
  return VslpEnterIumSecureMode(2, 260LL, 0LL, (__int64)v3);
}
