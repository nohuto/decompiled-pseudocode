/*
 * XREFs of MmIsWriteErrorFatal @ 0x1400BFA14
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     CcIsFatalWriteError @ 0x14012E974 (CcIsFatalWriteError.c)
 *     MiFlushControlArea @ 0x1402B9410 (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x14084D7A0 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1400BFA90 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  if ( a3 != -1073741740 && a1 && a2 || a3 == -1073741672 || a3 == -1073741566 || a3 == -1073741202 || a3 == -1073741810 )
    return 1LL;
  if ( a3 == -1073741667 )
  {
    if ( !a1 || !a2 )
      return 1LL;
  }
  else if ( a3 == -1073741662 && a1 )
  {
    return 1LL;
  }
  return !FsRtlIsTotalDeviceFailure(a3);
}
