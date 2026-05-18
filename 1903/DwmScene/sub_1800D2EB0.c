/*
 * XREFs of sub_1800D2EB0 @ 0x1800D2EB0
 * Callers:
 *     <none>
 * Callees:
 *     __std_type_info_compare @ 0x180125AA2 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_1800D2EB0(__int64 a1, __int64 a2)
{
  if ( (unsigned int)_std_type_info_compare(a2 + 8, &qword_180266428) )
    return 0LL;
  else
    return a1 + 16;
}
