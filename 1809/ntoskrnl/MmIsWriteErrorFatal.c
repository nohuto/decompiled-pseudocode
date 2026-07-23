/*
 * XREFs of MmIsWriteErrorFatal @ 0x140022E5C
 * Callers:
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     CcIsFatalWriteError @ 0x14012DA80 (CcIsFatalWriteError.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x140815820 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140022ED0 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  if ( a3 != -1073741740 && a1 && a2 || a3 == -1073741672 || a3 == -1073741566 || a3 == -1073741202 )
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
