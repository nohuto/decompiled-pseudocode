/*
 * XREFs of ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18042C3D0
 * Callers:
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801DE034 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1801F0478 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 *     ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x18036BA84 (-s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180428FF8 (--0-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ @ 0x1804290E0 (--1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18042D0F8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading@@@wil@@.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x18042D218 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18042D390 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x18042DC3C (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 */

__int64 __fastcall ImmersiveIcons::LoadImmersiveIcon(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned int a5,
        char a6,
        const unsigned __int16 *pszItem,
        struct ImmersiveIcons::LoadIconParams *a8)
{
  HBITMAP *v11; // r9
  int ImmersiveIcon; // eax
  unsigned int v13; // ebx
  struct ImmersiveIcons::IconData2 *v15[3]; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+38h] [rbp-C8h]
  unsigned int v17; // [rsp+3Ch] [rbp-C4h]
  char v18; // [rsp+40h] [rbp-C0h]
  int v19; // [rsp+44h] [rbp-BCh]
  int v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+4Ch] [rbp-B4h]
  double v22; // [rsp+50h] [rbp-B0h]
  _QWORD v23[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))wil::Feature<__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading>::ReportUsageToService)(
    this,
    a2,
    a3,
    a4);
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v23);
  v23[0] = &ImmersiveIconsLoggingTelemetry::LoadIconW::`vftable';
  ImmersiveIconsLoggingTelemetry::LoadIconW::StartActivity((ImmersiveIconsLoggingTelemetry::LoadIconW *)v23, pszItem);
  v22 = DOUBLE_4_5;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16 = 0;
  v17 = a5;
  v18 = a6;
  v15[1] = (struct ImmersiveIcons::IconData2 *)a2;
  v15[2] = (struct ImmersiveIcons::IconData2 *)a3;
  ImmersiveIcon = ImmersiveIcons::_LoadImmersiveIcon(pszItem, (const unsigned __int16 *)v15, a8, v11, this);
  v13 = ImmersiveIcon;
  if ( ImmersiveIcon >= 0 )
  {
    wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
  }
  ImmersiveIconsLoggingTelemetry::LoadIconW::~LoadIconW((ImmersiveIconsLoggingTelemetry::LoadIconW *)v23);
  return v13;
}
