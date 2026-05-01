/*
 * XREFs of SHActivateContext @ 0x180106908
 * Callers:
 *     SHFusionLoadLibrary @ 0x180106A7C (SHFusionLoadLibrary.c)
 * Callees:
 *     SHFusionInitializeFromModuleID @ 0x180106974 (SHFusionInitializeFromModuleID.c)
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
