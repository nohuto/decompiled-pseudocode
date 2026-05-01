/*
 * XREFs of ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18033328C
 * Callers:
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Z @ 0x180331280 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUI.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x18033266C (-GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x180332FD8 (-GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall SizeConversionViewInfo::RuntimeClassInitialize(
        SizeConversionViewInfo *this,
        struct IUnknown *a2,
        struct IApplicationView *a3,
        struct IImmersiveMonitor *a4)
{
  int AppDataForView; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a4);
  AppDataForView = SizeConversionViewInfo::GetAppDataForView(this, a3);
  if ( AppDataForView < 0 )
  {
    v8 = 30LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)AppDataForView);
    return (unsigned int)AppDataForView;
  }
  AppDataForView = SizeConversionViewInfo::GetPositionerDataForView(this, a2, a3);
  if ( AppDataForView < 0 )
  {
    v8 = 31LL;
    goto LABEL_3;
  }
  return 0LL;
}
