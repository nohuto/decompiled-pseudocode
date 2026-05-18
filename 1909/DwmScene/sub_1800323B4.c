/*
 * XREFs of sub_1800323B4 @ 0x1800323B4
 * Callers:
 *     sub_1800317BC @ 0x1800317BC (sub_1800317BC.c)
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800323B4(__int64 a1, __int64 *a2)
{
  const void *v4; // rbp
  unsigned __int64 v5; // rsi
  size_t v6; // rsi
  void *v7; // rdi
  const void *v8; // rdx
  const void *v9; // r9

  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 && std::streambuf::pptr(a1) )
  {
    v4 = **(const void ***)(a1 + 32);
    v5 = std::streambuf::pptr(a1);
    if ( v5 < *(_QWORD *)(a1 + 104) )
      v5 = *(_QWORD *)(a1 + 104);
    v6 = v5 - (_QWORD)v4;
    if ( v6 <= a2[3] )
    {
      v7 = a2;
      if ( (unsigned __int64)a2[3] >= 0x10 )
        v7 = (void *)*a2;
      v8 = v4;
LABEL_18:
      a2[2] = v6;
      memmove(v7, v8, v6);
      *((_BYTE *)v7 + v6) = 0;
      return a2;
    }
    v9 = v4;
LABEL_10:
    sub_18000E168(a2, v6, 0LL, v9);
    return a2;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::streambuf::gptr(a1) )
  {
    v9 = **(const void ***)(a1 + 24);
    v6 = **(_QWORD **)(a1 + 56) + **(int **)(a1 + 80) - (_QWORD)v9;
    if ( v6 <= a2[3] )
    {
      v7 = a2;
      if ( (unsigned __int64)a2[3] >= 0x10 )
        v7 = (void *)*a2;
      v8 = v9;
      goto LABEL_18;
    }
    goto LABEL_10;
  }
  return a2;
}
