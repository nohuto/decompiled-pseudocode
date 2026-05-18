/*
 * XREFs of sub_1801182E0 @ 0x1801182E0
 * Callers:
 *     <none>
 * Callees:
 *     __std_type_info_compare @ 0x180125BB2 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_1801182E0(__int64 a1, __int64 a2)
{
  if ( (unsigned int)_std_type_info_compare(a2 + 8, &qword_180268E68) )
    return 0LL;
  else
    return a1 + 16;
}
