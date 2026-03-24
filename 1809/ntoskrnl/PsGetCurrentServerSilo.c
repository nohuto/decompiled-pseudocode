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
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     PsLookupProcessByProcessId @ 0x140646C20 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406487A0 (PsLookupThreadByThreadId.c)
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     ObpReferenceDeviceMap @ 0x140671AB0 (ObpReferenceDeviceMap.c)
 *     SepCreateLogonSessionTrack @ 0x1406AE1DC (SepCreateLogonSessionTrack.c)
 *     PsCaptureUserProcessParameters @ 0x1406CEDF0 (PsCaptureUserProcessParameters.c)
 *     PopTransitionCheckpoint @ 0x1406DE5E0 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x1406E162C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71D8 (SepDeleteLogonSessionTrack.c)
 *     IoRegisterPlugPlayNotification @ 0x140703140 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A554 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreateInternal @ 0x140715C68 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x140718D70 (NtGetNextProcess.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734674 (ExpRefreshTimeZoneInformation.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408A2960 (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FD60 (PsIsServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42EC (KeIsExecutingInArbitraryThreadContext.c)
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
