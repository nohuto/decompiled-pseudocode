/*
 * XREFs of PspNetRateControlDispatch @ 0x140889E14
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     PspQueryRateControlHistory @ 0x1405A7F5C (PspQueryRateControlHistory.c)
 *     PspSetNetRateControl @ 0x14088A6EC (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DBEC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC04 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 (__fastcall **ExtensionTable)(__int64); // rax
  unsigned int v3; // ebx

  ExtensionTable = (__int64 (__fastcall **)(__int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*ExtensionTable)(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
