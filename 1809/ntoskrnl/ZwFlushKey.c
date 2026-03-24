/*
 * XREFs of ZwFlushKey @ 0x1401B9DF0
 * Callers:
 *     VfClearVerifierSettings @ 0x1403097A8 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x140319928 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x14056D750 (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x1406E25B4 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1407356B8 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1408A4780 (SepAuditFailed.c)
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
