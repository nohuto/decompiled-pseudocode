/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x140002320
 * Callers:
 *     SeQuerySessionIdTokenEx @ 0x1405BBC90 (SeQuerySessionIdTokenEx.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1405BBD30 (CmpDoesProcessBelongToServiceSession.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     PnpNotifyTargetDeviceChange @ 0x14066C01C (PnpNotifyTargetDeviceChange.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     SeGetTokenDeviceMap @ 0x1406C43F8 (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x1406EE49C (PsIsServiceSession.c)
 *     IoRegisterPlugPlayNotification @ 0x1407208B0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x140735878 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1408C60F0 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408DA450 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1408DA5B0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1256);
  return *v1[138];
}
