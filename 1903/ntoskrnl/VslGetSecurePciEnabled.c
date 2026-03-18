/*
 * XREFs of VslGetSecurePciEnabled @ 0x14028F9E0
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x140287D40 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

bool VslGetSecurePciEnabled()
{
  bool result; // al
  _DWORD v1[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  result = 0;
  if ( HvlQueryVsmConnection(0LL) )
  {
    v1[4] = 1;
    if ( VslpEnterIumSecureMode(2, 261LL, 0LL, (__int64)v1) >= 0 && (v1[4] & 1) != 0 )
      return 1;
  }
  return result;
}
