/*
 * XREFs of PopCheckConsoleTimeouts @ 0x1408B57E4
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140759C90 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x140126AC8 (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x140725DDC (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x140725E98 (PopDiagTraceDisplayTimeout.c)
 *     PopGetDisplayTimeout @ 0x140725F90 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x140725FC0 (PopSetSessionUserStatus.c)
 */

char PopCheckConsoleTimeouts()
{
  unsigned int v0; // esi
  unsigned int DisplayTimeout; // eax
  int v2; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // r8

  PopPrintEx(3u, (__int64)"PopAdaptive: >>>>> Policy parameters change\n");
  v0 = PopConsoleContext;
  DisplayTimeout = PopGetDisplayTimeout(PopConsoleContext);
  v2 = PopInputTimeout;
  v3 = DisplayTimeout;
  if ( !BYTE5(qword_140438784) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_140438784 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_140438784) = 0;
    }
    PopPrintEx(3u, (__int64)"PopAdaptive: Input timeout: %u->%u\n", qword_140438784, PopInputTimeout);
    LODWORD(qword_140438784) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_140438784), BYTE4(qword_140438784));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_140438770) = 1;
    byte_1404387A4 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_14043878C) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_14043879C - dword_140438798) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_14043878C )
  {
    PopPrintEx(3u, (__int64)"PopAdaptive: Display timeout: %u->%u\n", qword_14043878C, v3);
    LODWORD(qword_14043878C) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_14043878C), BYTE4(qword_14043878C));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_140438770) = 1;
  }
  return DisplayTimeout;
}
