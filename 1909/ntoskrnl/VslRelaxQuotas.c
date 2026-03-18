/*
 * XREFs of VslRelaxQuotas @ 0x1408523F8
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012B22C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS VslRelaxQuotas()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return -1070268386;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return -1073740972;
  return VslpEnterIumSecureMode(2, 51LL, 0LL, (__int64)v2);
}
