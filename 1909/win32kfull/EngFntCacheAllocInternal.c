/*
 * XREFs of EngFntCacheAllocInternal @ 0x1C02857BC
 * Callers:
 *     EngFntCacheAlloc @ 0x1C02857A0 (EngFntCacheAlloc.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02D4664 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     EngCloseFNTCache @ 0x1C011D8E8 (EngCloseFNTCache.c)
 *     SearchFntCacheNewLink @ 0x1C02853EC (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0x1C0285670 (bReAllocCacheFile.c)
 */

__int64 __fastcall EngFntCacheAllocInternal(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v8; // r14
  int v9; // eax
  _DWORD *v10; // rax

  v3 = qword_1C032A328;
  v4 = 0LL;
  *a3 = 0;
  if ( !v3 || !a1 )
    return 0LL;
  if ( (dword_1C032A320 & 2) != 0 )
  {
    v8 = (a2 + 7) & 0xFFFFFFF8;
    if ( (unsigned __int64)(v8 + *(_QWORD *)(v3 + 32)) < *(_QWORD *)(v3 + 40)
      || (v9 = bReAllocCacheFile(a2), v3 = qword_1C032A328, v9) )
    {
      v10 = (_DWORD *)SearchFntCacheNewLink(a1);
      if ( v10 )
      {
        if ( v10[4] || v10[5] )
        {
          v10[6] |= 1u;
        }
        else
        {
          v4 = *(_QWORD *)(v3 + 32);
          *(_QWORD *)(v3 + 32) = v4 + v8;
          v10[4] = a2;
          v10[5] = v4 - *(_DWORD *)(v3 + 24);
        }
        *(_DWORD *)(v3 + 20) = 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(v3 + 16) |= 2u;
  }
  if ( (*(_DWORD *)(v3 + 16) & 1) != 0 )
  {
    EngCloseFNTCache();
    v4 = 0LL;
    *a3 = 1;
  }
  return v4;
}
