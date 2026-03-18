/*
 * XREFs of HvlpGetVtlCallVa @ 0x14034CCB4
 * Callers:
 *     HvlEnableVsmCalls @ 0x140A22F58 (HvlEnableVsmCalls.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvcallFastExtended @ 0x140343A40 (HvcallFastExtended.c)
 */

__int64 HvlpGetVtlCallVa()
{
  char *v0; // rbx
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v3; // [rsp+50h] [rbp-30h] BYREF
  int v4; // [rsp+58h] [rbp-28h]
  int v5; // [rsp+5Ch] [rbp-24h]
  int v6; // [rsp+60h] [rbp-20h]

  v3 = -1LL;
  v0 = 0LL;
  v2[0] = 0LL;
  v2[1] = 0LL;
  v5 = 0;
  v4 = -2;
  v6 = 851970;
  result = HvcallFastExtended(0x100010050LL, (__int64)&v3, 20LL, (__int64)v2, 0x10u);
  if ( !(_WORD)result )
    v0 = (char *)HvlpHypercallCodeVa + (v2[0] & 0xFFF);
  *(_QWORD *)&HvlpVsmVtlCallVa = v0;
  return result;
}
