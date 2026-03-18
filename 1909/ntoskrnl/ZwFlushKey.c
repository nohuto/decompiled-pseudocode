/*
 * XREFs of ZwFlushKey @ 0x1401C28D0
 * Callers:
 *     VfClearVerifierSettings @ 0x140326CD8 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x1403380E0 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x14059C990 (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x14072B0C4 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x14076549C (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
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
