/*
 * XREFs of VslDetermineHotPatchUndoTableSize @ 0x14081976C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslDetermineHotPatchUndoTableSize(__int64 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  int v6; // [rsp+30h] [rbp-78h]

  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 63LL, 0, (__int64)v4);
  if ( result >= 0 )
    *a2 = v6;
  return result;
}
