/*
 * XREFs of sub_18007696C @ 0x18007696C
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x180076540 (RtlSetCurrentDirectory_U.c)
 *     sub_1800ECD5C @ 0x1800ECD5C (sub_1800ECD5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007696C(unsigned int a1, __int16 *a2)
{
  __int16 v2; // r8

  if ( a1 > 0xFFFF )
    v2 = -1;
  else
    v2 = a1;
  *a2 = v2;
  return a1 > 0xFFFF ? 0xC0000095 : 0;
}
