/*
 * XREFs of sub_180056C48 @ 0x180056C48
 * Callers:
 *     sub_180057878 @ 0x180057878 (sub_180057878.c)
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
void *sub_180056C48()
{
  if ( dword_18026A970 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026A970);
    if ( dword_18026A970 == -1 )
    {
      memmove(&unk_1802593D0, "ColorGrading", 0xCuLL);
      byte_1802593DC = 0;
      qword_180259408 = 15LL;
      byte_1802593F0 = 0;
      qword_180259400 = 13LL;
      memmove(&byte_1802593F0, "ContrastCurve", 0xDuLL);
      byte_1802593FD = 0;
      qword_180259428 = 15LL;
      byte_180259410 = 0;
      qword_180259420 = 11LL;
      memmove(&byte_180259410, "Diagnostics", 0xBuLL);
      byte_18025941B = 0;
      qword_180259448 = 15LL;
      byte_180259430 = 0;
      qword_180259440 = 13LL;
      memmove(&byte_180259430, "GammaEncoding", 0xDuLL);
      byte_18025943D = 0;
      qword_180259468 = 15LL;
      byte_180259450 = 0;
      qword_180259460 = 11LL;
      memmove(&byte_180259450, "ToneMapping", 0xBuLL);
      byte_18025945B = 0;
      qword_180259488 = 15LL;
      byte_180259470 = 0;
      qword_180259480 = 8LL;
      memmove(&byte_180259470, "Vignette", 8uLL);
      byte_180259478 = 0;
      atexit(sub_180134ED0);
      Init_thread_footer(&dword_18026A970);
    }
  }
  return &unk_1802593D0;
}
