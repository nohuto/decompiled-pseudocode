/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x140009A30
 * Callers:
 *     ObDereferenceObjectEx @ 0x140008604 (ObDereferenceObjectEx.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     ObFastReplaceObject @ 0x14007FAD4 (ObFastReplaceObject.c)
 *     ExTimerRundown @ 0x140081274 (ExTimerRundown.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     IopDropIrp @ 0x1400FCC10 (IopDropIrp.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
