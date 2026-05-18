/*
 * XREFs of __security_check_cookie @ 0x1800050C0
 * Callers:
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x180001208 (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x1800012CC (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001420 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     DllMain @ 0x18000159C (DllMain.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001A78 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001DA4 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000246C (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002714 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B10 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180002F80 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x1800033C0 (DwmpTerminateSessionProcess.c)
 *     DwmpSignalSessionShutdown @ 0x180003F40 (DwmpSignalSessionShutdown.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004490 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180004D50 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 *     __GSHandlerCheckCommon @ 0x1800065A8 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
