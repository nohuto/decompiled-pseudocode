/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x140009AC0
 * Callers:
 *     ObDereferenceObjectEx @ 0x140008694 (ObDereferenceObjectEx.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ObFastReplaceObject @ 0x14007FED4 (ObFastReplaceObject.c)
 *     ExTimerRundown @ 0x140081674 (ExTimerRundown.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     IopDropIrp @ 0x1400FEDA0 (IopDropIrp.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
