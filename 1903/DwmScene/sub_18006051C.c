/*
 * XREFs of sub_18006051C @ 0x18006051C
 * Callers:
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=4
void *sub_18006051C()
{
  if ( dword_180269EB8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180269EB8);
    if ( dword_180269EB8 == -1 )
    {
      memmove(&unk_180258590, "DepthOnly", 9uLL);
      byte_180258599 = 0;
      qword_1802585C8 = 15LL;
      byte_1802585B0 = 0;
      qword_1802585C0 = 11LL;
      memmove(&byte_1802585B0, "Diagnostics", 0xBuLL);
      byte_1802585BB = 0;
      qword_1802585E8 = 15LL;
      byte_1802585D0 = 0;
      qword_1802585E0 = 9LL;
      memmove(&byte_1802585D0, "AlphaMask", 9uLL);
      byte_1802585D9 = 0;
      qword_180258608 = 15LL;
      byte_1802585F0 = 0;
      qword_180258600 = 10LL;
      memmove(&byte_1802585F0, "AlphaBlend", 0xAuLL);
      byte_1802585FA = 0;
      qword_180258628 = 15LL;
      byte_180258610 = 0;
      qword_180258620 = 8LL;
      memmove(&byte_180258610, "Skinning", 8uLL);
      byte_180258618 = 0;
      atexit(sub_180134E40);
      Init_thread_footer(&dword_180269EB8);
    }
  }
  return &unk_180258590;
}
