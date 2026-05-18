/*
 * XREFs of sub_180056CE8 @ 0x180056CE8
 * Callers:
 *     sub_18005DAC8 @ 0x18005DAC8 (sub_18005DAC8.c)
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

void *sub_180056CE8()
{
  if ( dword_18026995C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026995C);
    if ( dword_18026995C == -1 )
    {
      memmove(&unk_1802583B0, "<dummy>", 7uLL);
      byte_1802583B7 = 0;
      atexit(sub_180134DE0);
      Init_thread_footer(&dword_18026995C);
    }
  }
  return &unk_1802583B0;
}
