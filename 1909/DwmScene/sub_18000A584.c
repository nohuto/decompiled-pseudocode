/*
 * XREFs of sub_18000A584 @ 0x18000A584
 * Callers:
 *     sub_18000C478 @ 0x18000C478 (sub_18000C478.c)
 *     sub_18000C5F0 @ 0x18000C5F0 (sub_18000C5F0.c)
 * Callees:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000A584(__int64 a1, __int64 a2, int *a3, _QWORD *a4)
{
  int *v5; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-48h] BYREF

  LOWORD(v15) = 0;
  v5 = &v15;
  if ( a3 )
    v5 = a3;
  if ( v5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *((_WORD *)v5 + v8) );
    v7 = 2 * v8 + 2;
  }
  else
  {
    v7 = 2LL;
  }
  v9 = v7 >> 1;
  v10 = (unsigned __int64)(a2 - a1) >> 1;
  v11 = v10;
  if ( v9 < v10 )
    v11 = v9;
  v12 = 2 * v11;
  sub_18000D458(a1, 2 * v10, v5, 2 * v11, v15);
  if ( a4 )
  {
    v13 = 0LL;
    if ( v11 > 1 )
      v13 = a1;
    *a4 = v13;
  }
  if ( v11 < v9 && v11 )
    *(_WORD *)(v12 + a1 - 2) = 0;
  return v12 + a1;
}
