/*
 * XREFs of ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C0209CE8
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B4A0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C020970C (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 */

__int64 __fastcall Unadvise(struct tagDDECONV **a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)a1, 4, 14, 37, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  return AnticipatePost(
           a1[4],
           (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxUnadviseAck,
           0LL,
           0LL,
           0LL,
           0) != 0LL
       ? 2
       : 0;
}
