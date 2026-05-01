/*
 * XREFs of ?IsScreenSketchAppInstalled@ScreenClippingBrokerImpl@@EEAAJPEAE@Z @ 0x1803E2130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180018350 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenClippingBrokerImpl::IsScreenSketchAppInstalled(
        ScreenClippingBrokerImpl *this,
        unsigned __int8 *a2)
{
  unsigned __int16 **v3; // r8
  int PackageFullNameFromAppId; // eax
  unsigned int v5; // ebx
  unsigned __int8 v6; // al
  unsigned __int16 v8[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  v9 = -1LL;
  v10 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(
                               (CallerIdentity *)L"Microsoft.ScreenSketch_8wekyb3d8bbwe!App",
                               v8,
                               v3);
  v5 = PackageFullNameFromAppId;
  if ( PackageFullNameFromAppId >= 0 )
  {
    if ( !*(_QWORD *)v8 || (v6 = 1, !**(_WORD **)v8) )
      v6 = 0;
    *a2 = v6;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
      (const char *)(unsigned int)PackageFullNameFromAppId);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  return v5;
}
