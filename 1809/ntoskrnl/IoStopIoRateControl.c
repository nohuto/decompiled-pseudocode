/*
 * XREFs of IoStopIoRateControl @ 0x140001814
 * Callers:
 *     PspIoRateEntryActivate @ 0x140585150 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140585238 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14010DBE4 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
}
