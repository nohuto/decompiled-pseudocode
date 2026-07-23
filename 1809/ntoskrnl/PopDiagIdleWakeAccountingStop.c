/*
 * XREFs of PopDiagIdleWakeAccountingStop @ 0x140870F28
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14087101C (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     PopDiagTraceIdleWakeSourceDiagnostic @ 0x140874074 (PopDiagTraceIdleWakeSourceDiagnostic.c)
 */

void PopDiagIdleWakeAccountingStop()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rsi
  unsigned int i; // edi
  _DWORD v3[10]; // [rsp+20h] [rbp-158h] BYREF
  PVOID P; // [rsp+48h] [rbp-130h]
  char v5; // [rsp+50h] [rbp-128h]
  unsigned int v6; // [rsp+58h] [rbp-120h]
  PVOID v7[31]; // [rsp+68h] [rbp-110h]

  if ( PopDiagGlobalIdleWakeAccounting )
  {
    v0 = 0;
    v1 = &unk_140411B2C;
    do
    {
      if ( *v1 )
      {
        if ( (int)PopDiagIdleWakeSourceAccountingToDiagnostic((char *)&unk_140411B28 + 336 * v0, v3) >= 0 )
          PopDiagTraceIdleWakeSourceDiagnostic(v3);
        if ( v5 )
        {
          ExFreePoolWithTag(P, 0x67696450u);
          v5 = 0;
        }
        if ( v3[0] == 5 )
        {
          for ( i = 0; i < v6; ++i )
            ExFreePoolWithTag(v7[2 * i], 0x67696450u);
        }
      }
      ++v0;
      v1 += 84;
    }
    while ( v0 < 0x45 );
    PopDiagGlobalIdleWakeAccounting = 0;
  }
}
