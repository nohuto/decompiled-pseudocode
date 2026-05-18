/*
 * XREFs of sub_180029D4C @ 0x180029D4C
 * Callers:
 *     sub_18002A518 @ 0x18002A518 (sub_18002A518.c)
 * Callees:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_18002BC14 @ 0x18002BC14 (sub_18002BC14.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18012752C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall sub_180029D4C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 **v3; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *j; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // dl
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 i; // rax
  __int64 v17; // rcx
  __int64 *v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+60h] [rbp+18h] BYREF

  v21 = a3;
  v3 = (__int64 **)(a1 + 1664);
  if ( sub_18002BC14(a1 + 1664, &v21) )
  {
    v7 = *v3;
    v8 = (*v3)[1];
    if ( *(_BYTE *)(v8 + 25) )
      goto LABEL_39;
    do
    {
      if ( *(_DWORD *)(v8 + 32) >= a3 )
      {
        v7 = (__int64 *)v8;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
    if ( v7 == *v3 || a3 < *((_DWORD *)v7 + 8) )
    {
LABEL_39:
      std::_Xout_of_range("invalid map<K, T> key");
      JUMPOUT(0x180029EFELL);
    }
    *a2 = v7[5];
  }
  else if ( *(_QWORD *)(a1 + 1672) >= 2uLL )
  {
    j = *v3;
    v10 = j;
    v11 = j[1];
    v12 = v11;
    v13 = *(_BYTE *)(v11 + 25);
    if ( !v13 )
    {
      do
      {
        if ( *(_DWORD *)(v12 + 32) >= a3 )
        {
          v10 = (__int64 *)v12;
          v12 = *(_QWORD *)v12;
        }
        else
        {
          v12 = *(_QWORD *)(v12 + 16);
        }
      }
      while ( !*(_BYTE *)(v12 + 25) );
    }
    v19 = v10;
    v14 = j;
    if ( !v13 )
    {
      do
      {
        if ( a3 >= *(_DWORD *)(v11 + 32) )
        {
          v11 = *(_QWORD *)(v11 + 16);
        }
        else
        {
          j = (__int64 *)v11;
          v11 = *(_QWORD *)v11;
        }
      }
      while ( !*(_BYTE *)(v11 + 25) );
    }
    v20 = j;
    if ( v10 != (__int64 *)*v14 )
    {
      sub_180020BC0(&v19);
      v10 = v19;
    }
    if ( j == v14 )
    {
      sub_180020BC0(&v20);
      j = v20;
    }
    if ( v10 == j )
    {
      if ( v10 == (__int64 *)*v14 )
      {
        v15 = j[2];
        if ( *(_BYTE *)(v15 + 25) )
        {
          for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
            j = (__int64 *)i;
          j = (__int64 *)i;
        }
        else
        {
          v17 = *(_QWORD *)v15;
          for ( j = (__int64 *)j[2]; !*(_BYTE *)(v17 + 25); v17 = *(_QWORD *)v17 )
            j = (__int64 *)v17;
        }
      }
      else
      {
        sub_180020BC0(&v19);
        v10 = v19;
      }
    }
    *a2 = v10[5]
        + (int)(a3 - *((_DWORD *)v10 + 8))
        * ((j[5] - v10[5])
         / (unsigned int)(*((_DWORD *)j + 8) - *((_DWORD *)v10 + 8)));
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
