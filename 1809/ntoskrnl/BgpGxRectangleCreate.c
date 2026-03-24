/*
 * XREFs of BgpGxRectangleCreate @ 0x14095021C
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x14016F3C8 (BgpGxConvertRectangleEx.c)
 *     BgpGxParseBitmap @ 0x14094E848 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14094E98C (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     BgpGxFindSubRectangle @ 0x14094F240 (BgpGxFindSubRectangle.c)
 *     BgpTxtCreateRegion @ 0x14095003C (BgpTxtCreateRegion.c)
 *     BgpGxBlendRectangle @ 0x140954208 (BgpGxBlendRectangle.c)
 *     BgpTxtDisplayString @ 0x1409545A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14016F4D8 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x14016F654 (GxpBitsToBytes.c)
 */

__int64 __fastcall BgpGxRectangleCreate(_DWORD *a1, int a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v7; // ebp
  __int64 Memory; // rax

  v4 = 0;
  v7 = GxpBitsToBytes(a1[1] * a2 * *a1);
  Memory = BgpFwAllocateMemory((unsigned int)(v7 + 72));
  if ( Memory )
  {
    *(_DWORD *)Memory = a1[1];
    *(_DWORD *)(Memory + 4) = *a1;
    *(_QWORD *)(Memory + 24) = Memory + 72;
    *(_DWORD *)(Memory + 8) = a2;
    *(_DWORD *)(Memory + 16) = 0;
    *(_DWORD *)(Memory + 12) = v7;
    *a3 = Memory;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
