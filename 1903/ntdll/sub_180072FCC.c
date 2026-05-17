/*
 * XREFs of sub_180072FCC @ 0x180072FCC
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180072570 (RtlExtendCorrelationVector.c)
 *     sub_1800725B4 @ 0x1800725B4 (sub_1800725B4.c)
 *     RtlIncrementCorrelationVector @ 0x180072600 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F5CE0 (RtlValidateCorrelationVector.c)
 *     sub_1800F5DC0 @ 0x1800F5DC0 (sub_1800F5DC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180072FCC(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
