/*
 * XREFs of sub_18006F358 @ 0x18006F358
 * Callers:
 *     sub_180072D50 @ 0x180072D50 (sub_180072D50.c)
 * Callees:
 *     sub_18006E768 @ 0x18006E768 (sub_18006E768.c)
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 */

__int64 __fastcall sub_18006F358(__int64 a1, _QWORD *a2, _QWORD **a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  _QWORD *v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h]

  v8 = a2;
  v4 = sub_18007DEA0(a1);
  v5 = v4;
  v9 = v4;
  *(_WORD *)(v4 + 24) = 0;
  v8 = *a3;
  try
  {
    sub_18006E768((_QWORD *)(v4 + 32), &v8);
    result = v5;
  }
  catch ( ... )
  {
    sub_18007E58C(a1, v9);
    throw;
  }
  return result;
}
