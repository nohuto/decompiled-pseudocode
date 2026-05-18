/*
 * XREFs of sub_1800D0D88 @ 0x1800D0D88
 * Callers:
 *     sub_1800355F0 @ 0x1800355F0 (sub_1800355F0.c)
 *     sub_180037040 @ 0x180037040 (sub_180037040.c)
 *     sub_180037470 @ 0x180037470 (sub_180037470.c)
 *     sub_180037620 @ 0x180037620 (sub_180037620.c)
 *     sub_180063EE8 @ 0x180063EE8 (sub_180063EE8.c)
 *     sub_180063FF8 @ 0x180063FF8 (sub_180063FF8.c)
 *     sub_18006403C @ 0x18006403C (sub_18006403C.c)
 *     sub_180064110 @ 0x180064110 (sub_180064110.c)
 *     sub_18006456C @ 0x18006456C (sub_18006456C.c)
 *     sub_18006D250 @ 0x18006D250 (sub_18006D250.c)
 *     sub_18006DBD0 @ 0x18006DBD0 (sub_18006DBD0.c)
 *     sub_180078CFC @ 0x180078CFC (sub_180078CFC.c)
 *     sub_18007DC74 @ 0x18007DC74 (sub_18007DC74.c)
 *     sub_1800966F0 @ 0x1800966F0 (sub_1800966F0.c)
 * Callees:
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

void *sub_1800D0D88()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx

  if ( dword_18026BAB0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026BAB0);
    if ( dword_18026BAB0 == -1 )
    {
      v2 = 75LL;
      v1 = &unk_18026B160;
      do
      {
        *(v1 - 1) = 0LL;
        *v1 = 0LL;
        v1[1] = 0LL;
        v1 += 4;
        --v2;
      }
      while ( v2 );
      Init_thread_footer(&dword_18026BAB0);
    }
  }
  return &unk_18026B150;
}
