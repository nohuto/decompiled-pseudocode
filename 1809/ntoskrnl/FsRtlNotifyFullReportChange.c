/*
 * XREFs of FsRtlNotifyFullReportChange @ 0x140817D50
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 */

void __stdcall FsRtlNotifyFullReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext)
{
  FsRtlNotifyFilterReportChange(
    NotifySync,
    NotifyList,
    FullTargetName,
    TargetNameOffset,
    StreamName,
    NormalizedParentName,
    FilterMatch,
    Action,
    TargetContext,
    0LL);
}
