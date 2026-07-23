/*
 * XREFs of VslEnableOnDemandDebugWithResponse @ 0x14081981C
 * Callers:
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14088E010 (PsIumEnableOnDemandDebugWithResponse.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

NTSTATUS __fastcall VslEnableOnDemandDebugWithResponse(__int64 a1, const void *a2, unsigned int a3)
{
  NTSTATUS result; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  _BYTE v7[88]; // [rsp+38h] [rbp-70h] BYREF

  result = -1073741790;
  if ( a3 <= 0x50 )
  {
    v5 = *(_QWORD *)(a1 + 720);
    v6 = a3;
    memmove(v7, a2, a3);
    return VslpEnterIumSecureMode(2u, 19LL, 0, (__int64)v4);
  }
  return result;
}
