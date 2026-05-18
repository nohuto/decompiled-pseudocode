/*
 * XREFs of sub_18007DCCC @ 0x18007DCCC
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 * Callees:
 *     sub_1800B40DC @ 0x1800B40DC (sub_1800B40DC.c)
 *     sub_1800B4DA8 @ 0x1800B4DA8 (sub_1800B4DA8.c)
 */

void __fastcall sub_18007DCCC(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_1800B40DC(i[2]) == 1 )
      sub_1800B4DA8(i[2]);
  }
}
