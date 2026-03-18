/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01DB440
 * Callers:
 *     EditionLLMouseButtonHook @ 0x1C00B5980 (EditionLLMouseButtonHook.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C0133F60 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01DC7F0 (EditionLLMouseWheelHook.c)
 * Callees:
 *     <none>
 */

char __fastcall IsGpqForegroundAccessibleOnInputThread(char a1, const struct tagUIPI_INFO_INT *a2)
{
  if ( a1 && gpqForeground && !*((_DWORD *)a2 + 2) )
    return CheckAccess(a2, gpqForeground + 436LL);
  else
    return 1;
}
