/*
 * XREFs of sub_180056DF8 @ 0x180056DF8
 * Callers:
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

void *sub_180056DF8()
{
  if ( dword_18026A95C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026A95C);
    if ( dword_18026A95C == -1 )
    {
      memmove(&unk_1802593B0, "<dummy>", 7uLL);
      byte_1802593B7 = 0;
      atexit(sub_180134EF0);
      Init_thread_footer(&dword_18026A95C);
    }
  }
  return &unk_1802593B0;
}
