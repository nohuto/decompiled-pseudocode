/*
 * XREFs of ObReferenceObjectExWithTag @ 0x140111F40
 * Callers:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x140094864 (ObFastReplaceObject.c)
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     ObInitializeFastReference @ 0x14064FBA4 (ObInitializeFastReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax

  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v3 + v4);
  return v3 + v4;
}
