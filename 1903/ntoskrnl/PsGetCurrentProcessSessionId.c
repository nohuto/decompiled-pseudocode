/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1400EC3B0
 * Callers:
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
 *     PopCreatePowerRequestObject @ 0x14069F1D4 (PopCreatePowerRequestObject.c)
 *     NtSetInformationObject @ 0x1406C7830 (NtSetInformationObject.c)
 *     PnpNotifyDriverCallback @ 0x140735C38 (PnpNotifyDriverCallback.c)
 *     PfpProcessScenarioPhase @ 0x140744520 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140746650 (IoGetContainerInformation.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessSessionId()
{
  _KPROCESS *Process; // rdx
  unsigned __int64 v1; // rcx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].ActiveProcessors.Bitmap[1];
  if ( !v1 || (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
