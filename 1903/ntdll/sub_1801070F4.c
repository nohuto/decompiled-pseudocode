/*
 * XREFs of sub_1801070F4 @ 0x1801070F4
 * Callers:
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 *     sub_18010A450 @ 0x18010A450 (sub_18010A450.c)
 *     sub_18010A524 @ 0x18010A524 (sub_18010A524.c)
 */

NTSTATUS __fastcall sub_1801070F4(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int128 v5; // [rsp+30h] [rbp-68h] BYREF
  _BYTE SystemInformation[40]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v7; // [rsp+68h] [rbp-30h]

  *(_QWORD *)&v5 = 0x4000LL;
  sub_18010A450(a1, &v5);
  v5 = 0uLL;
  xmmword_1801638B0 = 0uLL;
  result = ZwQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
    return sub_18010A524(v3, v2, v4, v7 + 1);
  return result;
}
