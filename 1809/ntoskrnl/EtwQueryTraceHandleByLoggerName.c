/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x14071799C
 * Callers:
 *     IopErrorLogThread @ 0x14070C3B0 (IopErrorLogThread.c)
 *     WmiQueryTraceInformation @ 0x140716C30 (WmiQueryTraceInformation.c)
 *     WdipSemGetLoggerIds @ 0x14071791C (WdipSemGetLoggerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140659F84 (EtwpAcquireLoggerContextByLoggerName.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(const UNICODE_STRING *a1, _QWORD *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v5; // rax
  unsigned int v6; // ecx

  if ( !a1 || !a1->Buffer || !a1->Length || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = EtwpAcquireLoggerContextByLoggerName(CurrentServerSiloGlobals[108], a1, 0);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  v6 = *v5;
  if ( !*v5 )
    LOWORD(v6) = -1;
  *(_WORD *)a2 = v6;
  EtwpReleaseLoggerContext(v5, 0);
  return 0LL;
}
