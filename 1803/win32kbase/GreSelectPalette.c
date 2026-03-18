/*
 * XREFs of GreSelectPalette @ 0x1C003F790
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002D3D0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003F7FC (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
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
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v4;
}
