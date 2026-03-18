/*
 * XREFs of flagString @ 0x1C011F404
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0118E74 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     strncat @ 0x1C0074350 (strncat.c)
 */

PKDEFERRED_ROUTINE *__fastcall flagString(__int16 a1)
{
  LOBYTE(WPP_MAIN_CB.Dpc.DeferredRoutine) = 0;
  if ( (a1 & 1) != 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|NEW", 4uLL);
  if ( (a1 & 2) != 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|INRANGE", 8uLL);
  if ( (a1 & 4) != 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|INCONTACT", 0xAuLL);
  if ( (a1 & 0x2000) != 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|PRIMARY", 8uLL);
  if ( (a1 & 0x4000) != 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|CONFIDENCE", 0xBuLL);
  if ( a1 < 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|CANCELED", 9uLL);
  if ( (a1 & 0x10) != 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|FIRSTBUTTON", 0xCuLL);
  if ( (a1 & 0x20) != 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|SECONDBUTTON", 0xDuLL);
  if ( (a1 & 0x40) != 0 )
    strncat((char *)&WPP_MAIN_CB.Dpc.DeferredRoutine, "|THIRDBUTTON", 0xCuLL);
  return &WPP_MAIN_CB.Dpc.DeferredRoutine;
}
