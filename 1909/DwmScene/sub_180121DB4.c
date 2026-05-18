/*
 * XREFs of sub_180121DB4 @ 0x180121DB4
 * Callers:
 *     sub_18012310C @ 0x18012310C (sub_18012310C.c)
 * Callees:
 *     sub_180120AA8 @ 0x180120AA8 (sub_180120AA8.c)
 *     sub_180120CCC @ 0x180120CCC (sub_180120CCC.c)
 */

__int64 __fastcall sub_180121DB4(_QWORD *a1, _QWORD *a2, _QWORD *a3)
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
      sub_180120CCC((__int64)v4, **v4, (__int64)(v5 + 2));
      result = sub_180120AA8(a1, (__int64)v8, (unsigned __int64 *)(**v4 + 16), **v4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != a3 );
  }
  return result;
}
