/*
 * XREFs of sub_18011D120 @ 0x18011D120
 * Callers:
 *     sub_18011D4A4 @ 0x18011D4A4 (sub_18011D4A4.c)
 * Callees:
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18011D120()
{
  if ( dword_18026B398 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026B398);
    if ( dword_18026B398 == -1 )
    {
      qword_18026B388 = (__int64)sub_18006DE14();
      atexit(sub_18013CEB0);
      Init_thread_footer(&dword_18026B398);
    }
  }
  return &qword_18026B388;
}
