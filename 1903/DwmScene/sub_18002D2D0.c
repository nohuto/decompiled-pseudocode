/*
 * XREFs of sub_18002D2D0 @ 0x18002D2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009EB0C @ 0x18009EB0C (sub_18009EB0C.c)
 */

_QWORD *__fastcall sub_18002D2D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 *v4; // rax
  __int64 v5; // xmm0_8
  _QWORD *result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    v4 = (__int64 *)sub_18009EB0C(v2, &v7);
  }
  else
  {
    v7 = 0;
    v4 = (__int64 *)&v7;
    v8 = 0;
  }
  v5 = *v4;
  result = a2;
  *a2 = v5;
  return result;
}
