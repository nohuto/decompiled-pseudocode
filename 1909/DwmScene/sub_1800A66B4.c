/*
 * XREFs of sub_1800A66B4 @ 0x1800A66B4
 * Callers:
 *     sub_1800A738C @ 0x1800A738C (sub_1800A738C.c)
 * Callees:
 *     sub_18002B85C @ 0x18002B85C (sub_18002B85C.c)
 *     sub_1800A64BC @ 0x1800A64BC (sub_1800A64BC.c)
 */

_QWORD *__fastcall sub_1800A66B4(_QWORD *a1, _DWORD *a2, _DWORD **a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *result; // rax
  _DWORD *v8; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v9; // [rsp+70h] [rbp+18h]

  v8 = a2;
  v4 = sub_18002B85C(a1);
  v5 = v4;
  v9 = v4;
  *((_WORD *)v4 + 12) = 0;
  v8 = *a3;
  try
  {
    sub_1800A64BC((_DWORD *)v4 + 8, &v8);
    result = v5;
  }
  catch ( ... )
  {
    sub_18002B8AC((__int64)a1, (__int64)v9);
    throw;
  }
  return result;
}
