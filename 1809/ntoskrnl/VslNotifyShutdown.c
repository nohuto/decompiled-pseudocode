/*
 * XREFs of VslNotifyShutdown @ 0x14027B8DC
 * Callers:
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x14057E014 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129CB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(2u, 243LL, 0, (__int64)v2);
}
