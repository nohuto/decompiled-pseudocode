/*
 * XREFs of VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14027B550
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A0E4 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma()
{
  char v0; // dl
  char v1; // r8
  char v2; // r9
  int v3; // r10d
  bool v4; // sf
  char result; // al
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  int v7; // [rsp+28h] [rbp-80h]
  char v8; // [rsp+2Ch] [rbp-7Ch]
  char v9; // [rsp+2Dh] [rbp-7Bh]
  char v10; // [rsp+2Eh] [rbp-7Ah]
  int v11; // [rsp+30h] [rbp-78h]

  if ( !HvlQueryVsmConnection(0LL) )
    return -1;
  v8 = v0;
  v9 = v1;
  v10 = v2;
  v7 = v3;
  v11 = 2;
  v4 = VslpEnterIumSecureMode(2u, 244LL, 0, (__int64)v6) < 0;
  result = v11;
  if ( v4 )
    return -1;
  return result;
}
