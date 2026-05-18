/*
 * XREFs of sub_18006062C @ 0x18006062C
 * Callers:
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=4
void *sub_18006062C()
{
  if ( dword_18026AEB8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026AEB8);
    if ( dword_18026AEB8 == -1 )
    {
      memmove(&unk_180259590, "DepthOnly", 9uLL);
      byte_180259599 = 0;
      qword_1802595C8 = 15LL;
      byte_1802595B0 = 0;
      qword_1802595C0 = 11LL;
      memmove(&byte_1802595B0, "Diagnostics", 0xBuLL);
      byte_1802595BB = 0;
      qword_1802595E8 = 15LL;
      byte_1802595D0 = 0;
      qword_1802595E0 = 9LL;
      memmove(&byte_1802595D0, "AlphaMask", 9uLL);
      byte_1802595D9 = 0;
      qword_180259608 = 15LL;
      byte_1802595F0 = 0;
      qword_180259600 = 10LL;
      memmove(&byte_1802595F0, "AlphaBlend", 0xAuLL);
      byte_1802595FA = 0;
      qword_180259628 = 15LL;
      byte_180259610 = 0;
      qword_180259620 = 8LL;
      memmove(&byte_180259610, "Skinning", 8uLL);
      byte_180259618 = 0;
      atexit(sub_180134F50);
      Init_thread_footer(&dword_18026AEB8);
    }
  }
  return &unk_180259590;
}
