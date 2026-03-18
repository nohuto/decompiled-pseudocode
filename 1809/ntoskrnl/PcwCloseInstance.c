/*
 * XREFs of PcwCloseInstance @ 0x140690130
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DBCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DBE4 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

void __stdcall PcwCloseInstance(PPCW_INSTANCE Instance)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(PPCW_INSTANCE))(ExtensionTable + 24))(Instance);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
