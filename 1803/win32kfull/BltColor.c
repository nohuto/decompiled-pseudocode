/*
 * XREFs of BltColor @ 0x1C020708C
 * Callers:
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     xxxDrawState @ 0x1C02071C8 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0207838 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 */

__int64 __fastcall BltColor(
        HDC a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        char a10)
{
  __int64 v14; // rdi
  int v15; // r14d
  int v16; // r15d
  unsigned int v17; // r9d

  v14 = 0LL;
  v15 = GreSetTextColor(a1, 0);
  v16 = GreSetBkColor(a1, 0xFFFFFF);
  if ( a2 )
    v14 = GreSelectBrush(a1, a2);
  v17 = ((a10 & 1) != 0 ? 12060490 : 14812998) | 0x80000000;
  if ( (a10 & 2) == 0 )
    v17 = (a10 & 1) != 0 ? 12060490 : 14812998;
  if ( !a3 )
    a3 = *(HDC *)(gpDispInfo + 72LL);
  NtGdiBitBltInternal(a1, a4, a5, a6, a7, a3, a8, a9, v17, 0xFFFFFF, 0);
  if ( a2 )
    GreSelectBrush(a1, v14);
  GreSetTextColor(a1, v15);
  return GreSetBkColor(a1, v16);
}
