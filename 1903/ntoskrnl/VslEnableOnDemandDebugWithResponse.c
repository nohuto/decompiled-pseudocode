/*
 * XREFs of VslEnableOnDemandDebugWithResponse @ 0x140852330
 * Callers:
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1408CB284 (PsIumEnableOnDemandDebugWithResponse.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslEnableOnDemandDebugWithResponse(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a3;
  memset(v7, 0, 0x68uLL);
  result = -1073741790;
  if ( (unsigned int)v3 <= 0x50 )
  {
    v7[1] = *(_QWORD *)(a1 + 728);
    v7[2] = v3;
    memmove(&v7[3], a2, (unsigned int)v3);
    return VslpEnterIumSecureMode(2, 19LL, 0LL, (__int64)v7);
  }
  return result;
}
