/*
 * XREFs of ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C0209C7C
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B4A0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B580 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall SpontaneousTerminate(unsigned int *a1, struct tagDDECONV *a2)
{
  struct tagDDECONV *v2; // rdi
  int v4; // eax
  __int64 result; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 50, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  v4 = *((_DWORD *)v2 + 20);
  if ( (v4 & 2) != 0 )
    return 1LL;
  *((_DWORD *)v2 + 20) = v4 | 2;
  result = 2LL;
  *a1 |= 0x80000000;
  return result;
}
