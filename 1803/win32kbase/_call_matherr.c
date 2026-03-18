/*
 * XREFs of _call_matherr @ 0x1C0079408
 * Callers:
 *     _handle_error @ 0x1C0079534 (_handle_error.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_HasHidTable @ 0x1C005ECF0 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_HasHidTable.c)
 *     _set_errno_from_matherr @ 0x1C00799C4 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1C0079A14 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_HasHidTable() )
    set_errno_from_matherr(a1);
  return a6;
}
