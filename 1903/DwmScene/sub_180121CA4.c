/*
 * XREFs of sub_180121CA4 @ 0x180121CA4
 * Callers:
 *     sub_180122FFC @ 0x180122FFC (sub_180122FFC.c)
 * Callees:
 *     sub_180120998 @ 0x180120998 (sub_180120998.c)
 *     sub_180120BBC @ 0x180120BBC (sub_180120BBC.c)
 */

__int64 __fastcall sub_180121CA4(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 **v4; // r14
  _QWORD *v5; // rbx
  __int64 result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 != a3 )
  {
    v4 = (__int64 **)(a1 + 1);
    v5 = a2;
    do
    {
      sub_180120BBC((__int64)v4, **v4, (__int64)(v5 + 2));
      result = sub_180120998(a1, (__int64)v8, (unsigned __int64 *)(**v4 + 16), **v4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != a3 );
  }
  return result;
}
