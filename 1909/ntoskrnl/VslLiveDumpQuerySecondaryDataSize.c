/*
 * XREFs of VslLiveDumpQuerySecondaryDataSize @ 0x14028FC60
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x14028B7E0 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslLiveDumpQuerySecondaryDataSize(_QWORD *a1)
{
  NTSTATUS result; // eax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(2, 52LL, 0LL, (__int64)v3);
  if ( result >= 0 )
    *a1 = v3[2];
  return result;
}
