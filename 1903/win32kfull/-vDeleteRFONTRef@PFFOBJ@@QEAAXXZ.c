/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00752FC
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0074EF8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0104EE8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     GreGetKerningPairs @ 0x1C0144134 (GreGetKerningPairs.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C01655C4 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     vKillRFONTList @ 0x1C02709EC (vKillRFONTList.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A0B54 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A1414 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02A1D50 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C007B208 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C007B268 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFOBJ::vDeleteRFONTRef(PFFOBJ *this)
{
  int v2; // ebx
  __int64 v3; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  memset(v4, 0, 24);
  v5 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  --*(_DWORD *)(*(_QWORD *)this + 68LL);
  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) && !*(_QWORD *)(v3 + 144) && !*(_DWORD *)(v3 + 68) && !*(_DWORD *)(v3 + 64) )
  {
    PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v4);
    v2 = 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  if ( v2 )
    vCleanupFontFile((struct PFFCLEANUP *)v4);
}
