/*
 * XREFs of GreSaveDC @ 0x1C0078AB8
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0063E88 (-UT_InvertCaret@@YAXXZ.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F2780 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C01E1E54 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C01E2234 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreSaveDCInternal @ 0x1C013BC08 (GreSaveDCInternal.c)
 */

__int64 __fastcall GreSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
