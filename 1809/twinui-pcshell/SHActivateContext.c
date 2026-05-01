/*
 * XREFs of SHActivateContext @ 0x1800E45B8
 * Callers:
 *     SHFusionLoadLibrary @ 0x1800E472C (SHFusionLoadLibrary.c)
 * Callees:
 *     SHFusionInitializeFromModuleID @ 0x1800E4624 (SHFusionInitializeFromModuleID.c)
 */

BOOL __fastcall SHActivateContext(ULONG_PTR *a1)
{
  HANDLE v2; // rcx

  *a1 = 0LL;
  v2 = g_hActCtx;
  if ( g_hActCtx != (HANDLE)-1LL )
    goto LABEL_7;
  if ( !hModule )
    return 1;
  if ( hModule == g_hActCtx )
    return 0;
  SHFusionInitializeFromModuleID();
  v2 = g_hActCtx;
  if ( g_hActCtx == (HANDLE)-1LL )
    return 1;
LABEL_7:
  *a1 = 0LL;
  return ActivateActCtx(v2, a1);
}
