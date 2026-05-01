/*
 * XREFs of ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180015940
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18001526C (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIAppli.c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x1800159E8 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::ConvertForMonitorAndChromeConfiguration(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct IImmersiveMonitor *a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagSIZE *a7)
{
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-28h]
  struct SizeConversionViewInfo *v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v16; // [rsp+60h] [rbp+18h] BYREF
  int v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v14[1] = (struct SizeConversionViewInfo *)-2LL;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
         v14,
         &v16,
         &v17,
         &a5,
         &a6);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 315LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9,
      v13);
    goto LABEL_4;
  }
  v9 = WindowSizeConverter::ConvertWithViewInfo((WindowSizeConverter *)((char *)this - 88), a2, v14[0], a7);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 316LL;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  return v10;
}
