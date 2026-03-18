/*
 * XREFs of EditionReportMouseBreakToAccessibility @ 0x1C010EA60
 * Callers:
 *     <none>
 * Callees:
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C0114088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01DB2C0 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall EditionReportMouseBreakToAccessibility(__int64 a1, __int16 a2, __int64 *a3, int a4)
{
  __int64 v5; // xmm0_8
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v5 = *a3;
  v8 = *((_DWORD *)a3 + 2);
  v7 = v5;
  if ( (HIDWORD(gMouseKeys) & 1) != 0 )
    gwMKButtonState &= ~a2;
  if ( (HIDWORD(gStickyKeys) & 1) == 0 )
    return 1LL;
  xxxUnlatchStickyKeys();
  if ( IsGpqForegroundAccessibleOnInputThread(a4 != 0, (const struct tagUIPI_INFO_INT *)&v7) )
    return 1LL;
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}
