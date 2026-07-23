/*
 * XREFs of VslDetermineHotPatchType @ 0x140819700
 * Callers:
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MmRegisterHotPatch @ 0x1409F81D0 (MmRegisterHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslDetermineHotPatchType(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  v6 = a1;
  v7 = a2;
  result = VslpEnterIumSecureMode(2u, 62LL, 0, (__int64)v5);
  if ( result >= 0 )
    *a3 = v7;
  return result;
}
