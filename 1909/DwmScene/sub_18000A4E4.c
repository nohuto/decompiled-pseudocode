/*
 * XREFs of sub_18000A4E4 @ 0x18000A4E4
 * Callers:
 *     sub_18000C478 @ 0x18000C478 (sub_18000C478.c)
 *     sub_18000C5F0 @ 0x18000C5F0 (sub_18000C5F0.c)
 * Callees:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000A4E4(__int64 a1, __int64 a2, int *a3, _QWORD *a4)
{
  int *v4; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  int v13; // [rsp+20h] [rbp-38h] BYREF

  LOBYTE(v13) = 0;
  v4 = &v13;
  if ( a3 )
    v4 = a3;
  if ( v4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *((_BYTE *)v4 + v8) );
    v7 = v8 + 1;
  }
  else
  {
    v7 = 1LL;
  }
  v9 = a2 - a1;
  v10 = v9;
  if ( v7 < v9 )
    v10 = v7;
  sub_18000D458(a1, v9, v4, v10, v13);
  if ( a4 )
  {
    v11 = 0LL;
    if ( v10 > 1 )
      v11 = a1;
    *a4 = v11;
  }
  if ( v10 < v7 && v10 )
    *(_BYTE *)(a1 + v10 - 1) = 0;
  return a1 + v10;
}
