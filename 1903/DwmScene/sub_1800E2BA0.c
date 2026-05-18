/*
 * XREFs of sub_1800E2BA0 @ 0x1800E2BA0
 * Callers:
 *     <none>
 * Callees:
 *     __std_type_info_compare @ 0x180125AA2 (__std_type_info_compare.c)
 *     __RTtypeid @ 0x180125AAE (__RTtypeid.c)
 */

bool __fastcall sub_1800E2BA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  bool result; // al

  result = 1;
  if ( a1 != a2 )
  {
    v3 = _RTtypeid(a2);
    v4 = _RTtypeid(a1);
    if ( (unsigned int)_std_type_info_compare(v4 + 8, v3 + 8) )
      return 0;
  }
  return result;
}
