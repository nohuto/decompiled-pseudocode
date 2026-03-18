/*
 * XREFs of PsGetCurrentServerSilo @ 0x1400064D0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     PsLookupProcessByProcessId @ 0x1405D05D0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x1405D0BD0 (ObpReferenceDeviceMap.c)
 *     SeCreateClientSecurityEx @ 0x1405DDE10 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     SepIsMinTCB @ 0x1406185D0 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x140618D24 (SepIsNgenImage.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x14061B720 (SepReferenceLogonSession.c)
 *     ExpWnfGenerateStateName @ 0x140644900 (ExpWnfGenerateStateName.c)
 *     PnpNotifyTargetDeviceChange @ 0x14066C01C (PnpNotifyTargetDeviceChange.c)
 *     PsCaptureUserProcessParameters @ 0x1406B0860 (PsCaptureUserProcessParameters.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     SepCreateLogonSessionTrack @ 0x1406D223C (SepCreateLogonSessionTrack.c)
 *     IoRegisterPlugPlayNotification @ 0x1407208B0 (IoRegisterPlugPlayNotification.c)
 *     PopTransitionCheckpoint @ 0x140725C1C (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x140728ADC (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140729F9C (SepDeleteLogonSessionTrack.c)
 *     PnpNotifyDeviceClassChange @ 0x140735878 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x140741EC0 (NtGetNextProcess.c)
 *     SepMakeLogonSessionsSiblings @ 0x1408E1284 (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400E5F70 (PsIsServerSilo.c)
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
