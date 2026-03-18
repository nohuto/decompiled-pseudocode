/*
 * XREFs of SearchFntCacheNewLink @ 0x1C0259C80
 * Callers:
 *     ?PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z @ 0x1C00BC85C (-PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C0111388 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     EngFntCacheAlloc @ 0x1C025A020 (EngFntCacheAlloc.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C00BF210 (SearchFNTCacheHlink.c)
 *     bFntCacheCreateHLink @ 0x1C0259D1C (bFntCacheCreateHLink.c)
 */

__int64 __fastcall SearchFntCacheNewLink(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = qword_1C0326C58;
  v6 = 0LL;
  SearchFNTCacheHlink(a1, &v6, *(_QWORD *)qword_1C0326C58);
  v4 = v6;
  if ( !v6 )
  {
    if ( *(_DWORD *)(v1 + 8) < *(_DWORD *)(v3 + 16) && (unsigned int)bFntCacheCreateHLink(a1) )
    {
      v4 = 28LL * *(unsigned int *)(v1 + 8) + *(_QWORD *)v1 + 316LL;
      *(_DWORD *)v4 = a1;
      *(_DWORD *)(v4 + 4) = 0;
      *(_DWORD *)(v4 + 8) = -1;
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_DWORD *)(v4 + 24) = 0;
      *(_DWORD *)(v4 + 12) = 0;
      ++*(_DWORD *)(v1 + 8);
    }
    else
    {
      *(_DWORD *)(v1 + 16) |= 2u;
    }
  }
  return v4;
}
