/*
 * XREFs of RtlInternTableInitialize @ 0x14075BF24
 * Callers:
 *     PopEtInit @ 0x1409D8A28 (PopEtInit.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

__int64 __fastcall RtlInternTableInitialize(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = a2;
  return result;
}
