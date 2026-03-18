/*
 * XREFs of ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C001A4B8
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C001A294 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

RFONTOBJ *__fastcall RFONTOBJ::RFONTOBJ(RFONTOBJ *this, struct RFONT *a2)
{
  *(_QWORD *)this = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap(this, a2);
  return this;
}
