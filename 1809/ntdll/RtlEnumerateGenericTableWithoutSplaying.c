/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x18006E1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplaying(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdx
  _QWORD *j; // rcx
  __int64 i; // rcx
  __int64 k; // rcx

  result = *a1;
  if ( *a1 )
  {
    v4 = (_QWORD *)*a2;
    if ( v4 )
    {
      result = v4[2];
      if ( result )
      {
        for ( i = *(_QWORD *)(result + 8); i; i = *(_QWORD *)(i + 8) )
          result = i;
      }
      else
      {
        for ( j = (_QWORD *)*v4; (_QWORD *)j[2] == v4; j = (_QWORD *)*j )
          v4 = j;
        result = 0LL;
        if ( (_QWORD *)j[1] == v4 )
          result = (__int64)j;
      }
      if ( !result )
        return (result + 40) & -(__int64)(result != 0);
    }
    else
    {
      for ( k = *(_QWORD *)(result + 8); k; k = *(_QWORD *)(k + 8) )
        result = k;
    }
    *a2 = result;
    return (result + 40) & -(__int64)(result != 0);
  }
  return result;
}
