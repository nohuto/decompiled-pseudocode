/*
 * XREFs of PcwUnregister @ 0x1408D7220
 * Callers:
 *     ExpPcwHostCallback @ 0x14075C620 (ExpPcwHostCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DBEC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC04 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

void __stdcall PcwUnregister(PPCW_REGISTRATION Registration)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(PPCW_REGISTRATION))(ExtensionTable + 8))(Registration);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
