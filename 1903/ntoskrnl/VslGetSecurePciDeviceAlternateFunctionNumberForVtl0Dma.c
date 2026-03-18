/*
 * XREFs of VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14028F940
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma(int a1, char a2, char a3, char a4)
{
  bool v8; // sf
  char result; // al
  _DWORD v10[28]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v10, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return -1;
  v10[2] = a1;
  LOBYTE(v10[3]) = a2;
  BYTE1(v10[3]) = a3;
  BYTE2(v10[3]) = a4;
  v10[4] = 2;
  v8 = VslpEnterIumSecureMode(2, 261LL, 0LL, (__int64)v10) < 0;
  result = v10[4];
  if ( v8 )
    return -1;
  return result;
}
