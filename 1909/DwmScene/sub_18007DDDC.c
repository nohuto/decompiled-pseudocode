/*
 * XREFs of sub_18007DDDC @ 0x18007DDDC
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 * Callees:
 *     sub_1800B41EC @ 0x1800B41EC (sub_1800B41EC.c)
 *     sub_1800B4EB8 @ 0x1800B4EB8 (sub_1800B4EB8.c)
 */

void __fastcall sub_18007DDDC(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_1800B41EC(i[2]) == 1 )
      sub_1800B4EB8(i[2]);
  }
}
