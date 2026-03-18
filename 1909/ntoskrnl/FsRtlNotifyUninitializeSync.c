/*
 * XREFs of FsRtlNotifyUninitializeSync @ 0x1406ED630
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C14D0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C1D20 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyUninitializeSync(PNOTIFY_SYNC *NotifySync)
{
  PNOTIFY_SYNC v2; // rcx

  v2 = *NotifySync;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *NotifySync = 0LL;
  }
}
