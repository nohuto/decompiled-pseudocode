/*
 * XREFs of sub_1800DA7E4 @ 0x1800DA7E4
 * Callers:
 *     sub_1800DBF60 @ 0x1800DBF60 (sub_1800DBF60.c)
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_1800DB020 @ 0x1800DB020 (sub_1800DB020.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall sub_1800DA7E4(char **a1, __int64 a2, int a3)
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
        sub_18000FC30(a1, v7, i);
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
    sub_1800DB020(*a1, a1[1], (a1[1] - *a1) >> 4, sub_18010A830, 1, -2LL, a1);
  return a1;
}
