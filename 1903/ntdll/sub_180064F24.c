/*
 * XREFs of sub_180064F24 @ 0x180064F24
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_180064F24 @ 0x180064F24 (sub_180064F24.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_180064F24 @ 0x180064F24 (sub_180064F24.c)
 *     sub_180064FB8 @ 0x180064FB8 (sub_180064FB8.c)
 */

__int64 __fastcall sub_180064F24(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  v3 = *a1 - 160LL;
  result = *(_QWORD *)(v3 + 176);
  if ( result && *(_QWORD *)(result + 40) == a2 )
  {
    while ( 1 )
    {
      sub_180064FB8(*(PVOID *)(v3 + 176));
      v6 = *(_QWORD **)(v3 + 160);
      if ( a1 == v6 )
        break;
      v3 = (__int64)(v6 - 20);
    }
    result = *(_QWORD *)(v3 + 152);
    v7 = *(_QWORD **)(result + 40);
    if ( v7 )
    {
      v8 = *(_QWORD **)(result + 40);
      do
      {
        v8 = (_QWORD *)*v8;
        result = sub_180064F24(v8[1], a2);
      }
      while ( v8 != v7 );
    }
  }
  return result;
}
