/*
 * XREFs of EtwShutdown @ 0x140726708
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C4D74 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpFlushCoverage @ 0x140726818 (EtwpFlushCoverage.c)
 *     EtwpTraceSystemShutdown @ 0x1408F54C4 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rbp
  char IsCurrentThreadInServerSilo; // al
  char v4; // si
  __int16 v5; // bx
  unsigned int *v6; // rax
  _QWORD v7[22]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    *(_DWORD *)(v2 + 4068) = 1;
  }
  if ( !v4 )
    EtwpFlushCoverage();
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 176;
  v5 = *(_WORD *)(v2 + 16);
  HIDWORD(v7[5]) = 0x20000;
  while ( --v5 >= 0 )
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(v2, v5, 0);
    if ( v6 )
    {
      if ( v4 )
        goto LABEL_19;
      if ( a1 )
      {
        if ( (v6[3] & 0x400000) == 0 )
          goto LABEL_8;
LABEL_19:
        if ( v5 )
          LOWORD(v7[1]) = v5;
        else
          LOWORD(v7[1]) = -1;
        *(_OWORD *)&v7[3] = *(_OWORD *)(v6 + 73);
        EtwpReleaseLoggerContext(v6, 0);
        if ( !a1 )
          ++EtwpStopTraceCount;
        EtwpStopTrace(v2, (__int64)v7, 1);
      }
      else
      {
        if ( (v6[3] & 0x400) == 0 )
          goto LABEL_19;
LABEL_8:
        EtwpReleaseLoggerContext(v6, 0);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
