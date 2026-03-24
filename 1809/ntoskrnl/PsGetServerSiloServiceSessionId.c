/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1400067D0
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405828D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     PnpNotifyTargetDeviceChange @ 0x14058F46C (PnpNotifyTargetDeviceChange.c)
 *     SeQuerySessionIdTokenEx @ 0x140596110 (SeQuerySessionIdTokenEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140596B0C (CmpDoesProcessBelongToServiceSession.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     SeGetTokenDeviceMap @ 0x1406A2DBC (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38CC (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x1406CEE80 (PsIsServiceSession.c)
 *     IoRegisterPlugPlayNotification @ 0x140703140 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A554 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x140810DCC (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140887D14 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14089BCD0 (SepCopyClientTokenAndSetSilo.c)
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
