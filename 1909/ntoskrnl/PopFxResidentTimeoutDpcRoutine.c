/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1401363E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140080B4C (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x1400DFEFC (PopFxArmResidentTimer.c)
 */

void __fastcall PopFxResidentTimeoutDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF) )
    PopFxArmResidentTimer(1);
}
