/*
 * XREFs of sub_1800A654C @ 0x1800A654C
 * Callers:
 *     sub_1800A6828 @ 0x1800A6828 (sub_1800A6828.c)
 * Callees:
 *     sub_18002B70C @ 0x18002B70C (sub_18002B70C.c)
 */

_QWORD *__fastcall sub_1800A654C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax

  v3 = sub_18002B70C(a1);
  *((_WORD *)v3 + 12) = 0;
  v3[4] = 0LL;
  v3[5] = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  v3[4] = *a2;
  v3[5] = a2[1];
  return v3;
}
