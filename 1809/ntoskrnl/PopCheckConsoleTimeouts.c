/*
 * XREFs of PopCheckConsoleTimeouts @ 0x140879EF4
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140746FE0 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 *     PopGetDisplayTimeout @ 0x1406DD770 (PopGetDisplayTimeout.c)
 *     PopDiagTraceInputTimeout @ 0x1406DDB9C (PopDiagTraceInputTimeout.c)
 *     PopSetSessionUserStatus @ 0x1406DDC58 (PopSetSessionUserStatus.c)
 *     PopDiagTraceDisplayTimeout @ 0x1406DDE9C (PopDiagTraceDisplayTimeout.c)
 */

char PopCheckConsoleTimeouts()
{
  unsigned int v0; // esi
  unsigned int DisplayTimeout; // eax
  int v2; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // r8

  PopPrintEx(3u, "PopAdaptive: >>>>> Policy parameters change\n");
  v0 = PopConsoleContext;
  DisplayTimeout = PopGetDisplayTimeout(PopConsoleContext);
  v2 = PopInputTimeout;
  v3 = DisplayTimeout;
  if ( !BYTE5(qword_140410E24) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_140410E24 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_140410E24) = 0;
    }
    PopPrintEx(3u, "PopAdaptive: Input timeout: %u->%u\n", qword_140410E24, PopInputTimeout);
    LODWORD(qword_140410E24) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_140410E24), BYTE4(qword_140410E24));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_140410DF0) = 1;
    byte_140410E44 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_140410E2C) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_140410E3C - dword_140410E38) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_140410E2C )
  {
    PopPrintEx(3u, "PopAdaptive: Display timeout: %u->%u\n", qword_140410E2C, v3);
    LODWORD(qword_140410E2C) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_140410E2C), BYTE4(qword_140410E2C));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_140410DF0) = 1;
  }
  return DisplayTimeout;
}
