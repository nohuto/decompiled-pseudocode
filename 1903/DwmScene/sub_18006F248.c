/*
 * XREFs of sub_18006F248 @ 0x18006F248
 * Callers:
 *     sub_180072C40 @ 0x180072C40 (sub_180072C40.c)
 * Callees:
 *     sub_18006E658 @ 0x18006E658 (sub_18006E658.c)
 *     sub_18007DD90 @ 0x18007DD90 (sub_18007DD90.c)
 */

__int64 __fastcall sub_18006F248(__int64 a1, _QWORD *a2, _QWORD **a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  _QWORD *v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h]

  v8 = a2;
  v4 = sub_18007DD90(a1);
  v5 = v4;
  v9 = v4;
  *(_WORD *)(v4 + 24) = 0;
  v8 = *a3;
  try
  {
    sub_18006E658((_QWORD *)(v4 + 32), &v8);
    result = v5;
  }
  catch ( ... )
  {
    sub_18007E47C(a1, v9);
    throw;
  }
  return result;
}
