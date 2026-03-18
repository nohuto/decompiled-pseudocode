/*
 * XREFs of PopDiagIdleWakeAccountingStop @ 0x1408AC8B8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC9D4 (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     PopDiagTraceIdleWakeSourceDiagnostic @ 0x1408AFB38 (PopDiagTraceIdleWakeSourceDiagnostic.c)
 */

void PopDiagIdleWakeAccountingStop()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rsi
  unsigned int i; // edi
  PVOID v3[60]; // [rsp+20h] [rbp-1F8h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( PopDiagGlobalIdleWakeAccounting )
  {
    v0 = 0;
    v1 = &unk_14043968C;
    do
    {
      if ( *v1 )
      {
        if ( (int)PopDiagIdleWakeSourceAccountingToDiagnostic((char *)&unk_140439688 + 504 * v0, v3) >= 0 )
          PopDiagTraceIdleWakeSourceDiagnostic(v3);
        if ( LOBYTE(v3[26]) )
        {
          ExFreePoolWithTag(v3[25], 0x67696450u);
          LOBYTE(v3[26]) = 0;
        }
        if ( LODWORD(v3[0]) == 5 )
        {
          for ( i = 0; i < LODWORD(v3[27]); ++i )
            ExFreePoolWithTag(v3[2 * i + 29], 0x67696450u);
        }
      }
      ++v0;
      v1 += 126;
    }
    while ( v0 < 0x45 );
    PopDiagGlobalIdleWakeAccounting = 0;
  }
}
