/*
 * XREFs of HvlpGetVtlCallVa @ 0x14032BC5C
 * Callers:
 *     HvlEnableVsmCalls @ 0x1409E0548 (HvlEnableVsmCalls.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvcallFastExtended @ 0x1403226F0 (HvcallFastExtended.c)
 */

__int64 HvlpGetVtlCallVa()
{
  __int64 result; // rax
  char *v1; // rcx
  __int64 v2; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v3[2]; // [rsp+50h] [rbp-30h] BYREF
  int v4; // [rsp+60h] [rbp-20h]

  v3[0] = -1LL;
  v3[1] = 4294967294LL;
  v4 = 851970;
  result = HvcallFastExtended(0x100010050LL, (__int64)v3, 20LL, (__int64)&v2, 0x10u);
  v1 = 0LL;
  if ( !(_WORD)result )
    v1 = (char *)HvlpHypercallCodeVa + (v2 & 0xFFF);
  HvlpVsmVtlCallVa = (__int64)v1;
  return result;
}
