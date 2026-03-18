/*
 * XREFs of ZwFlushKey @ 0x1401B9DD0
 * Callers:
 *     VfClearVerifierSettings @ 0x1403096A8 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x140319828 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x14056D750 (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x1406E25D4 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1407356D8 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1408A47A0 (SepAuditFailed.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
