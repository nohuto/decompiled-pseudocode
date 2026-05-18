/*
 * XREFs of sub_18005DE50 @ 0x18005DE50
 * Callers:
 *     sub_18005DED4 @ 0x18005DED4 (sub_18005DED4.c)
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

void *sub_18005DE50()
{
  if ( dword_180269D78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180269D78);
    if ( dword_180269D78 == -1 )
    {
      memmove(&unk_180258498, "<dummy>", 7uLL);
      byte_18025849F = 0;
      atexit(sub_180134E00);
      Init_thread_footer(&dword_180269D78);
    }
  }
  return &unk_180258498;
}
