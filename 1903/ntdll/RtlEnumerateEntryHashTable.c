/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x180067350
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1800F21B0 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     sub_180067480 @ 0x180067480 (sub_180067480.c)
 */

_QWORD *__fastcall RtlEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r9
  __int64 v4; // r11
  _QWORD *v5; // rdx
  _QWORD **v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *result; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a2;
  v4 = a1;
  if ( v2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  while ( 1 )
  {
    if ( v2 == *(_DWORD *)(v3 + 32) )
    {
      v5 = *(_QWORD **)(v3 + 24);
      v6 = (_QWORD **)v3;
    }
    else
    {
      v5 = (_QWORD *)sub_180067480(v4, v2);
      v6 = (_QWORD **)v5;
    }
    v7 = *v6;
    if ( v7 != v5 )
      break;
LABEL_5:
    if ( ++v2 >= *(_DWORD *)(v4 + 8) )
      return 0LL;
  }
  while ( !v7[2] )
  {
    v7 = (_QWORD *)*v7;
    if ( v7 == v5 )
      goto LABEL_5;
  }
  v9 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 )
    goto LABEL_18;
  v10 = *(_QWORD **)(v3 + 8);
  if ( *v10 != v3 )
    goto LABEL_18;
  *v10 = v9;
  v9[1] = v10;
  v11 = *(_QWORD **)(v3 + 24);
  if ( v11 != v5 )
  {
    if ( (_QWORD *)*v11 == v11 )
      --*(_DWORD *)(v4 + 24);
    if ( (_QWORD *)*v5 == v5 )
      ++*(_DWORD *)(v4 + 24);
  }
  *(_DWORD *)(v3 + 32) = v2;
  *(_QWORD *)(v3 + 24) = v5;
  v12 = (_QWORD *)*v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 )
LABEL_18:
    __fastfail(3u);
  *(_QWORD *)v3 = v12;
  *(_QWORD *)(v3 + 8) = v7;
  v12[1] = v3;
  result = v7;
  *v7 = v3;
  return result;
}
