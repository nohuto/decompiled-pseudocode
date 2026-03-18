/*
 * XREFs of ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01D49AC
 * Callers:
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D515C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D5250 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z @ 0x1C01D4C78 (-QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z.c)
 */

__int64 __fastcall CLegacyRotationMgr::GetDockedOrientationValue(CLegacyRotationMgr *this, unsigned int *a2)
{
  if ( !*((_DWORD *)this + 2) )
  {
    dword_1C0325DA0 = 0;
    dword_1C0325DA4 = dword_1C0325D88 != 0 ? 3 : 0;
    if ( (int)CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(this, &dword_1C0325DA0, &dword_1C0325DA4) >= 0 )
    {
      if ( dword_1C0325DA4 > 3 )
        dword_1C0325DA4 = dword_1C0325D88 != 0 ? 3 : 0;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return dword_1C0325DA4;
}
