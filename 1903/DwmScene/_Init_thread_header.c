/*
 * XREFs of _Init_thread_header @ 0x1801267D8
 * Callers:
 *     sub_18003D3F0 @ 0x18003D3F0 (sub_18003D3F0.c)
 *     sub_18003EA8C @ 0x18003EA8C (sub_18003EA8C.c)
 *     sub_1800455D0 @ 0x1800455D0 (sub_1800455D0.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_180056A34 @ 0x180056A34 (sub_180056A34.c)
 *     sub_180056B38 @ 0x180056B38 (sub_180056B38.c)
 *     sub_180056CE8 @ 0x180056CE8 (sub_180056CE8.c)
 *     sub_180056D6C @ 0x180056D6C (sub_180056D6C.c)
 *     sub_180057768 @ 0x180057768 (sub_180057768.c)
 *     sub_18005DAC8 @ 0x18005DAC8 (sub_18005DAC8.c)
 *     sub_18005DE50 @ 0x18005DE50 (sub_18005DE50.c)
 *     sub_18005DED4 @ 0x18005DED4 (sub_18005DED4.c)
 *     sub_18005E25C @ 0x18005E25C (sub_18005E25C.c)
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 *     sub_18006051C @ 0x18006051C (sub_18006051C.c)
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 *     sub_1800D0C78 @ 0x1800D0C78 (sub_1800D0C78.c)
 *     sub_1800D42A0 @ 0x1800D42A0 (sub_1800D42A0.c)
 *     sub_1800D8B48 @ 0x1800D8B48 (sub_1800D8B48.c)
 *     sub_1801103C0 @ 0x1801103C0 (sub_1801103C0.c)
 *     sub_18011CFF4 @ 0x18011CFF4 (sub_18011CFF4.c)
 *     sub_18011D078 @ 0x18011D078 (sub_18011D078.c)
 *     sub_18011D120 @ 0x18011D120 (sub_18011D120.c)
 *     sub_18011D1A4 @ 0x18011D1A4 (sub_18011D1A4.c)
 *     sub_18011D21C @ 0x18011D21C (sub_18011D21C.c)
 *     sub_180123DA8 @ 0x180123DA8 (sub_180123DA8.c)
 * Callees:
 *     _Init_thread_wait @ 0x180126890 (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait(0x64u);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 44LL) = dword_18025E270;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
