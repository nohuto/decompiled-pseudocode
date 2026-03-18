/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C0055128
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0054DA0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0123458 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
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
