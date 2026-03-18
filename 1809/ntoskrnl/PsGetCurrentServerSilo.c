/*
 * XREFs of PsGetCurrentServerSilo @ 0x14004D270
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     PnpNotifyTargetDeviceChange @ 0x14058F46C (PnpNotifyTargetDeviceChange.c)
 *     NtImpersonateAnonymousToken @ 0x1405B9710 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x1405BD6F4 (SepReferenceLogonSession.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     SepIsNgenImage @ 0x14060A55C (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14060D770 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14060E3A8 (ExpWnfGenerateStateName.c)
 *     SeCreateClientSecurityEx @ 0x140631CE0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140631EC0 (SepCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     PsLookupProcessByProcessId @ 0x140646C40 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406487C0 (PsLookupThreadByThreadId.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     ObpReferenceDeviceMap @ 0x140671AD0 (ObpReferenceDeviceMap.c)
 *     SepCreateLogonSessionTrack @ 0x1406AE1FC (SepCreateLogonSessionTrack.c)
 *     PsCaptureUserProcessParameters @ 0x1406CEE10 (PsCaptureUserProcessParameters.c)
 *     PopTransitionCheckpoint @ 0x1406DE600 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x1406E164C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71F8 (SepDeleteLogonSessionTrack.c)
 *     IoRegisterPlugPlayNotification @ 0x140703160 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A574 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreateInternal @ 0x140715C88 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x140718D90 (NtGetNextProcess.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408A2980 (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FD60 (PsIsServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42CC (KeIsExecutingInArbitraryThreadContext.c)
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
