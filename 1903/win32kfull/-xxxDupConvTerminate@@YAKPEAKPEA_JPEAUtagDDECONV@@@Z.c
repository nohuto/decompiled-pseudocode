/*
 * XREFs of ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C0209AAC (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B580 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxDupConvTerminate(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3, __int64 a4)
{
  __int64 *v5; // rsi

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 51, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  if ( *a1 != 993 )
    return xxxUnexpectedServerPost(a1, v5, a3);
  PopState(a3, (__int64)a2, (__int64)a3, a4);
  return 1;
}
