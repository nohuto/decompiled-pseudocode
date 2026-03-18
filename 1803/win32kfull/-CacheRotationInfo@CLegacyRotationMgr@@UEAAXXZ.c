/*
 * XREFs of ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BDCB0
 * Callers:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BDBC0 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A0704 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 * Callees:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00BC8D8 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00BE0DC (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 */

void __fastcall CLegacyRotationMgr::CacheRotationInfo(CLegacyRotationMgr *this)
{
  int CurrentOrientation; // eax
  CLegacyRotationMgr *v2; // rcx
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF

  dword_1C03227BC = 0;
  dword_1C03227C4 = 0;
  dword_1C03227C0 = 0;
  dword_1C03227A4 = 0;
  CurrentOrientation = GetCurrentOrientation(&v3);
  if ( CurrentOrientation < 0 )
  {
    if ( CurrentOrientation == -1073741789 || CurrentOrientation == -2147483643 )
    {
      dword_1C03227C0 = 1;
    }
    else if ( CurrentOrientation == -1071774975 )
    {
      dword_1C03227C4 = 1;
    }
    else
    {
      dword_1C03227BC = 1;
    }
  }
  else
  {
    dword_1C03227A4 = v3;
  }
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v2,
    dword_1C03227A4,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
