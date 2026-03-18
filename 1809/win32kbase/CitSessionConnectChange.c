/*
 * XREFs of CitSessionConnectChange @ 0x1C0093510
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0037F14 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C003A358 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitSessionConnectChange(char a1, char a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  unsigned __int64 v5; // rdi
  char **v6; // rcx
  struct _CIT_IMPACT_CONTEXT *v7; // rcx
  struct tagPROCESSINFO *v8; // r8

  v2 = qword_1C01D0CF0;
  if ( !qword_1C01D0CF0 || ((*((_BYTE *)qword_1C01D0CF0 + 112) & 2) != 0) == a1 )
    return;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
    ++*((_WORD *)qword_1C01D0CF0 + 57);
  else
    CitpSetForegroundProcess(qword_1C01D0CF0, v5, 0LL, 0LL, 0LL, 0LL);
  if ( !a2 )
  {
    if ( a1 )
    {
      if ( (unsigned int)dword_1C01C7FFC >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_10;
      v6 = &off_1C01C7FF0;
      goto LABEL_9;
    }
    if ( (unsigned int)dword_1C01C76FC < MEMORY[0xFFFFF7800000037C] )
    {
      v6 = &off_1C01C76F0;
LABEL_9:
      EtwTelemetryCoverageReport(v6);
    }
  }
LABEL_10:
  *((_BYTE *)v2 + 112) = (*((_BYTE *)v2 + 112) & 0xFB | (a2 == 0 ? 4 : 0)) ^ ((2 * a1) ^ (*((_BYTE *)v2 + 112) | (a2 == 0 ? 4 : 0))) & 2;
  if ( a1 && CitpAllowForegroundProcess(v2) )
  {
    v8 = (struct tagPROCESSINFO *)*((_QWORD *)v2 + 16);
    if ( v8 )
      CitpSetForegroundProcess(v7, v5, v8, 0LL, 0LL, 0LL);
  }
}
