/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x18006E1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplaying(PRTL_GENERIC_TABLE Table, PVOID *RestartKey)
{
  PVOID result; // rax
  PVOID v4; // rdx
  _QWORD *j; // rcx
  _QWORD *i; // rcx
  _QWORD *k; // rcx

  result = Table->TableRoot;
  if ( Table->TableRoot )
  {
    v4 = *RestartKey;
    if ( v4 )
    {
      result = (PVOID)*((_QWORD *)v4 + 2);
      if ( result )
      {
        for ( i = (_QWORD *)*((_QWORD *)result + 1); i; i = (_QWORD *)i[1] )
          result = i;
      }
      else
      {
        for ( j = *(_QWORD **)v4; (PVOID)j[2] == v4; j = (_QWORD *)*j )
          v4 = j;
        result = 0LL;
        if ( (PVOID)j[1] == v4 )
          result = j;
      }
      if ( !result )
        return (PVOID)(((unsigned __int64)result + 40) & -(__int64)(result != 0LL));
    }
    else
    {
      for ( k = (_QWORD *)*((_QWORD *)result + 1); k; k = (_QWORD *)k[1] )
        result = k;
    }
    *RestartKey = result;
    return (PVOID)(((unsigned __int64)result + 40) & -(__int64)(result != 0LL));
  }
  return result;
}
