/*
 * XREFs of ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z @ 0x1C01C10A0
 * Callers:
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01C0DE0 (-GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(
        CLegacyRotationMgr *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 result; // rax
  char v6; // cl
  int v7; // [rsp+20h] [rbp-F8h] BYREF
  int v8; // [rsp+24h] [rbp-F4h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v11[12]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-CCh]
  int v13; // [rsp+80h] [rbp-98h]

  v7 = 1;
  result = DrvQueryDisplayConfig(3221225490LL, &v7, v10, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v13 == 0x80000000 || v13 == 11 || v13 == 13 )
    {
      result = DrvGetMonitorOrientation(v11, v12, &v9, &v8);
      if ( (int)result >= 0 )
      {
        v6 = v8 - v9;
        *a2 = v9;
        *a3 = v6 & 3;
        return 0LL;
      }
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
