/*
 * XREFs of sub_180056B44 @ 0x180056B44
 * Callers:
 *     sub_180056E7C @ 0x180056E7C (sub_180056E7C.c)
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=2
void *sub_180056B44()
{
  if ( dword_18026A928 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026A928);
    if ( dword_18026A928 == -1 )
    {
      memmove(&unk_180259350, "Blur8", 5uLL);
      byte_180259355 = 0;
      qword_180259388 = 15LL;
      byte_180259370 = 0;
      qword_180259380 = 6LL;
      memmove(&byte_180259370, "Blur16", 6uLL);
      byte_180259376 = 0;
      qword_1802593A8 = 15LL;
      byte_180259390 = 0;
      qword_1802593A0 = 6LL;
      memmove(&byte_180259390, "Blur32", 6uLL);
      byte_180259396 = 0;
      atexit(sub_180134EB0);
      Init_thread_footer(&dword_18026A928);
    }
  }
  return &unk_180259350;
}
