/*
 * XREFs of ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0
 * Callers:
 *     GreSetBitmapOwner @ 0x1C00160B0 (GreSetBitmapOwner.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0018750 (--1SURFMEM@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001CAA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001DF00 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     EngUnlockSurface @ 0x1C00205A0 (EngUnlockSurface.c)
 *     EngLockSurface @ 0x1C0021270 (EngLockSurface.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0076B9C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall RECALTUNLOCKSTACKBACKTRACE(unsigned int a1)
{
  struct tagAltStackTraceEntry **v1; // rsi
  __int64 v2; // rdi
  struct tagAltStackTraceEntry *v3; // rax
  unsigned __int64 v4; // rbx

  v1 = gpentHmgrAltStacks;
  v2 = a1;
  v3 = gpentHmgrAltStacks[a1];
  if ( v3 || (v3 = (struct tagAltStackTraceEntry *)PALLOCMEM2(0x2008uLL, 0x62736647u, 1), (v1[v2] = v3) != 0LL) )
  {
    v4 = (unsigned __int64)(*((_DWORD *)v3 + 1) & 0xF) << 8;
    memset((char *)v3 + v4 + 4104, 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)((char *)v1[v2] + v4 + 4104), 0x20u, 0);
    ++*((_DWORD *)gpentHmgrAltStacks[v2] + 1);
  }
}
