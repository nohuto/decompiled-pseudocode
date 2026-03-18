/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x14001E38C
 * Callers:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     ObDereferenceObjectEx @ 0x14001CD54 (ObDereferenceObjectEx.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     CcDeleteSharedCacheMap @ 0x14007C270 (CcDeleteSharedCacheMap.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     ExTimerRundown @ 0x14008AFD0 (ExTimerRundown.c)
 *     ObFastReplaceObject @ 0x140094924 (ObFastReplaceObject.c)
 *     IopDropIrp @ 0x1400E097C (IopDropIrp.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
