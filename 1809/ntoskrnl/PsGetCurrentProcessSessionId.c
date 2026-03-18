/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x140002AA0
 * Callers:
 *     PopCreatePowerRequestObject @ 0x140588F40 (PopCreatePowerRequestObject.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     EtwpWriteUserEvent @ 0x1406473F0 (EtwpWriteUserEvent.c)
 *     NtSetInformationObject @ 0x14068D6D0 (NtSetInformationObject.c)
 *     PnpNotifyDriverCallback @ 0x140703774 (PnpNotifyDriverCallback.c)
 *     PfpProcessScenarioPhase @ 0x14071BBDC (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x14071DE20 (IoGetContainerInformation.c)
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
  v1 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
