/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x14085CA58
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x14085CA40 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401C2ED0 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x14078B0A8 (PipUpdateSetupInProgress.c)
 */

void __fastcall PipUpdateSetupInProgressNotify(HANDLE KeyHandle, char a2)
{
  HANDLE v4; // rbx

  if ( __PAIR16__(PnpSetupInProgress, PnpSetupOOBEInProgress) )
  {
    v4 = 0LL;
    if ( ZwNotifyChangeKey(KeyHandle, 0LL, PnpSetupWorkItem, (PVOID)1, &PnpSetupIoStatusBlock, 4u, 0, 0LL, 0, 1u) < 0 )
      v4 = KeyHandle;
    if ( a2 )
      PipUpdateSetupInProgress(KeyHandle);
    if ( v4 )
      ZwClose(v4);
  }
}
