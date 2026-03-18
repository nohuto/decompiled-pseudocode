/*
 * XREFs of GetStreamId @ 0x1C000EE2C
 * Callers:
 *     BuildReadWriteCommand @ 0x1C000DE10 (BuildReadWriteCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     memset @ 0x1C0005980 (memset.c)
 */

__int64 __fastcall GetStreamId(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _DWORD v6[10]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(a1 + 3712) & 3) != 3 )
    return 0LL;
  if ( *(unsigned __int8 *)(a1 + 3713) != a3 )
    return 0LL;
  if ( !*(_WORD *)(a1 + 3716) )
    return 0LL;
  memset(v6, 0, sizeof(v6));
  LOWORD(v6[0]) = 1;
  if ( (unsigned int)StorPortExtendedFunction(28LL, a1, a2) )
    return 0LL;
  if ( (v6[2] & 0x100) == 0 )
    return 0LL;
  if ( (unsigned int)(v6[3] - 1) > 0xFFFE )
    return 0LL;
  result = LOWORD(v6[3]);
  if ( v6[3] > (unsigned int)*(unsigned __int16 *)(a1 + 3716) )
    return 0LL;
  return result;
}
