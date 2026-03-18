/*
 * XREFs of ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C019FB78
 * Callers:
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A00DC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A01D0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z @ 0x1C019FE0C (-QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z.c)
 */

__int64 __fastcall CLegacyRotationMgr::GetDockedOrientationValue(CLegacyRotationMgr *this, unsigned int *a2)
{
  if ( !*((_DWORD *)this + 2) )
  {
    dword_1C03227D0 = 0;
    dword_1C03227D4 = dword_1C03227B8 != 0 ? 3 : 0;
    if ( (int)CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(this, &dword_1C03227D0, &dword_1C03227D4) >= 0 )
    {
      if ( dword_1C03227D4 > 3 )
        dword_1C03227D4 = dword_1C03227B8 != 0 ? 3 : 0;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return dword_1C03227D4;
}
