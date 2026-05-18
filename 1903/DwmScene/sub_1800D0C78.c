/*
 * XREFs of sub_1800D0C78 @ 0x1800D0C78
 * Callers:
 *     sub_1800354E0 @ 0x1800354E0 (sub_1800354E0.c)
 *     sub_180036F30 @ 0x180036F30 (sub_180036F30.c)
 *     sub_180037360 @ 0x180037360 (sub_180037360.c)
 *     sub_180037510 @ 0x180037510 (sub_180037510.c)
 *     sub_180063DD8 @ 0x180063DD8 (sub_180063DD8.c)
 *     sub_180063EE8 @ 0x180063EE8 (sub_180063EE8.c)
 *     sub_180063F2C @ 0x180063F2C (sub_180063F2C.c)
 *     sub_180064000 @ 0x180064000 (sub_180064000.c)
 *     sub_18006445C @ 0x18006445C (sub_18006445C.c)
 *     sub_18006D140 @ 0x18006D140 (sub_18006D140.c)
 *     sub_18006DAC0 @ 0x18006DAC0 (sub_18006DAC0.c)
 *     sub_180078BEC @ 0x180078BEC (sub_180078BEC.c)
 *     sub_18007DB64 @ 0x18007DB64 (sub_18007DB64.c)
 *     sub_1800965E0 @ 0x1800965E0 (sub_1800965E0.c)
 * Callees:
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

void *sub_1800D0C78()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx

  if ( dword_18026AAB0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026AAB0);
    if ( dword_18026AAB0 == -1 )
    {
      v2 = 75LL;
      v1 = &unk_18026A160;
      do
      {
        *(v1 - 1) = 0LL;
        *v1 = 0LL;
        v1[1] = 0LL;
        v1 += 4;
        --v2;
      }
      while ( v2 );
      Init_thread_footer(&dword_18026AAB0);
    }
  }
  return &unk_18026A150;
}
