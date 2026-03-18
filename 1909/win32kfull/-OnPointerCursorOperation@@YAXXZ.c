/*
 * XREFs of ?OnPointerCursorOperation@@YAXXZ @ 0x1C00F10F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E4A0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E4CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00F1138 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DD890 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 */

void OnPointerCursorOperation(void)
{
  const struct tagPOINTERCURSORDATA *v0; // rbx
  LPCWSTR *v1; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v1, L"PointerCursorOperation", 0LL);
  HandlePointerCursorSideOp();
  v0 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64((volatile __int64 *)&Feedback::gppcdLatest, 0LL);
  if ( v0 )
  {
    RenderCursor(v0);
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&(&Feedback::gppcdFree)[(v0 - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                       / 0xCuLL],
      (signed __int64)v0,
      0LL);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v1);
}
