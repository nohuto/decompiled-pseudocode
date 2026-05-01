/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800296E0
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B724 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1801959B0 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x180215C3C (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x18032DC24 (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 *     ?IsScreenSketchAppInstalled@ScreenClippingBrokerImpl@@EEAAJPEAE@Z @ 0x18037C2D0 (-IsScreenSketchAppInstalled@ScreenClippingBrokerImpl@@EEAAJPEAE@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1803AADA4 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002C9D0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x18002D120 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

__int64 __fastcall CallerIdentity::GetPackageFullNameFromAppId(
        CallerIdentity *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  signed int v4; // ebx
  LONG PackagesByPackageFamily; // eax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned __int16 **bufferLength; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *buffer; // [rsp+30h] [rbp-D8h]
  unsigned int packageProperties; // [rsp+38h] [rbp-D0h]
  UINT32 count[2]; // [rsp+48h] [rbp-C0h] BYREF
  PWSTR packageFullNames; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR v16[128]; // [rsp+E8h] [rbp-20h] BYREF

  count[1] = 128;
  *(_QWORD *)a2 = 0LL;
  packageFullNames = 0LL;
  count[0] = 1;
  v4 = ParseAppUserModelId((const unsigned __int16 *)this, packageFamilyName, (unsigned __int64)a3, 0LL, 0LL);
  if ( v4 >= 0 )
  {
    PackagesByPackageFamily = FindPackagesByPackageFamily(
                                packageFamilyName,
                                0x10u,
                                count,
                                &packageFullNames,
                                &count[1],
                                v16,
                                0LL);
    v4 = PackagesByPackageFamily;
    if ( PackagesByPackageFamily > 0 )
      v4 = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( v4 >= 0 )
    {
      if ( count[0] != 1 )
        v4 = -2147221165;
      if ( v4 >= 0 )
      {
        v6 = -1LL;
        v7 = -1LL;
        do
          ++v7;
        while ( v16[v7] );
        *(_QWORD *)a2 = 0LL;
        if ( v7 + 1 >= v7 )
          v6 = v7 + 1;
        v4 = v7 + 1 < v7 ? 0x80070216 : 0;
        if ( v7 + 1 >= v7 )
        {
          *(_QWORD *)a2 = 0LL;
          if ( is_mul_ok(v6, 2uLL) )
          {
            v8 = (unsigned __int16 *)CoTaskMemAlloc(2 * v6);
            *(_QWORD *)a2 = v8;
            if ( v8 )
            {
              v4 = 0;
              StringCchCopyNExW(v8, v6, v16, v7, bufferLength, buffer, packageProperties);
            }
            else
            {
              return (unsigned int)-2147024882;
            }
          }
          else
          {
            return (unsigned int)-2147024362;
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
