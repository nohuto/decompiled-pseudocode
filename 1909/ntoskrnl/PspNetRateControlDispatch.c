/*
 * XREFs of PspNetRateControlDispatch @ 0x1408C7624
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspQueryRateControlHistory @ 0x140616FFC (PspQueryRateControlHistory.c)
 *     PspSetNetRateControl @ 0x1408C7F2C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400FD838 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400FD850 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
