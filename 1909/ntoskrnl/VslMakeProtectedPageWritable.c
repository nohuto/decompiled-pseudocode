/*
 * XREFs of VslMakeProtectedPageWritable @ 0x14028FCD0
 * Callers:
 *     KeSetPagePrivilege @ 0x1402A44D8 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012B22C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslMakeProtectedPageWritable(__int64 a1, __int128 *a2)
{
  __int128 v5; // xmm0
  _OWORD v6[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 0;
  v5 = *a2;
  *((_QWORD *)&v6[0] + 1) = a1;
  v6[1] = v5;
  return VslpEnterIumSecureMode(2, 247LL, 0LL, (__int64)v6);
}
