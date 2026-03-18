/*
 * XREFs of ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140005848
 * Callers:
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001880 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001F30 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x14000579C (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 * Callees:
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140002060 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000593C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall CDwmAppHost::ReportEventWithDword(CDwmAppHost *this, WORD a2, DWORD a3)
{
  CDwmAppHost *v5; // rcx
  wchar_t Buffer[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]
  __int16 v9; // [rsp+44h] [rbp-14h]

  *(_QWORD *)Buffer = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  StringCchPrintfW(Buffer, 0xBuLL, L"0x%x");
  CDwmAppHost::ReportEventW(v5, a2, a3, Buffer);
}
