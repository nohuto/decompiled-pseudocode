/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C001A3C4
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C001A294 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0120BE8 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x81) != 0 && (int)IsRFONTOBJ_dtorHelperSupported() >= 0 )
      RFONTOBJ_dtorHelperWrap(this);
    RFONTOBJ::vReleaseCache(this);
  }
}
