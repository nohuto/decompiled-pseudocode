/*
 * XREFs of sub_18011D078 @ 0x18011D078
 * Callers:
 *     sub_18011CDF0 @ 0x18011CDF0 (sub_18011CDF0.c)
 * Callees:
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 */

void *sub_18011D078()
{
  if ( dword_18026B310 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026B310);
    if ( dword_18026B310 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_18026B2C0, 2);
      atexit(sub_18013CEF0);
      Init_thread_footer(&dword_18026B310);
    }
  }
  return &unk_18026B2C0;
}
