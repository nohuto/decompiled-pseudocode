/*
 * XREFs of sub_1800A665C @ 0x1800A665C
 * Callers:
 *     sub_1800A6938 @ 0x1800A6938 (sub_1800A6938.c)
 * Callees:
 *     sub_18002B81C @ 0x18002B81C (sub_18002B81C.c)
 */

_QWORD *__fastcall sub_1800A665C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax

  v3 = sub_18002B81C(a1);
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
