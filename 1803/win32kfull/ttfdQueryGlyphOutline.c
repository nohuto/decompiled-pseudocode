/*
 * XREFs of ttfdQueryGlyphOutline @ 0x1C021DE2C
 * Callers:
 *     ttfdQueryFontData @ 0x1C02205F4 (ttfdQueryFontData.c)
 * Callees:
 *     bGeneratePath @ 0x1C021D344 (bGeneratePath.c)
 *     lQueryTTOutline @ 0x1C021DB14 (lQueryTTOutline.c)
 *     lQueryTrueTypeOutlineVertical @ 0x1C021DD38 (lQueryTrueTypeOutlineVertical.c)
 */

__int64 __fastcall ttfdQueryGlyphOutline(__int64 a1, unsigned int a2, __int64 a3, PATHOBJ *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int TrueTypeOutlineVertical; // eax
  ULONG TTOutline; // eax
  unsigned int v13; // esi
  _WORD *v14; // rax
  int v15; // eax
  void *v16; // rcx
  unsigned int Path; // eax
  void *v18; // rcx
  unsigned int v19; // esi

  v4 = *(_DWORD *)(a1 + 308);
  v5 = 0;
  if ( !a4 )
  {
    if ( v4 )
      TrueTypeOutlineVertical = lQueryTrueTypeOutlineVertical(a1, 0, a2, 1, 0, a3, 0, 0LL);
    else
      TrueTypeOutlineVertical = lQueryTTOutline(a1, 0, a2, 1, 0, a3, 0, 0LL);
    LOBYTE(v5) = TrueTypeOutlineVertical == 0;
    return v5;
  }
  if ( v4 )
    TTOutline = lQueryTrueTypeOutlineVertical(a1, 0, a2, 0, 0, 0LL, 0, 0LL);
  else
    TTOutline = lQueryTTOutline(a1, 0, a2, 0, 0, 0LL, 0, 0LL);
  v13 = TTOutline;
  if ( TTOutline == -1 )
    return 0LL;
  if ( TTOutline )
  {
    v14 = EngAllocMem(0, TTOutline, 0x64667454u);
    *(_QWORD *)(a1 + 24) = v14;
    if ( !v14 )
      return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    v14 = 0LL;
  }
  if ( *(_DWORD *)(a1 + 308) )
    v15 = lQueryTrueTypeOutlineVertical(a1, 0, a2, 0, 0, a3, v13, v14);
  else
    v15 = lQueryTTOutline(a1, 0, a2, 0, 0, a3, v13, v14);
  if ( v15 == -1 )
  {
    v16 = *(void **)(a1 + 24);
    if ( v16 )
    {
      EngFreeMem(v16);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    return 0LL;
  }
  Path = bGeneratePath(a4, *(unsigned int **)(a1 + 24), v13, 0LL, 0LL, 0);
  v18 = *(void **)(a1 + 24);
  v19 = Path;
  if ( v18 )
  {
    EngFreeMem(v18);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return v19;
}
