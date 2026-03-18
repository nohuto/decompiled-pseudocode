/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x1400B9C00
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x14012AC20 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x140135480 (IopLoadDriverImage.c)
 *     RtlSetSystemGlobalData @ 0x1401B5DBC (RtlSetSystemGlobalData.c)
 *     ExpWriteTimeZoneBias @ 0x140583B28 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140583B78 (ExpWriteTimeZoneBiasStartEnd.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     NtPlugPlayControl @ 0x140597E10 (NtPlugPlayControl.c)
 *     NtImpersonateAnonymousToken @ 0x1405B9710 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BBEB0 (ObpParseSymbolicLinkEx.c)
 *     SepCreateClientSecurityEx @ 0x140631EC0 (SepCreateClientSecurityEx.c)
 *     CmpOKToFollowLink @ 0x1406411F0 (CmpOKToFollowLink.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     RtlGetNtSystemRoot @ 0x140682430 (RtlGetNtSystemRoot.c)
 *     RtlIsMultiSessionSku @ 0x1406AD9E0 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x1406B4810 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406C1170 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CB458 (PsQueryCurrentApiSetSchema.c)
 *     EtwShutdown @ 0x1406DD260 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x1406DDEF0 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x1406DE500 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x1406E2260 (PoUserShutdownCancelled.c)
 *     IopUnloadDriver @ 0x1407089E8 (IopUnloadDriver.c)
 *     MiInitializeSessionGlobals @ 0x140716224 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x14071DDA8 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x14071EEE0 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x140755FB0 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x140761A20 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x140861520 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x140886E24 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140886FC0 (PspCreateSilo.c)
 *     PsShutdownSystem @ 0x14088AFC4 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1408904F0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1408C9E84 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CAA04 (EtwpSetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1408CC994 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1408CD2D0 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x1408D6900 (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FD30 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42CC (KeIsExecutingInArbitraryThreadContext.c)
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
