/*
 * XREFs of RtlSecondsSince1980ToTime @ 0x1800E4290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSecondsSince1980ToTime(unsigned int a1, __int64 *a2)
{
  __int64 result; // rax

  result = 10000000 * (a1 + 0x2C8DF3700LL);
  *a2 = result;
  return result;
}
