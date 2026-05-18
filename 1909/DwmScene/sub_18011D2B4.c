/*
 * XREFs of sub_18011D2B4 @ 0x18011D2B4
 * Callers:
 *     sub_18011D5B4 @ 0x18011D5B4 (sub_18011D5B4.c)
 * Callees:
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 */

void *sub_18011D2B4()
{
  if ( dword_18026C380 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026C380);
    if ( dword_18026C380 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_18026C330, 2);
      atexit(sub_18013D010);
      Init_thread_footer(&dword_18026C380);
    }
  }
  return &unk_18026C330;
}
