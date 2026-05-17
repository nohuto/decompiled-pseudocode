/*
 * XREFs of _handle_error @ 0x180097E14
 * Callers:
 *     atan @ 0x180091F80 (atan.c)
 *     atan2 @ 0x1800921E0 (atan2.c)
 *     ceil @ 0x180092B40 (ceil.c)
 *     cos @ 0x180092C60 (cos.c)
 *     sin @ 0x180093080 (sin.c)
 *     floor @ 0x180093660 (floor.c)
 *     log @ 0x180093890 (log.c)
 *     sqrt @ 0x180094590 (sqrt.c)
 *     tan @ 0x180095440 (tan.c)
 *     _pow_special @ 0x180098F60 (_pow_special.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _call_matherr @ 0x180097CE8 (_call_matherr.c)
 *     _exception_enabled @ 0x180097D54 (_exception_enabled.c)
 *     _raise_exc @ 0x1800988C0 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x180098B70 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x180098E60 (_ctrlfp.c)
 */

double __fastcall handle_error(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // r9
  __int64 v15; // xmm6_8
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  double v18[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v19[8]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp-41h]

  v17 = ctrlfp(8064LL, 65472LL);
  *(_QWORD *)&v18[1] = a3;
  *(_QWORD *)&v18[0] = a3;
  v13 = exception_enabled(a5, v17);
  v15 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      v19[6] = a8;
      v20 = v20 & 0xFFFFFFE0 | 3;
    }
    raise_exc((unsigned int)v19, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)v18);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, v14, v15, v18[0], v17);
  set_errno_from_matherr(a4);
  ctrlfp(v17, 65472LL);
  return v18[0];
}
