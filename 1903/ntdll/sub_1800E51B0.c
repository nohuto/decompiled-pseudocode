/*
 * XREFs of sub_1800E51B0 @ 0x1800E51B0
 * Callers:
 *     sub_1800E5164 @ 0x1800E5164 (sub_1800E5164.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlEqualPrefixSid @ 0x1800125D0 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x180067010 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

char __fastcall sub_1800E51B0(unsigned __int8 *a1, unsigned __int8 *a2, _WORD *a3, _WORD *a4)
{
  __int64 v6; // rcx
  int v9; // edx
  _WORD *v10; // rdx
  int v12; // [rsp+20h] [rbp-68h] BYREF
  __int16 v13; // [rsp+24h] [rbp-64h]
  _DWORD v14[12]; // [rsp+28h] [rbp-60h] BYREF

  v6 = *a2;
  if ( byte_180126B68[v6] != byte_180126B68[*a1] || byte_180126B68[v6 + 16] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  if ( !RtlEqualSid(a2 + 8, (_WORD *)a1 + 4) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    v12 = 0;
    v13 = 768;
    memset(v14, 0, sizeof(v14));
    if ( (int)RtlInitializeSid((__int64)v14, (__int64)&v12, 1u) < 0 )
      return 0;
    v14[2] = 0;
    if ( !RtlEqualPrefixSid(a1 + 8, v14) )
      return 0;
    v9 = *((_DWORD *)a1 + 4);
    if ( v9 )
    {
      if ( v9 != 1 || !a4 )
        return 0;
      v10 = a4;
    }
    else
    {
      if ( !a3 )
        return 0;
      v10 = a3;
    }
    if ( !RtlEqualSid(a2 + 8, v10) )
      return 0;
  }
  return 1;
}
