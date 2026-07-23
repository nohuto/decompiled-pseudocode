/*
 * XREFs of PsGetCurrentServerSilo @ 0x14004D270
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     PnpNotifyTargetDeviceChange @ 0x14059046C (PnpNotifyTargetDeviceChange.c)
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x1405BE6F4 (SepReferenceLogonSession.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     SepIsNgenImage @ 0x14060B55C (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14060E770 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14060F3A8 (ExpWnfGenerateStateName.c)
 *     SeCreateClientSecurityEx @ 0x140632D00 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140632EE0 (SepCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x140649960 (PsLookupThreadByThreadId.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     ObpReferenceDeviceMap @ 0x140672C70 (ObpReferenceDeviceMap.c)
 *     SepCreateLogonSessionTrack @ 0x1406AF47C (SepCreateLogonSessionTrack.c)
 *     PsCaptureUserProcessParameters @ 0x1406D0090 (PsCaptureUserProcessParameters.c)
 *     PopTransitionCheckpoint @ 0x1406DF880 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x1406E28CC (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F8478 (SepDeleteLogonSessionTrack.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070B7F4 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x14071A010 (NtGetNextProcess.c)
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408A3BC0 (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FCA0 (PsIsServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v3; // rcx

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
  if ( !Blink )
    return 0LL;
  if ( (unsigned __int8)((__int64 (*)(void))PsIsServerSilo)() )
    return v3;
  while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v3 + 1072)) )
    ;
  return v3;
}
