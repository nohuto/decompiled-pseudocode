/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1400067D0
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     PnpNotifyTargetDeviceChange @ 0x14059046C (PnpNotifyTargetDeviceChange.c)
 *     SeQuerySessionIdTokenEx @ 0x140597110 (SeQuerySessionIdTokenEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140597B0C (CmpDoesProcessBelongToServiceSession.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     SeGetTokenDeviceMap @ 0x1406A405C (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x1406D0120 (PsIsServiceSession.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070B7F4 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140888F74 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14089CF30 (SepCopyClientTokenAndSetSilo.c)
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
