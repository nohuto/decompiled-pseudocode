/*
 * XREFs of GreSaveDC @ 0x1C0056E34
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007AC3C (-UT_InvertCaret@@YAXXZ.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C920 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0207A40 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0207E64 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreSaveDCInternal @ 0x1C0161094 (GreSaveDCInternal.c)
 */

__int64 __fastcall GreSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
