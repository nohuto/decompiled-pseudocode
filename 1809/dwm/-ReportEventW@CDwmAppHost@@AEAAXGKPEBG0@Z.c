/*
 * XREFs of ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140001F30
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001E20 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x140004EC0 (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140004F68 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmAppHost::ReportEventW(CDwmAppHost *this, WORD a2, DWORD a3, const unsigned __int16 *a4)
{
  WORD wNumStrings; // si
  char *v7; // rbx
  LPCWSTR Strings; // [rsp+50h] [rbp-18h] BYREF

  wNumStrings = 0;
  if ( a4 )
  {
    Strings = a4;
    wNumStrings = 1;
  }
  if ( a3 != dword_14000B148 )
  {
    v7 = (char *)RegisterEventSourceW(0LL, L"Desktop Window Manager");
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      ReportEventW(v7, a2, 0, a3, 0LL, wNumStrings, 0, &Strings, 0LL);
      dword_14000B148 = a3;
      DeregisterEventSource(v7);
    }
  }
}
