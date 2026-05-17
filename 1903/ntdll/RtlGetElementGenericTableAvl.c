/*
 * XREFs of RtlGetElementGenericTableAvl @ 0x1800F3EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800644F8 @ 0x1800644F8 (sub_1800644F8.c)
 *     sub_1800670D0 @ 0x1800670D0 (sub_1800670D0.c)
 */

_QWORD *__fastcall RtlGetElementGenericTableAvl(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 v4; // r10
  unsigned int v5; // edx
  _QWORD *v6; // rcx
  _QWORD *i; // rax
  int v9; // r8d
  _QWORD *k; // rax
  int v11; // r11d
  unsigned int v12; // edx
  int v13; // r11d
  _QWORD *j; // rax
  int v15; // r8d

  v2 = *(_DWORD *)(a1 + 40);
  v3 = a2;
  v4 = a1;
  if ( a2 == -1 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 44);
  if ( v3 + 1 > v5 )
    return 0LL;
  v6 = *(_QWORD **)(a1 + 32);
  if ( !v6 )
  {
    v6 = *(_QWORD **)(v4 + 16);
    for ( i = (_QWORD *)v6[1]; i; i = (_QWORD *)i[1] )
      v6 = i;
    v2 = 0;
    *(_QWORD *)(v4 + 32) = v6;
    *(_DWORD *)(v4 + 40) = 0;
  }
  if ( v3 != v2 )
  {
    if ( v3 >= v2 )
    {
      v12 = v5 - v3;
      if ( v3 - v2 > v12 )
      {
        v6 = *(_QWORD **)(v4 + 16);
        for ( j = (_QWORD *)v6[2]; j; j = (_QWORD *)j[2] )
          v6 = j;
        if ( v12 != 1 )
        {
          do
            v6 = sub_1800644F8(v6);
          while ( v15 != 1 );
        }
      }
      else if ( v3 != v2 )
      {
        do
          v6 = sub_1800670D0(v6);
        while ( v13 != 1 );
      }
    }
    else if ( v3 < v2 >> 1 )
    {
      v6 = *(_QWORD **)(v4 + 16);
      for ( k = (_QWORD *)v6[1]; k; k = (_QWORD *)k[1] )
        v6 = k;
      if ( v3 )
      {
        do
          v6 = sub_1800670D0(v6);
        while ( v11 != 1 );
      }
    }
    else if ( v2 != v3 )
    {
      do
        v6 = sub_1800644F8(v6);
      while ( v9 != 1 );
    }
    *(_QWORD *)(v4 + 32) = v6;
    *(_DWORD *)(v4 + 40) = v3;
  }
  return v6 + 4;
}
