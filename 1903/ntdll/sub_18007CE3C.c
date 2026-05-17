/*
 * XREFs of sub_18007CE3C @ 0x18007CE3C
 * Callers:
 *     sub_18007E3F0 @ 0x18007E3F0 (sub_18007E3F0.c)
 * Callees:
 *     sub_18007CF10 @ 0x18007CF10 (sub_18007CF10.c)
 */

__int64 __fastcall sub_18007CE3C(_DWORD *a1)
{
  unsigned __int64 v2; // rdi
  _DWORD *v3; // rcx
  int v4; // r15d
  int v5; // r14d
  int v6; // ebp
  __int64 v7; // r9
  char *v8; // rsi

  if ( a1[2] < 0x10u )
    return 3221225485LL;
  if ( *a1 != 1 )
    return 3221225485LL;
  v2 = (unsigned __int64)a1 + (unsigned int)a1[2];
  if ( v2 < (unsigned __int64)a1 )
    return 3221225485LL;
  v3 = a1 + 4;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( (unsigned __int64)(v3 + 2) < v2 )
  {
    v7 = (unsigned int)v3[1];
    ++v6;
    if ( (unsigned int)v7 < 8 )
      return 3221225485LL;
    v8 = (char *)v3 + v7;
    if ( (_DWORD *)((char *)v3 + v7) < v3 || (unsigned __int64)v8 > v2 )
      return 3221225485LL;
    if ( *v3 == 1 )
    {
      if ( (unsigned int)++v5 > 1 )
        return 3221225661LL;
    }
    else
    {
      if ( *v3 != 2 )
      {
        if ( *v3 != 3 )
          return 3221225485LL;
        if ( (unsigned int)++v4 > 1 )
          return 3221226026LL;
      }
      if ( !(unsigned __int8)sub_18007CF10(v3 + 2, (unsigned int)(v7 - 8)) )
        return 3221225485LL;
    }
    v3 = (_DWORD *)((unsigned __int64)(v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( a1[1] != v6 )
    return 3221225485LL;
  return 0LL;
}
