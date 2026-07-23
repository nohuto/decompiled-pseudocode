/*
 * XREFs of PopUpdateTimeouts @ 0x1406DDAA0
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x1406DD640 (PopConsoleSessionPassiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x1406DD6C0 (PopConsoleSessionActiveInput.c)
 *     PopActiveLockScreenPowerRequest @ 0x140879E60 (PopActiveLockScreenPowerRequest.c)
 *     PopSessionWinlogonNotification @ 0x14087A25C (PopSessionWinlogonNotification.c)
 * Callees:
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x1406DDB9C (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x1406DDE9C (PopDiagTraceDisplayTimeout.c)
 */

char __fastcall PopUpdateTimeouts(int a1, unsigned int *a2, unsigned int *a3)
{
  int v6; // r10d
  const char *v7; // r8
  const char *v8; // rcx
  const char *v9; // r9
  const char *v10; // rdx
  unsigned __int64 v11; // rax

  PopDiagTraceDisplayTimeout(*a2, *((unsigned __int8 *)a2 + 5), *((unsigned __int8 *)a2 + 4));
  if ( a3 )
    v6 = *a3;
  else
    v6 = 0;
  v7 = "Zeroed";
  if ( a3 )
  {
    v8 = "Zeroed";
    if ( !*((_BYTE *)a3 + 5) )
      v8 = (const char *)qword_14076CE10;
  }
  else
  {
    v8 = " NULL ";
  }
  v9 = "Computed";
  if ( a3 )
  {
    v10 = "Computed";
    if ( !*((_BYTE *)a3 + 4) )
      v10 = (const char *)qword_14076CE10;
  }
  else
  {
    v10 = "NULL";
  }
  if ( !*((_BYTE *)a2 + 5) )
    v7 = (const char *)qword_14076CE10;
  if ( !*((_BYTE *)a2 + 4) )
    v9 = (const char *)qword_14076CE10;
  PopPrintEx(
    3u,
    "PopAdaptive: Console session %u timeouts: %s%s Display:%u,: %s%sInput:%u\n",
    a1,
    v9,
    v7,
    *a2,
    v10,
    v8,
    v6);
  qword_140410E2C = *(_QWORD *)a2;
  v11 = HIDWORD(qword_140410E2C);
  if ( a3 )
  {
    qword_140410E24 = *(_QWORD *)a3;
    PopDiagTraceInputTimeout(*a3, *((unsigned __int8 *)a3 + 5), *((unsigned __int8 *)a3 + 4));
    LOBYTE(v11) = *((_BYTE *)a2 + 4);
  }
  if ( (_BYTE)v11 )
  {
    LOBYTE(v11) = MEMORY[0xFFFFF78000000320];
    dword_140410E3C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return v11;
}
