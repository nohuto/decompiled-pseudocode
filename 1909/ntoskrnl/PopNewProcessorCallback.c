/*
 * XREFs of PopNewProcessorCallback @ 0x1408A1A10
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x14075F0A8 (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmEnableWmiInterface @ 0x140780BB0 (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x14078CE3C (PopCheckSkipTick.c)
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
