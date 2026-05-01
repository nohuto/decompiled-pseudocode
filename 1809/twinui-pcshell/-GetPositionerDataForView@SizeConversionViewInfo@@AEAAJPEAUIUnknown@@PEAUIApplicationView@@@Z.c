/*
 * XREFs of ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x180332FD8
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1803331DC (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18033328C (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x180331444 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SizeConversionViewInfo::GetPositionerDataForView(
        SizeConversionViewInfo *this,
        struct IUnknown *a2,
        struct IApplicationView *a3)
{
  int v6; // ebx
  SizeConversionViewInfo *v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v8 = this;
  v9[0] = (__int64)a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  v6 = ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___(
         a2,
         (__int64)a3,
         (__int64)&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v6;
}
