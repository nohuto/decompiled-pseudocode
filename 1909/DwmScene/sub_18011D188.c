/*
 * XREFs of sub_18011D188 @ 0x18011D188
 * Callers:
 *     sub_18011CF00 @ 0x18011CF00 (sub_18011CF00.c)
 * Callees:
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 */

void *sub_18011D188()
{
  if ( dword_18026C310 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026C310);
    if ( dword_18026C310 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_18026C2C0, 2);
      atexit(sub_18013D000);
      Init_thread_footer(&dword_18026C310);
    }
  }
  return &unk_18026C2C0;
}
