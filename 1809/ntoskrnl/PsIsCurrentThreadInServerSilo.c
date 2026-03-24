/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x1400B9C20
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x14012AC40 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x1401354A0 (IopLoadDriverImage.c)
 *     RtlSetSystemGlobalData @ 0x1401B5DDC (RtlSetSystemGlobalData.c)
 *     ExpWriteTimeZoneBias @ 0x140583B28 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140583B78 (ExpWriteTimeZoneBiasStartEnd.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     NtPlugPlayControl @ 0x140597E10 (NtPlugPlayControl.c)
 *     NtImpersonateAnonymousToken @ 0x1405B9710 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BBEB0 (ObpParseSymbolicLinkEx.c)
 *     SepCreateClientSecurityEx @ 0x140631EC0 (SepCreateClientSecurityEx.c)
 *     CmpOKToFollowLink @ 0x1406411D0 (CmpOKToFollowLink.c)
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 *     RtlGetNtSystemRoot @ 0x140682410 (RtlGetNtSystemRoot.c)
 *     RtlIsMultiSessionSku @ 0x1406AD9C0 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x1406B47F0 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406C1150 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CB438 (PsQueryCurrentApiSetSchema.c)
 *     EtwShutdown @ 0x1406DD240 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x1406DDED0 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x1406DE4E0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x1406E2240 (PoUserShutdownCancelled.c)
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 *     MiInitializeSessionGlobals @ 0x140716204 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x14071DD88 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x14071EEC0 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x140726F24 (SepInitializationPhase1.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734674 (ExpRefreshTimeZoneInformation.c)
 *     MiCreatePagingFile @ 0x14074BFB8 (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x140755F90 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x140761A00 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x140861500 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x140886E04 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140886FA0 (PspCreateSilo.c)
 *     PsShutdownSystem @ 0x14088AFA4 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1408904D0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlCapabilityCheck @ 0x1408938C0 (RtlCapabilityCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9360 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1408C9E64 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CA9E4 (EtwpSetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1408CC974 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1408CD2B0 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x1408D68E0 (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FD30 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42EC (KeIsExecutingInArbitraryThreadContext.c)
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
