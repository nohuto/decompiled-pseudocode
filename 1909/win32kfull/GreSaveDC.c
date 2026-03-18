/*
 * XREFs of GreSaveDC @ 0x1C00AD5CC
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C012B6F0 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021EE84 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F2E8 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreSaveDCInternal @ 0x1C0166D00 (GreSaveDCInternal.c)
 */

__int64 __fastcall GreSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
