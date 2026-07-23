/*
 * XREFs of VslDebugProtectSecureProcessMemory @ 0x1408194B0
 * Callers:
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     NtProtectVirtualMemory @ 0x1405EED70 (NtProtectVirtualMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslDebugProtectSecureProcessMemory(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  NTSTATUS result; // eax
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]

  v10 = *(_QWORD *)(a1 + 720);
  v12 = *a3;
  v13 = *a4;
  v11 = a2;
  v14 = a5;
  result = VslpEnterIumSecureMode(2u, 38LL, 0, (__int64)v9);
  if ( result >= 0 )
  {
    *a3 = v12;
    *a4 = v13;
    *a6 = v14;
  }
  return result;
}
