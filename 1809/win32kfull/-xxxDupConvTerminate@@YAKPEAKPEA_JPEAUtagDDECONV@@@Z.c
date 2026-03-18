/*
 * XREFs of ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4100
 * Callers:
 *     <none>
 * Callees:
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F37A0 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F49EC (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxDupConvTerminate(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  if ( *a1 != 993 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  PopState(a3, (__int64)a2);
  return 1;
}
