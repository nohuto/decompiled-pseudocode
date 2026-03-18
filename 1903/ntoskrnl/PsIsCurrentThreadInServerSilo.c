/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140002880
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x14012E090 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x1401538AC (IopLoadDriverImage.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1405BAEF0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlIsMultiSessionSku @ 0x1405BD790 (RtlIsMultiSessionSku.c)
 *     NtPlugPlayControl @ 0x1405BD7C0 (NtPlugPlayControl.c)
 *     CmpOKToFollowLink @ 0x1405BD9B0 (CmpOKToFollowLink.c)
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x14061AA90 (ObpParseSymbolicLinkEx.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     RtlGetSuiteMask @ 0x1406D9C50 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x1406E8730 (RtlGetNtSystemRoot.c)
 *     PsQueryCurrentApiSetSchema @ 0x14070F570 (PsQueryCurrentApiSetSchema.c)
 *     EtwShutdown @ 0x140724868 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x140725440 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x140725AC0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140729920 (PoUserShutdownCancelled.c)
 *     ExpRaiseHardError @ 0x14072CFA8 (ExpRaiseHardError.c)
 *     MiInitializeSessionGlobals @ 0x140740B00 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x140746430 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x140747D00 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x14077BEA0 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x1407889A0 (NtSetDefaultHardErrorPort.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1408CE7D0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F6580 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140907338 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140908100 (EtwpSetSoftRestartInformation.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400E5F40 (PsGetEffectiveServerSilo.c)
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
