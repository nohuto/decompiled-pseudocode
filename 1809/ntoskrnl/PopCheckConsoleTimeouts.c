/*
 * XREFs of PopCheckConsoleTimeouts @ 0x140878C94
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140745DF0 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x14014242C (PopPrintEx.c)
 *     PopGetDisplayTimeout @ 0x1406DC4D0 (PopGetDisplayTimeout.c)
 *     PopDiagTraceInputTimeout @ 0x1406DC8FC (PopDiagTraceInputTimeout.c)
 *     PopSetSessionUserStatus @ 0x1406DC9B8 (PopSetSessionUserStatus.c)
 *     PopDiagTraceDisplayTimeout @ 0x1406DCBFC (PopDiagTraceDisplayTimeout.c)
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
  if ( !BYTE5(qword_14040FDA4) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_14040FDA4 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_14040FDA4) = 0;
    }
    PopPrintEx(3u, "PopAdaptive: Input timeout: %u->%u\n", qword_14040FDA4, PopInputTimeout);
    LODWORD(qword_14040FDA4) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_14040FDA4), BYTE4(qword_14040FDA4));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_14040FD90) = 1;
    byte_14040FDC4 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_14040FDAC) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_14040FDBC - dword_14040FDB8) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_14040FDAC )
  {
    PopPrintEx(3u, "PopAdaptive: Display timeout: %u->%u\n", qword_14040FDAC, v3);
    LODWORD(qword_14040FDAC) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_14040FDAC), BYTE4(qword_14040FDAC));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_14040FD90) = 1;
  }
  return DisplayTimeout;
}
