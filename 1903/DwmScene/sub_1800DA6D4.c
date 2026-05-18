/*
 * XREFs of sub_1800DA6D4 @ 0x1800DA6D4
 * Callers:
 *     sub_1800DBE50 @ 0x1800DBE50 (sub_1800DBE50.c)
 * Callees:
 *     sub_18000FBE0 @ 0x18000FBE0 (sub_18000FBE0.c)
 *     sub_1800DAF10 @ 0x1800DAF10 (sub_1800DAF10.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall sub_1800DA6D4(char **a1, __int64 a2, int a3)
{
  _QWORD *v5; // rsi
  _QWORD *i; // rdi
  char *v7; // rdx
  __int64 v8; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = *(_QWORD **)(a2 + 8);
  for ( i = *(_QWORD **)a2; i != v5; i += 2 )
  {
    if ( *(_BYTE *)(*i + 136LL) && !*(_DWORD *)(*i + 176LL) )
    {
      v7 = a1[1];
      if ( a1[2] == v7 )
      {
        sub_18000FBE0(a1, v7, i);
      }
      else
      {
        *(_QWORD *)v7 = 0LL;
        *((_QWORD *)v7 + 1) = 0LL;
        v8 = i[1];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        *(_QWORD *)v7 = *i;
        *((_QWORD *)v7 + 1) = i[1];
        a1[1] += 16;
      }
    }
  }
  if ( a3 == 1 )
    sub_1800DAF10(*a1, a1[1], (a1[1] - *a1) >> 4, sub_18010A720, 1, -2LL, a1);
  return a1;
}
