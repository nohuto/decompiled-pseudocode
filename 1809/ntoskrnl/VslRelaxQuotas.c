/*
 * XREFs of VslRelaxQuotas @ 0x140819EF0
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A0E4 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS VslRelaxQuotas()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( !HvlQueryVsmConnection(0LL) )
    return -1070268386;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return -1073740972;
  return VslpEnterIumSecureMode(2u, 47LL, 0, (__int64)v2);
}
