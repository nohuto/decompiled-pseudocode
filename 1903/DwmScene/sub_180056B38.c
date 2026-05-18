/*
 * XREFs of sub_180056B38 @ 0x180056B38
 * Callers:
 *     sub_180057768 @ 0x180057768 (sub_180057768.c)
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
void *sub_180056B38()
{
  if ( dword_180269970 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180269970);
    if ( dword_180269970 == -1 )
    {
      memmove(&unk_1802583D0, "ColorGrading", 0xCuLL);
      byte_1802583DC = 0;
      qword_180258408 = 15LL;
      byte_1802583F0 = 0;
      qword_180258400 = 13LL;
      memmove(&byte_1802583F0, "ContrastCurve", 0xDuLL);
      byte_1802583FD = 0;
      qword_180258428 = 15LL;
      byte_180258410 = 0;
      qword_180258420 = 11LL;
      memmove(&byte_180258410, "Diagnostics", 0xBuLL);
      byte_18025841B = 0;
      qword_180258448 = 15LL;
      byte_180258430 = 0;
      qword_180258440 = 13LL;
      memmove(&byte_180258430, "GammaEncoding", 0xDuLL);
      byte_18025843D = 0;
      qword_180258468 = 15LL;
      byte_180258450 = 0;
      qword_180258460 = 11LL;
      memmove(&byte_180258450, "ToneMapping", 0xBuLL);
      byte_18025845B = 0;
      qword_180258488 = 15LL;
      byte_180258470 = 0;
      qword_180258480 = 8LL;
      memmove(&byte_180258470, "Vignette", 8uLL);
      byte_180258478 = 0;
      atexit(sub_180134DC0);
      Init_thread_footer(&dword_180269970);
    }
  }
  return &unk_1802583D0;
}
