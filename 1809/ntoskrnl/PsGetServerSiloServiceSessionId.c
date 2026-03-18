/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1400067D0
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405828D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     PnpNotifyTargetDeviceChange @ 0x14058F46C (PnpNotifyTargetDeviceChange.c)
 *     SeQuerySessionIdTokenEx @ 0x140596110 (SeQuerySessionIdTokenEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140596B0C (CmpDoesProcessBelongToServiceSession.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     SeGetTokenDeviceMap @ 0x1406A2DDC (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x1406CEEA0 (PsIsServiceSession.c)
 *     IoRegisterPlugPlayNotification @ 0x140703160 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A574 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x140810DEC (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140887D34 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14089BCF0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1256);
  return *v1[140];
}
