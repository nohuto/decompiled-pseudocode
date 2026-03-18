/*
 * XREFs of KiBugCheckDebugBreak @ 0x140292260
 * Callers:
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140291FE0 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1401860F0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1401C5330 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x14029292C (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
