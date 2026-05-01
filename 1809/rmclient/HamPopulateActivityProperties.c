/*
 * XREFs of HamPopulateActivityProperties @ 0x180004120
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

__int64 __fastcall HamPopulateActivityProperties(_WORD *a1, _WORD *a2, _DWORD *a3)
{
  __int64 v6; // rbx
  _WORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _WORD *i; // rax
  _WORD *v11; // rcx
  signed __int64 v12; // rdi
  __int64 v13; // rdx
  __int16 v14; // ax
  _WORD *v15; // rax
  signed __int64 v16; // rsi
  __int16 v17; // cx
  __int64 result; // rax

  if ( !a1 )
    return 3221225711LL;
  v6 = 64LL;
  v7 = a1;
  v8 = 64LL;
  while ( *v7 )
  {
    ++v7;
    if ( !--v8 )
      return 3221225711LL;
  }
  if ( !a2 )
    return 3221225712LL;
  v9 = 64LL;
  for ( i = a2; *i; ++i )
  {
    if ( !--v9 )
      return 3221225712LL;
  }
  memset_0(a3, 0, 0x188uLL);
  v11 = a3 + 3;
  *a3 = 8256;
  v12 = (char *)a1 - (char *)(a3 + 3);
  v13 = 64LL;
  while ( v13 != -2147483582 )
  {
    v14 = *(_WORD *)((char *)v11 + v12);
    if ( !v14 )
      break;
    *v11++ = v14;
    if ( !--v13 )
    {
      --v11;
      break;
    }
  }
  v15 = a3 + 35;
  *v11 = 0;
  v16 = (char *)a2 - (char *)(a3 + 35);
  while ( v6 != -2147483582 )
  {
    v17 = *(_WORD *)((char *)v15 + v16);
    if ( !v17 )
      break;
    *v15++ = v17;
    if ( !--v6 )
    {
      --v15;
      break;
    }
  }
  *v15 = 0;
  a3[67] = 5;
  a3[69] = -1;
  memset_0(a3 + 70, 0, 0x68uLL);
  result = 0LL;
  *((_QWORD *)a3 + 40) = 0LL;
  *((_QWORD *)a3 + 45) = 0LL;
  *((_QWORD *)a3 + 46) = 0LL;
  a3[92] = 1;
  *((_QWORD *)a3 + 44) = -1LL;
  *((_QWORD *)a3 + 43) = -1LL;
  *((_QWORD *)a3 + 42) = -1LL;
  *((_QWORD *)a3 + 41) = -1LL;
  a3[92] |= 0x20u;
  *((_QWORD *)a3 + 40) |= 0x80uLL;
  return result;
}
