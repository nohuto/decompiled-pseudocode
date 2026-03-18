/*
 * XREFs of KiBugCheckDebugBreak @ 0x1402A8DA0
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1402A8A30 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x14018F4B0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1401CB970 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiHeadlessDisplayString @ 0x1402A94E8 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
