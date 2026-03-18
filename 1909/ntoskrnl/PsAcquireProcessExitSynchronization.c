/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x1406C9DE0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection_0(a1 + 96) == 0 ? 0xC000010A : 0;
}
