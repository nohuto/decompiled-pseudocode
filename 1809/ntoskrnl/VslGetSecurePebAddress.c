/*
 * XREFs of VslGetSecurePebAddress @ 0x140818810
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslGetSecurePebAddress(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]

  v5 = *(_QWORD *)(a1 + 720);
  result = VslpEnterIumSecureMode(2u, 192LL, 0, (__int64)v4);
  if ( result >= 0 )
    *a2 = v6;
  return result;
}
