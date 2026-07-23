/*
 * XREFs of ZwFlushKey @ 0x1401B9F50
 * Callers:
 *     VfClearVerifierSettings @ 0x140309998 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x140319B18 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x14056E750 (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x1406E3854 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1407368A8 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
