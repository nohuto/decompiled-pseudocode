/*
 * XREFs of ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0058480
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0058454 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01D4D80 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D4DE8 (-RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D515C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D5250 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C010C380 (-CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ.c)
 */

int __fastcall CLegacyRotationMgr::QueryAutoRotationState(CLegacyRotationMgr *a1)
{
  int result; // eax

  if ( dword_1C0325D8C )
    CLegacyRotationMgr::CacheRotationInfo(a1);
  result = gProtocolType != 0 ? 4 : 0;
  if ( !dword_1C0325D78 )
    result |= 1u;
  if ( dword_1C0325D94 || dword_1C0325D90 )
    result |= 8u;
  if ( !dword_1C0325D7C )
    result |= 0x10u;
  if ( dword_1C0325D80 )
    result |= 0x40u;
  if ( dword_1C0325D84 )
    result |= 0x80u;
  if ( dword_1C0325D8C )
    return result | 0x20;
  return result;
}
