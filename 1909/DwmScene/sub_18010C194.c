/*
 * XREFs of sub_18010C194 @ 0x18010C194
 * Callers:
 *     sub_18010BF84 @ 0x18010BF84 (sub_18010BF84.c)
 * Callees:
 *     sub_18010C560 @ 0x18010C560 (sub_18010C560.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18010C194(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)sub_18010C560(v13, a2, a1) )
  {
    v6 = *a2;
    *a2 = *a1;
    *a1 = v6;
    v7 = a2[1];
    a2[1] = a1[1];
    a1[1] = v7;
  }
  result = sub_18010C560(v13, a3, a2);
  if ( (_BYTE)result )
  {
    v9 = *a3;
    *a3 = *a2;
    *a2 = v9;
    v10 = a3[1];
    a3[1] = a2[1];
    a2[1] = v10;
    result = sub_18010C560(v13, a2, a1);
    if ( (_BYTE)result )
    {
      v11 = *a2;
      *a2 = *a1;
      *a1 = v11;
      result = a1[1];
      v12 = a2[1];
      a2[1] = result;
      a1[1] = v12;
    }
  }
  return result;
}
