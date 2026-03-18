/*
 * XREFs of PsGetCurrentServerSilo @ 0x140006560
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE810 (ExpSystemErrorHandler2.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1405D0D60 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x1405D10D0 (ObpReferenceDeviceMap.c)
 *     SeCreateClientSecurityEx @ 0x1405DE5B0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     SepIsMinTCB @ 0x14061A0E0 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x14061A834 (SepIsNgenImage.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x14061D230 (SepReferenceLogonSession.c)
 *     ExpWnfGenerateStateName @ 0x140658450 (ExpWnfGenerateStateName.c)
 *     PnpNotifyTargetDeviceChange @ 0x140698EEC (PnpNotifyTargetDeviceChange.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     PsCaptureUserProcessParameters @ 0x1406B28E0 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x1406D159C (SepCreateLogonSessionTrack.c)
 *     IoRegisterPlugPlayNotification @ 0x140722750 (IoRegisterPlugPlayNotification.c)
 *     PopTransitionCheckpoint @ 0x140727ABC (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x140729E4C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14072BE34 (SepDeleteLogonSessionTrack.c)
 *     PnpNotifyDeviceClassChange @ 0x140737AD8 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x140743DC0 (NtGetNextProcess.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408E0B84 (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400EAF10 (PsIsServerSilo.c)
 */

unsigned __int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx

  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return CurrentThread->Process[2].ActiveProcessors.Bitmap[3];
  if ( Blink )
  {
    while ( !(unsigned __int8)PsIsServerSilo() )
      ;
  }
  return (unsigned __int64)Blink;
}
