/*
 * XREFs of bFntCacheCreateHLink @ 0x1C0259D1C
 * Callers:
 *     SearchFntCacheNewLink @ 0x1C0259C80 (SearchFntCacheNewLink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFntCacheCreateHLink(unsigned int a1)
{
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v6; // rdx

  v1 = *(_QWORD *)qword_1C0326C58;
  v2 = a1 % 0x3D;
  v3 = *(unsigned int *)(*(_QWORD *)qword_1C0326C58 + 4 * v2 + 72);
  if ( (_DWORD)v3 == -1 )
  {
    *(_DWORD *)(v1 + 4 * v2 + 72) = *(_DWORD *)(qword_1C0326C58 + 8);
    return 1LL;
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 16);
    if ( (unsigned int)v3 <= v4 )
    {
      do
      {
        v6 = 28 * v3 + v1 + 316;
        v3 = *(unsigned int *)(v6 + 8);
        if ( (_DWORD)v3 == -1 )
        {
          *(_DWORD *)(v6 + 8) = *(_DWORD *)(qword_1C0326C58 + 8);
          return 1LL;
        }
      }
      while ( (unsigned int)v3 <= v4 );
      *(_DWORD *)(qword_1C0326C58 + 16) |= 2u;
    }
    return 0LL;
  }
}
