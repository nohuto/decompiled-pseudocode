/*
 * XREFs of SearchFntCacheNewLink @ 0x1C0285AAC
 * Callers:
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C0285928 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     ?PutFntCacheDrvAndFileInfo@@YAXKPEAVPDEV@@KPEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C02859B8 (-PutFntCacheDrvAndFileInfo@@YAXKPEAVPDEV@@KPEAPEAU_FONTFILEVIEW@@K@Z.c)
 *     EngFntCacheAllocInternal @ 0x1C0285E7C (EngFntCacheAllocInternal.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C007CB48 (SearchFNTCacheHlink.c)
 *     bFntCacheCreateHLink @ 0x1C0285B44 (bFntCacheCreateHLink.c)
 */

__int64 __fastcall SearchFntCacheNewLink(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // r11
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = qword_1C032C338;
  v6 = 0LL;
  SearchFNTCacheHlink(a1, &v6, *(_QWORD *)qword_1C032C338);
  v4 = v6;
  if ( !v6 )
  {
    if ( *(_DWORD *)(v1 + 8) < *(_DWORD *)(v3 + 16) && (unsigned int)bFntCacheCreateHLink(a1) )
    {
      v4 = *(_QWORD *)v1 + 80 * (*(unsigned int *)(v1 + 8) + 4LL);
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
