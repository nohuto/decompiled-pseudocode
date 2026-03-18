/*
 * XREFs of ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0126710
 * Callers:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00DACA0 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01C19C4 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C01269FC (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C0126AF8 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

void __fastcall CLegacyRotationMgr::CacheRotationInfo(CLegacyRotationMgr *this)
{
  int CurrentOrientation; // eax
  CLegacyRotationMgr *v2; // rcx
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF

  dword_1C0312E5C = 0;
  dword_1C0312E64 = 0;
  dword_1C0312E60 = 0;
  dword_1C0312E44 = 0;
  CurrentOrientation = GetCurrentOrientation(&v3);
  if ( CurrentOrientation < 0 )
  {
    if ( CurrentOrientation == -1073741789 || CurrentOrientation == -2147483643 )
    {
      dword_1C0312E60 = 1;
    }
    else if ( CurrentOrientation == -1071774975 )
    {
      dword_1C0312E64 = 1;
    }
    else
    {
      dword_1C0312E5C = 1;
    }
  }
  else
  {
    dword_1C0312E44 = v3;
  }
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v2,
    dword_1C0312E44,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
