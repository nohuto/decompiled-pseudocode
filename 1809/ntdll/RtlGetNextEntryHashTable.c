/*
 * XREFs of RtlGetNextEntryHashTable @ 0x180086290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlGetNextEntryHashTable(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r9
  _QWORD *result; // rax
  _QWORD *v5; // rdx

  v3 = **(_QWORD ***)(a2 + 8);
  result = (_QWORD *)*v3;
  if ( *v3 == *(_QWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 28) )
  {
    v5 = (_QWORD *)*v3;
    do
    {
      result = v5;
      if ( v5[2] )
        break;
      v3 = v5;
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != *(_QWORD **)a2 );
  }
  if ( result[2] != *(_QWORD *)(a2 + 16) )
    return 0LL;
  *(_QWORD *)(a2 + 8) = v3;
  return result;
}
