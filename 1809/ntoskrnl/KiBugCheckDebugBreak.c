/*
 * XREFs of KiBugCheckDebugBreak @ 0x140292360
 * Callers:
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1402920E0 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x140186110 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1401C5350 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x140292A2C (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
