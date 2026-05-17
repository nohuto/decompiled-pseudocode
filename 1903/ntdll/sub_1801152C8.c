/*
 * XREFs of sub_1801152C8 @ 0x1801152C8
 * Callers:
 *     sub_180114B68 @ 0x180114B68 (sub_180114B68.c)
 *     sub_180115154 @ 0x180115154 (sub_180115154.c)
 *     sub_18011534C @ 0x18011534C (sub_18011534C.c)
 * Callees:
 *     sub_180115BB0 @ 0x180115BB0 (sub_180115BB0.c)
 */

__int64 __fastcall sub_1801152C8(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v4; // ebx
  _QWORD *v6; // rdi

  v2 = 0;
  v4 = ((unsigned int)*(unsigned __int8 *)(a2 + 19) + 7) >> 3;
  if ( v4 )
  {
    v6 = (_QWORD *)(a2 + 24);
    do
    {
      if ( !*v6 )
        break;
      sub_180115BB0(a1);
      ++v2;
      ++v6;
    }
    while ( v2 < v4 );
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *(_QWORD *)(a1 + 64));
}
