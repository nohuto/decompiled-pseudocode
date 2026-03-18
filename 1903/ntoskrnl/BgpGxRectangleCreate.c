/*
 * XREFs of BgpGxRectangleCreate @ 0x14099026C
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x140178BD0 (BgpGxConvertRectangleEx.c)
 *     BgpGxParseBitmap @ 0x14098E85C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14098E9A4 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     BgpGxFindSubRectangle @ 0x14098F278 (BgpGxFindSubRectangle.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     BgpGxBlendRectangle @ 0x14099432C (BgpGxBlendRectangle.c)
 *     BgpTxtDisplayString @ 0x1409946C8 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x140178E54 (GxpBitsToBytes.c)
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
