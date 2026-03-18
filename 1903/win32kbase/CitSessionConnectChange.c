/*
 * XREFs of CitSessionConnectChange @ 0x1C0088BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0087510 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0088054 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitSessionConnectChange(char a1, char a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  unsigned __int64 v5; // rdi
  struct _CIT_IMPACT_CONTEXT *v6; // rcx
  struct tagPROCESSINFO *v7; // r8
  char **v8; // rcx

  v2 = qword_1C0218810;
  if ( !qword_1C0218810 || ((*((_BYTE *)qword_1C0218810 + 112) & 2) != 0) == a1 )
    return;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
    ++*((_WORD *)qword_1C0218810 + 57);
  else
    CitpSetForegroundProcess(qword_1C0218810, v5, 0LL, 0LL, 0LL, 0LL);
  if ( !a2 )
  {
    if ( a1 )
    {
      if ( (unsigned int)dword_1C020FD0C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_6;
      v8 = &off_1C020FD00;
    }
    else
    {
      if ( (unsigned int)dword_1C020F124 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_6;
      v8 = &off_1C020F118;
    }
    EtwTelemetryCoverageReport(v8);
  }
LABEL_6:
  *((_BYTE *)v2 + 112) = (*((_BYTE *)v2 + 112) & 0xFB | (a2 == 0 ? 4 : 0)) ^ ((2 * a1) ^ (*((_BYTE *)v2 + 112) | (a2 == 0 ? 4 : 0))) & 2;
  if ( a1 && CitpAllowForegroundProcess(v2) )
  {
    v7 = (struct tagPROCESSINFO *)*((_QWORD *)v2 + 16);
    if ( v7 )
      CitpSetForegroundProcess(v6, v5, v7, 0LL, 0LL, 0LL);
  }
}
