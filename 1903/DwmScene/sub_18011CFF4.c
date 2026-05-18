/*
 * XREFs of sub_18011CFF4 @ 0x18011CFF4
 * Callers:
 *     sub_18011CDF0 @ 0x18011CDF0 (sub_18011CDF0.c)
 * Callees:
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18011CFF4()
{
  if ( dword_18026B328 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026B328);
    if ( dword_18026B328 == -1 )
    {
      qword_18026B318 = (__int64)sub_18002B6D4();
      atexit(sub_18013CE70);
      Init_thread_footer(&dword_18026B328);
    }
  }
  return &qword_18026B318;
}
