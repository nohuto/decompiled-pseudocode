/*
 * XREFs of GreSelectPalette @ 0x1C007AAB0
 * Callers:
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C007AB1C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  HPALETTE v4; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v7[0] = 0LL;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
    v4 = SelectPaletteWorker((struct XDCOBJ *)v7, a2, a3);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v4;
}
