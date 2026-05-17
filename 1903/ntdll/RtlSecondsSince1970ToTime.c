/*
 * XREFs of RtlSecondsSince1970ToTime @ 0x1800895A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSecondsSince1970ToTime(unsigned int a1, __int64 *a2)
{
  __int64 result; // rax

  result = 10000000 * (a1 + 0x2B6109100LL);
  *a2 = result;
  return result;
}
