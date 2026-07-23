/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x1400B9B60
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x14012AD10 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x140135570 (IopLoadDriverImage.c)
 *     RtlSetSystemGlobalData @ 0x1401B5F44 (RtlSetSystemGlobalData.c)
 *     ExpWriteTimeZoneBias @ 0x140584B28 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140584B78 (ExpWriteTimeZoneBiasStartEnd.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     NtPlugPlayControl @ 0x140598E10 (NtPlugPlayControl.c)
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BCEB0 (ObpParseSymbolicLinkEx.c)
 *     SepCreateClientSecurityEx @ 0x140632EE0 (SepCreateClientSecurityEx.c)
 *     CmpOKToFollowLink @ 0x1406421F0 (CmpOKToFollowLink.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     RtlGetNtSystemRoot @ 0x1406835D0 (RtlGetNtSystemRoot.c)
 *     RtlIsMultiSessionSku @ 0x1406AEC60 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x1406B5A90 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406C23F0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CC6D8 (PsQueryCurrentApiSetSchema.c)
 *     EtwShutdown @ 0x1406DE4E0 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x1406DF170 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x1406DF780 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x1406E34E0 (PoUserShutdownCancelled.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     MiInitializeSessionGlobals @ 0x1407174A4 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x14071F028 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x140720160 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x140757180 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x140762BF0 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x140862760 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140888200 (PspCreateSilo.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140891730 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlCapabilityCheck @ 0x140894B20 (RtlCapabilityCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1408CB124 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CBCA4 (EtwpSetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1408CDC34 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1408CE570 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x1408D7BA0 (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FC70 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 */

bool PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    return 0;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    return *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count != 0LL;
  else
    return PsGetEffectiveServerSilo(Blink) != 0;
}
