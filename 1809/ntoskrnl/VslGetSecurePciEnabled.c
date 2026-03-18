/*
 * XREFs of VslGetSecurePciEnabled @ 0x14027B2E0
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x140273C80 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140129FF4 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

bool VslGetSecurePciEnabled()
{
  bool result; // al
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  int v2; // [rsp+30h] [rbp-78h]

  result = 0;
  if ( HvlQueryVsmConnection(0LL) )
  {
    v2 = 1;
    if ( VslpEnterIumSecureMode(2u, 244LL, 0, (__int64)v1) >= 0 && (v2 & 1) != 0 )
      return 1;
  }
  return result;
}
