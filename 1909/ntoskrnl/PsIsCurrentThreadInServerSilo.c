/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140002880
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x14012E9E0 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x140153F4C (IopLoadDriverImage.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1405BB2D0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlIsMultiSessionSku @ 0x1405BDB70 (RtlIsMultiSessionSku.c)
 *     NtPlugPlayControl @ 0x1405BDBA0 (NtPlugPlayControl.c)
 *     CmpOKToFollowLink @ 0x1405BDD90 (CmpOKToFollowLink.c)
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x14061C5A0 (ObpParseSymbolicLinkEx.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     RtlGetSuiteMask @ 0x1406D9D40 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x1406E97D0 (RtlGetNtSystemRoot.c)
 *     PsQueryCurrentApiSetSchema @ 0x140711350 (PsQueryCurrentApiSetSchema.c)
 *     EtwShutdown @ 0x140726708 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x1407272E0 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x140727960 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x14072AC90 (PoUserShutdownCancelled.c)
 *     ExpRaiseHardError @ 0x14072EE70 (ExpRaiseHardError.c)
 *     MiInitializeSessionGlobals @ 0x140742A00 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x140748330 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x140749C00 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x14077E770 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x14078AE00 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x14089D7B0 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x1408C4AA4 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1408C4C40 (PspCreateSilo.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1408CE0B0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140906D68 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140907B30 (EtwpSetSoftRestartInformation.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400EAEE0 (PsGetEffectiveServerSilo.c)
 */

char PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    EffectiveServerSilo = CurrentThread->Process[2].ActiveProcessors.Bitmap[3];
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(Blink);
  if ( EffectiveServerSilo )
    LOBYTE(EffectiveServerSilo) = 1;
  return EffectiveServerSilo;
}
