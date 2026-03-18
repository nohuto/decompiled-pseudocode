/*
 * XREFs of EditionReportMouseBreakToAccessibility @ 0x1C0108830
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01A5FC0 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall EditionReportMouseBreakToAccessibility(
        __int64 a1,
        __int16 a2,
        const struct tagUIPI_INFO_INT *a3,
        int a4)
{
  __int64 v7; // rcx

  if ( (HIDWORD(gMouseKeys) & 1) != 0 )
    gwMKButtonState &= ~a2;
  if ( (HIDWORD(gStickyKeys) & 1) == 0 )
    return 1LL;
  xxxUnlatchStickyKeys();
  if ( IsGpqForegroundAccessibleOnInputThread(a4 != 0, a3) )
    return 1LL;
  MSGLUA_GPQFOREGROUND(v7);
  return 0LL;
}
