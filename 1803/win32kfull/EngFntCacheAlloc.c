/*
 * XREFs of EngFntCacheAlloc @ 0x1C025A020
 * Callers:
 *     vFontFileCache @ 0x1C021CF54 (vFontFileCache.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02AF9E4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     EngCloseFNTCache @ 0x1C004F588 (EngCloseFNTCache.c)
 *     SearchFntCacheNewLink @ 0x1C0259C80 (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0x1C0259EF0 (bReAllocCacheFile.c)
 */

PVOID __stdcall EngFntCacheAlloc(ULONG ulFastCheckSum, ULONG cjSize)
{
  __int64 v2; // rbx
  char *v3; // rdi
  __int64 v7; // r14
  int v8; // eax
  _DWORD *v9; // rax

  v2 = qword_1C0326C58;
  v3 = 0LL;
  if ( !qword_1C0326C58 || !ulFastCheckSum )
    return 0LL;
  if ( (dword_1C0326C50 & 2) != 0 )
  {
    v7 = (cjSize + 7) & 0xFFFFFFF8;
    if ( (unsigned __int64)(v7 + *(_QWORD *)(qword_1C0326C58 + 32)) < *(_QWORD *)(qword_1C0326C58 + 40)
      || (v8 = bReAllocCacheFile(cjSize), v2 = qword_1C0326C58, v8) )
    {
      v9 = (_DWORD *)SearchFntCacheNewLink(ulFastCheckSum);
      if ( v9 )
      {
        if ( v9[4] || v9[5] )
        {
          v9[6] |= 1u;
        }
        else
        {
          v3 = *(char **)(v2 + 32);
          *(_QWORD *)(v2 + 32) = &v3[v7];
          v9[4] = cjSize;
          v9[5] = (_DWORD)v3 - *(_DWORD *)(v2 + 24);
        }
        *(_DWORD *)(v2 + 20) = 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(qword_1C0326C58 + 16) |= 2u;
  }
  if ( (*(_DWORD *)(v2 + 16) & 1) != 0 )
  {
    EngCloseFNTCache();
    return 0LL;
  }
  return v3;
}
