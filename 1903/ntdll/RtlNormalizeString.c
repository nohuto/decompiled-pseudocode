/*
 * XREFs of RtlNormalizeString @ 0x18007D7F0
 * Callers:
 *     sub_18002B144 @ 0x18002B144 (sub_18002B144.c)
 * Callees:
 *     sub_18007D870 @ 0x18007D870 (sub_18007D870.c)
 *     sub_18007DC6C @ 0x18007DC6C (sub_18007DC6C.c)
 */

__int64 __fastcall RtlNormalizeString(__int64 a1, __int64 a2, int a3, int a4, int *a5)
{
  int v7; // esi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 < -1 )
    return 3221225485LL;
  if ( !(_DWORD)a1 )
    return 3221225485LL;
  v8 = (__int64)a5;
  if ( *a5 < 0 )
    return 3221225485LL;
  result = sub_18007DC6C(a1, &v10);
  if ( (int)result >= 0 )
    return sub_18007D870(v10, v7, a3, a4, v8);
  return result;
}
