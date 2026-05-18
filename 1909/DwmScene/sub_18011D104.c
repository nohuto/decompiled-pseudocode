/*
 * XREFs of sub_18011D104 @ 0x18011D104
 * Callers:
 *     sub_18011CF00 @ 0x18011CF00 (sub_18011CF00.c)
 * Callees:
 *     sub_18002B7E4 @ 0x18002B7E4 (sub_18002B7E4.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18011D104()
{
  if ( dword_18026C328 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026C328);
    if ( dword_18026C328 == -1 )
    {
      qword_18026C318 = (__int64)sub_18002B7E4();
      atexit(sub_18013CF80);
      Init_thread_footer(&dword_18026C328);
    }
  }
  return &qword_18026C318;
}
