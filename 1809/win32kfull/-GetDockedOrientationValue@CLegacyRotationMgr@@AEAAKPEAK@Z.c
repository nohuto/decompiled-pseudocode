/*
 * XREFs of ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01C0DE0
 * Callers:
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01C1374 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01C1460 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z @ 0x1C01C10A0 (-QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z.c)
 */

__int64 __fastcall CLegacyRotationMgr::GetDockedOrientationValue(CLegacyRotationMgr *this, unsigned int *a2)
{
  if ( !*((_DWORD *)this + 2) )
  {
    dword_1C0312E70 = 0;
    dword_1C0312E74 = dword_1C0312E58 != 0 ? 3 : 0;
    if ( (int)CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(this, &dword_1C0312E70, &dword_1C0312E74) >= 0 )
    {
      if ( dword_1C0312E74 > 3 )
        dword_1C0312E74 = dword_1C0312E58 != 0 ? 3 : 0;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return dword_1C0312E74;
}
