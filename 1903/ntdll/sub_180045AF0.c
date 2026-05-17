/*
 * XREFs of sub_180045AF0 @ 0x180045AF0
 * Callers:
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_1800466AC @ 0x1800466AC (sub_1800466AC.c)
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 * Callees:
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 *__fastcall sub_180045AF0(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 *v5; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rbx
  __int64 v10; // rax
  int v11; // r12d
  int v12; // ecx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rcx
  __int64 *i; // rdi
  int v17; // ecx
  __int64 v19; // r8
  unsigned int *v20; // r9
  unsigned int v21; // edx
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // [rsp+38h] [rbp-28h]
  int v26; // [rsp+48h] [rbp-18h]
  int v27; // [rsp+58h] [rbp-8h]
  char v28; // [rsp+B0h] [rbp+50h]

  v28 = a3;
  v5 = *(__int64 **)(a2 + 32);
  v6 = a4 - *(_DWORD *)(a2 + 24);
  v7 = 0LL;
  v10 = v5[1];
  if ( v5 == (__int64 *)v10 )
    return v5;
  if ( a3 )
  {
    v25 = *(_DWORD *)(v10 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v25 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v10 - 16 + 8);
      if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
        sub_18010A694(3, a1, v10 - 16, 0, 0LL, 0LL);
    }
    v11 = a5;
    a3 = v28;
    v12 = a5 - (unsigned __int16)v25;
  }
  else
  {
    v11 = a5;
    v12 = a5 - *(_DWORD *)(v10 + 40);
  }
  if ( v12 > 0 )
    return v5;
  v13 = *v5;
  if ( a3 )
  {
    v26 = *(_DWORD *)(v13 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v26 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v13 - 16 + 8);
      if ( HIBYTE(v26) != ((unsigned __int8)v26 ^ (unsigned __int8)(BYTE1(v26) ^ BYTE2(v26))) )
        sub_18010A694(3, a1, v13 - 16, 0, 0LL, 0LL);
    }
    a3 = v28;
    v14 = v11 - (unsigned __int16)v26;
  }
  else
  {
    v14 = v11 - *(_DWORD *)(v13 + 40);
  }
  if ( v14 <= 0 )
    return (__int64 *)*v5;
  if ( *(_QWORD *)a2 || a4 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v19 = v6 >> 5;
    v20 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v19);
    v21 = *v20 & (-1 << (v6 & 0x1F));
    if ( v21 )
      goto LABEL_32;
    do
    {
      if ( (unsigned int)v19 > ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
        break;
      ++v20;
      LODWORD(v19) = v19 + 1;
      v21 = *v20;
    }
    while ( !*v20 );
    if ( v21 )
    {
LABEL_32:
      if ( (_WORD)v21 )
      {
        if ( (_BYTE)v21 )
          v22 = (unsigned __int8)a0123456789abcd[(unsigned __int8)v21 + 16];
        else
          v22 = (unsigned __int8)a0123456789abcd[BYTE1(v21) + 16] + 8;
      }
      else if ( (v21 & 0xFF0000) != 0 )
      {
        v22 = (unsigned __int8)a0123456789abcd[BYTE2(v21) + 16] + 16;
      }
      else
      {
        v22 = (unsigned __int8)a0123456789abcd[((unsigned __int64)v21 >> 24) + 16] + 24;
      }
      v23 = 32 * v19 + v22;
      v24 = 2 * v23;
      if ( !*(_DWORD *)(a2 + 12) )
        v24 = v23;
      return *(__int64 **)(*(_QWORD *)(a2 + 48) + 8LL * v24);
    }
  }
  else
  {
    v15 = 2 * v6;
    if ( !*(_DWORD *)(a2 + 12) )
      v15 = v6;
    for ( i = *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v15); v5 != i; i = (__int64 *)*i )
    {
      if ( a3 )
      {
        v27 = *((_DWORD *)i - 2);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v27 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)i - 2);
          if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
            sub_18010A694(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
        }
        a3 = v28;
        v17 = v11 - (unsigned __int16)v27;
      }
      else
      {
        v17 = v11 - *((_DWORD *)i + 10);
      }
      if ( v17 <= 0 )
        return i;
    }
  }
  return (__int64 *)v7;
}
