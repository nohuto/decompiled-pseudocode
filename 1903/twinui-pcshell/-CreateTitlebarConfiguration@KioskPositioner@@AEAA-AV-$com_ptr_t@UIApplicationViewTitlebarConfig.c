/*
 * XREFs of ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18039C370
 * Callers:
 *     ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18039C8C0 (-GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicati.c)
 *     std::_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil::com_ptr_t_IApplicationViewTitlebarConfiguration_wil::err_exception_policy___::_Do_call @ 0x18039EE00 (std--_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil--com_ptr_t_I_ea_18039EE00.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D6A8 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x18008D88C (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180149BE0 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 */

volatile signed __int32 *__fastcall KioskPositioner::CreateTitlebarConfiguration(
        __int64 a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v3; // rax
  int v4; // eax
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(&v10);
  *((_WORD *)v10 + 24) = 1;
  v3 = v10;
  *((_DWORD *)v10 + 13) = 1;
  *((_DWORD *)v3 + 14) = 1;
  v4 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v10, 55, 0);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3CE,
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
  *(_QWORD *)a2 = v7;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v10);
  return a2;
}
