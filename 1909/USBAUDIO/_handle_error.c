/*
 * XREFs of _handle_error @ 0x1C0011178
 * Callers:
 *     log10 @ 0x1C0010D08 (log10.c)
 *     _pow_special @ 0x1C00112B0 (_pow_special.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0010C20 (__security_check_cookie.c)
 *     _call_matherr @ 0x1C0011048 (_call_matherr.c)
 *     _exception_enabled @ 0x1C00110B8 (_exception_enabled.c)
 *     _raise_exc @ 0x1C0011480 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x1C0011740 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1C0011790 (_ctrlfp.c)
 *     memset @ 0x1C0012840 (memset.c)
 */

double __fastcall handle_error(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        double a8,
        int a9)
{
  BOOL v13; // eax
  double v14; // xmm6_8
  __int64 v16; // [rsp+48h] [rbp-A1h] BYREF
  double v17[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v18[14]; // [rsp+68h] [rbp-81h] BYREF

  v16 = ctrlfp(8064LL, 65472LL);
  *(_QWORD *)&v17[1] = a3;
  *(_QWORD *)&v17[0] = a3;
  v13 = exception_enabled(a5, v16);
  v14 = a8;
  if ( !v13 )
  {
    memset(v18, 0, sizeof(v18));
    if ( a9 == 2 )
    {
      *(double *)&v18[6] = a8;
      LODWORD(v18[8]) = 3;
    }
    raise_exc((unsigned int)v18, (unsigned int)&v16, a5, a2, (__int64)&a7, (__int64)v17);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v17[0], v16);
  set_errno_from_matherr(a4);
  ctrlfp(v16, 65472LL);
  return v17[0];
}
