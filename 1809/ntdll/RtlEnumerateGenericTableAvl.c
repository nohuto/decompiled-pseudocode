/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x18006DB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEnumerateGenericTableAvl(__int64 a1, char a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  _QWORD *j; // rdx
  _QWORD *v7; // rdx
  _QWORD *k; // rdx
  _QWORD *i; // rdx

  result = 0LL;
  if ( a2 )
    *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)(a1 + 44) )
  {
    v4 = *(_QWORD **)(a1 + 56);
    if ( !v4 )
    {
      v5 = *(_QWORD **)(a1 + 16);
      for ( i = (_QWORD *)v5[1]; i; i = (_QWORD *)i[1] )
        v5 = i;
      v7 = v5;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v7;
      return v5 + 4;
    }
    v5 = (_QWORD *)v4[2];
    if ( v5 )
    {
      for ( j = (_QWORD *)v5[1]; j; j = (_QWORD *)j[1] )
        v5 = j;
    }
    else
    {
      for ( k = (_QWORD *)*v4; (_QWORD *)k[2] == v4; k = (_QWORD *)*k )
        v4 = k;
      v5 = 0LL;
      if ( (_QWORD *)k[1] == v4 )
        v5 = k;
    }
    v7 = v5;
    if ( v5 )
      goto LABEL_10;
  }
  return result;
}
