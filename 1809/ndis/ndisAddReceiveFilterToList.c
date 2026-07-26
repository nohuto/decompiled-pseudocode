/*
 * XREFs of ndisAddReceiveFilterToList @ 0x1C003A9B0
 * Callers:
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddReceiveFilterToList(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 *v3; // rax
  unsigned int v5; // r11d
  unsigned int v6; // r10d
  __int64 *v7; // rcx
  __int64 v8; // rax

  v2 = 0;
  v3 = *(__int64 **)(a1 + 3520);
  if ( v3 == (__int64 *)(a1 + 3520) )
  {
LABEL_6:
    v7 = (__int64 *)v3[1];
    v8 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7 )
      __fastfail(3u);
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = v7;
    *(_QWORD *)(v8 + 8) = a2;
    *v7 = a2;
    ++*(_DWORD *)(a1 + 3548);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 48);
    while ( 1 )
    {
      v6 = *((_DWORD *)v3 + 12);
      if ( v6 == v5 )
        return (unsigned int)-1073741270;
      if ( v6 <= v5 )
      {
        v3 = (__int64 *)*v3;
        if ( v3 != (__int64 *)(a1 + 3520) )
          continue;
      }
      goto LABEL_6;
    }
  }
  return v2;
}
