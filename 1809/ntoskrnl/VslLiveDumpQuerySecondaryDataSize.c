/*
 * XREFs of VslLiveDumpQuerySecondaryDataSize @ 0x14027B9F0
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x1402779C0 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __fastcall VslLiveDumpQuerySecondaryDataSize(_QWORD *a1)
{
  NTSTATUS result; // eax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(2u, 48LL, 0, (__int64)v3);
  if ( result >= 0 )
    *a1 = v3[2];
  return result;
}
