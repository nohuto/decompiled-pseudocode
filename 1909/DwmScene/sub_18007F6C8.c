/*
 * XREFs of sub_18007F6C8 @ 0x18007F6C8
 * Callers:
 *     sub_180072CA8 @ 0x180072CA8 (sub_180072CA8.c)
 *     sub_18007F5EC @ 0x18007F5EC (sub_18007F5EC.c)
 * Callees:
 *     __std_type_info_compare @ 0x180125BB2 (__std_type_info_compare.c)
 */

_QWORD *__fastcall sub_18007F6C8(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // rdi
  __int64 *v6; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( (int)_std_type_info_compare(v6[4] + 8, *a3 + 8LL) >= 0 )
    {
      v3 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  result = a2;
  *a2 = v3;
  return result;
}
