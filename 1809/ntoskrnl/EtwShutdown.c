/*
 * XREFs of EtwShutdown @ 0x1406DD260
 * Callers:
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x1408870F4 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x140658FB0 (EtwpStopTrace.c)
 *     EtwpFlushCoverage @ 0x1406DD370 (EtwpFlushCoverage.c)
 *     EtwpTraceSystemShutdown @ 0x1408B9024 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rbp
  bool IsCurrentThreadInServerSilo; // al
  bool v4; // di
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
      if ( a1 )
      {
        if ( !v4 && (v6[3] & 0x400000) == 0 )
          goto LABEL_8;
LABEL_20:
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
        if ( v4 || (v6[3] & 0x400) == 0 )
          goto LABEL_20;
LABEL_8:
        EtwpReleaseLoggerContext(v6, 0);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
