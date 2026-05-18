/*
 * XREFs of sub_18011D1A4 @ 0x18011D1A4
 * Callers:
 *     sub_18011D4A4 @ 0x18011D4A4 (sub_18011D4A4.c)
 * Callees:
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 */

void *sub_18011D1A4()
{
  if ( dword_18026B380 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026B380);
    if ( dword_18026B380 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_18026B330, 2);
      atexit(sub_18013CF00);
      Init_thread_footer(&dword_18026B380);
    }
  }
  return &unk_18026B330;
}
