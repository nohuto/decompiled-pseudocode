/*
 * XREFs of _call_matherr @ 0x1401998AC
 * Callers:
 *     _handle_error @ 0x1401999D8 (_handle_error.c)
 *     _handle_errorf @ 0x140199B08 (_handle_errorf.c)
 * Callees:
 *     PsGetHostSilo @ 0x140091C70 (PsGetHostSilo.c)
 *     _set_errno_from_matherr @ 0x14019A1E4 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x14019A234 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)PsGetHostSilo() )
    set_errno_from_matherr(a1);
  return a6;
}
