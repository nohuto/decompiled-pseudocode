/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x180067410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067480 @ 0x180067480 (sub_180067480.c)
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a2;
  v4 = a1;
  if ( v2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  while ( 1 )
  {
    if ( v2 == *(_DWORD *)(v3 + 32) )
    {
      v6 = *(_QWORD **)v3;
      v5 = *(_QWORD *)(v3 + 24);
    }
    else
    {
      v5 = sub_180067480(v4, v2);
      v6 = (_QWORD *)v5;
    }
    v7 = (_QWORD *)*v6;
    if ( v7 != (_QWORD *)v5 )
      break;
LABEL_5:
    if ( ++v2 >= *(_DWORD *)(v4 + 8) )
      return 0LL;
  }
  while ( !v7[2] )
  {
    v7 = (_QWORD *)*v7;
    if ( v7 == (_QWORD *)v5 )
      goto LABEL_5;
  }
  *(_DWORD *)(v3 + 32) = v2;
  result = v7;
  *(_QWORD *)(v3 + 24) = v5;
  *(_QWORD *)v3 = v7;
  return result;
}
