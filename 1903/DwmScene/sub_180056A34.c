/*
 * XREFs of sub_180056A34 @ 0x180056A34
 * Callers:
 *     sub_180056D6C @ 0x180056D6C (sub_180056D6C.c)
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=2
void *sub_180056A34()
{
  if ( dword_180269928 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180269928);
    if ( dword_180269928 == -1 )
    {
      memmove(&unk_180258350, "Blur8", 5uLL);
      byte_180258355 = 0;
      qword_180258388 = 15LL;
      byte_180258370 = 0;
      qword_180258380 = 6LL;
      memmove(&byte_180258370, "Blur16", 6uLL);
      byte_180258376 = 0;
      qword_1802583A8 = 15LL;
      byte_180258390 = 0;
      qword_1802583A0 = 6LL;
      memmove(&byte_180258390, "Blur32", 6uLL);
      byte_180258396 = 0;
      atexit(sub_180134DA0);
      Init_thread_footer(&dword_180269928);
    }
  }
  return &unk_180258350;
}
