/*
 * XREFs of ObReferenceObjectExWithTag @ 0x140111EB0
 * Callers:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x140094924 (ObFastReplaceObject.c)
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     PspInsertThread @ 0x140621450 (PspInsertThread.c)
 *     ObInitializeFastReference @ 0x14064EA04 (ObInitializeFastReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
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
