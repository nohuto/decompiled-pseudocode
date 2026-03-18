/*
 * XREFs of ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0131880
 * Callers:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00B6F90 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01D5944 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C0131B8C (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C0131CA8 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

void __fastcall CLegacyRotationMgr::CacheRotationInfo(CLegacyRotationMgr *this)
{
  int CurrentOrientation; // eax
  CLegacyRotationMgr *v2; // rcx
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF

  dword_1C0327D8C = 0;
  dword_1C0327D94 = 0;
  dword_1C0327D90 = 0;
  dword_1C0327D74 = 0;
  CurrentOrientation = GetCurrentOrientation(&v3);
  if ( CurrentOrientation < 0 )
  {
    if ( CurrentOrientation == -1073741789 || CurrentOrientation == -2147483643 )
    {
      dword_1C0327D90 = 1;
    }
    else if ( CurrentOrientation == -1071774975 )
    {
      dword_1C0327D94 = 1;
    }
    else
    {
      dword_1C0327D8C = 1;
    }
  }
  else
  {
    dword_1C0327D74 = v3;
  }
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v2,
    dword_1C0327D74,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
