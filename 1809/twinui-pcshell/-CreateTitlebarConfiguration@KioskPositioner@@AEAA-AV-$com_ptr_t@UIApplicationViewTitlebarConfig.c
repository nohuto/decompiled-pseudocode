/*
 * XREFs of ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800978F0
 * Callers:
 *     ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180097DD0 (-GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicati.c)
 *     std::_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil::com_ptr_t_IApplicationViewTitlebarConfiguration_wil::err_exception_policy___::_Do_call @ 0x18009A770 (std--_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil--com_ptr_t_I_ea_18009A770.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x180096030 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18011D554 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180120590 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 */

_QWORD *__fastcall KioskPositioner::CreateTitlebarConfiguration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(&v10);
  *((_WORD *)v10 + 24) = 1;
  v3 = v10;
  *((_DWORD *)v10 + 13) = 1;
  *((_DWORD *)v3 + 14) = 1;
  v4 = ApplicationViewTitlebarConfiguration::SetVisibleButtons(v10, 55LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      995LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v4);
  v5 = v10;
  *((_DWORD *)v10 + 18) = 0;
  *((_DWORD *)v5 + 17) = 255;
  *((_DWORD *)v10 + 19) = 128;
  v6 = v10;
  *((_DWORD *)v10 + 20) = 0;
  *((_BYTE *)v6 + 84) = 1;
  *((_DWORD *)v10 + 22) = 0;
  v7 = v10;
  v10 = 0LL;
  *a2 = v7;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v10);
  return a2;
}
