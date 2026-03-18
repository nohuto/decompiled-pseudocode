/*
 * XREFs of ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BDBC0
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BDB94 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C019FF00 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C019FF68 (-RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A00DC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A01D0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BDCB0 (-CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ.c)
 */

int __fastcall CLegacyRotationMgr::QueryAutoRotationState(CLegacyRotationMgr *a1)
{
  int result; // eax

  if ( dword_1C03227BC )
    CLegacyRotationMgr::CacheRotationInfo(a1);
  result = gProtocolType != 0 ? 4 : 0;
  if ( !dword_1C03227A8 )
    result |= 1u;
  if ( dword_1C03227C4 || dword_1C03227C0 )
    result |= 8u;
  if ( !dword_1C03227AC )
    result |= 0x10u;
  if ( dword_1C03227B0 )
    result |= 0x40u;
  if ( dword_1C03227B4 )
    result |= 0x80u;
  if ( dword_1C03227BC )
    return result | 0x20;
  return result;
}
