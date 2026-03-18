/*
 * XREFs of ZwFlushKey @ 0x1401C1D50
 * Callers:
 *     VfClearVerifierSettings @ 0x140327288 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x140338680 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x14059D110 (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x140729D54 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x140760A94 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
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
