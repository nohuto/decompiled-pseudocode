/*
 * XREFs of IoFindDeviceThatFailedIrp @ 0x140172560
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140145B60 (PnpDeviceCompletionRoutine.c)
 *     PopDiagTraceIrpFinish @ 0x140172A68 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140172C20 (PopDiagTraceIrpFinishTelemetry.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1402A12B0 (PnpDiagnosticCompletionRoutine.c)
 *     PopSystemIrpCompletion @ 0x14059BCE0 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFindDeviceThatFailedIrp(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v1 = *(char *)(a1 + 66);
  v2 = 0;
  if ( *(int *)(a1 + 48) >= 0 )
    return 0LL;
  v3 = a1 + 72LL * (v1 - 1) + 208;
  if ( !v1 )
    return 0LL;
  while ( (*(_BYTE *)(v3 + 3) & 2) == 0 )
  {
    ++v2;
    v3 -= 72LL;
    if ( v2 >= v1 )
      return 0LL;
  }
  return *(_QWORD *)(v3 + 40);
}
