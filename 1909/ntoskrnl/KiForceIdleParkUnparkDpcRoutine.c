/*
 * XREFs of KiForceIdleParkUnparkDpcRoutine @ 0x1402B2170
 * Callers:
 *     <none>
 * Callees:
 *     KiForceIdleParkUnparkProcessor @ 0x1402B2198 (KiForceIdleParkUnparkProcessor.c)
 */

void __fastcall KiForceIdleParkUnparkDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LOBYTE(DeferredContext) = (_BYTE)SystemArgument1;
  KiForceIdleParkUnparkProcessor(KeGetCurrentPrcb(), DeferredContext);
  _InterlockedDecrement(&KiForceIdlePendingDpcCount);
}
