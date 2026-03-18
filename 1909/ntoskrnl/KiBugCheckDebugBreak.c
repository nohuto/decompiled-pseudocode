/*
 * XREFs of KiBugCheckDebugBreak @ 0x1402A8B00
 * Callers:
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1402A8790 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1401903B0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1401CC4F0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiHeadlessDisplayString @ 0x1402A9248 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
