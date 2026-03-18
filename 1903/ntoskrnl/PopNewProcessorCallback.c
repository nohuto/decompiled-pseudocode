/*
 * XREFs of PopNewProcessorCallback @ 0x1408A21D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x14075A818 (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmEnableWmiInterface @ 0x14077E190 (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x14078A95C (PopCheckSkipTick.c)
 */

void __fastcall PopNewProcessorCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !PoSkipTickMode && PopSkipTickPolicy == 1 )
      PoSkipTickMode = !PopCheckSkipTick();
    PpmCheckInitProcessors(0);
    PpmEnableWmiInterface();
    PpmIdleRegisterDefaultStates();
  }
}
