/*
 * XREFs of sub_1800D59E0 @ 0x1800D59E0
 * Callers:
 *     sub_1800D5314 @ 0x1800D5314 (sub_1800D5314.c)
 *     sub_1800D55A0 @ 0x1800D55A0 (sub_1800D55A0.c)
 *     sub_1800D583C @ 0x1800D583C (sub_1800D583C.c)
 *     sub_1800D58E8 @ 0x1800D58E8 (sub_1800D58E8.c)
 *     sub_1800D5A4C @ 0x1800D5A4C (sub_1800D5A4C.c)
 *     sub_1800D5AE0 @ 0x1800D5AE0 (sub_1800D5AE0.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D59E0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *i; // rax

  v3 = (_QWORD *)(a1 + 184);
  v4 = (_QWORD *)(a1 + 144);
  for ( i = v4; i != v3; ++i )
  {
    if ( *i == a3 )
      break;
  }
  if ( i == v3 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    *(_BYTE *)a2 = 1;
    *(_QWORD *)(a2 + 8) = (unsigned int)(i - v4);
  }
  return a2;
}
