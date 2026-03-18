/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1401052D0
 * Callers:
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
 *     NtSetInformationObject @ 0x1406B3490 (NtSetInformationObject.c)
 *     PopCreatePowerRequestObject @ 0x1406B3EBC (PopCreatePowerRequestObject.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 *     PfpProcessScenarioPhase @ 0x140746420 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140748550 (IoGetContainerInformation.c)
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
