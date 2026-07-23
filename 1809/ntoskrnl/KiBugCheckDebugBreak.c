/*
 * XREFs of KiBugCheckDebugBreak @ 0x140292550
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1402922D0 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x140186250 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1401C54B0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x140292C1C (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
