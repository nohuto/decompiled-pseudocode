/*
 * XREFs of sub_18005DF60 @ 0x18005DF60
 * Callers:
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

void *sub_18005DF60()
{
  if ( dword_18026AD78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026AD78);
    if ( dword_18026AD78 == -1 )
    {
      memmove(&unk_180259498, "<dummy>", 7uLL);
      byte_18025949F = 0;
      atexit(sub_180134F10);
      Init_thread_footer(&dword_18026AD78);
    }
  }
  return &unk_180259498;
}
