/*
 * XREFs of ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180339158
 * Callers:
 *     ?GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180338AB0 (-GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180339BD8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x180118C34 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18011D554 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180120590 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 */

__int64 __fastcall SurfaceHubPositioner::_CreateTitlebarConfiguration(
        SurfaceHubPositioner *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  volatile int *v3; // rbx
  int CanCastTo; // edi
  __int64 v5; // rdx
  int v6; // eax
  unsigned __int64 v7; // r9
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  const struct _GUID *v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = (volatile int *)this;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v13);
  v3 = v13;
  if ( !v13 )
  {
    CanCastTo = -2147024882;
    v5 = 622LL;
LABEL_15:
    v7 = (unsigned int)CanCastTo;
    goto LABEL_16;
  }
  *((_WORD *)v13 + 24) = 257;
  v6 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v3, 55, 0);
  CanCastTo = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)v3 + 18) = 0;
    *((_DWORD *)v3 + 17) = 255;
    *((_DWORD *)v3 + 14) = 0;
    *((_DWORD *)v3 + 13) = 1;
    *((_DWORD *)v3 + 19) = 1;
    *((_DWORD *)v3 + 20) = 0;
    *((_BYTE *)v3 + 84) = 1;
    *((_DWORD *)v3 + 22) = 0;
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = (struct IApplicationViewTitlebarConfiguration *)v3;
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      if ( InlineIsEqualGUID(v8, v9) )
      {
        *a2 = (struct IApplicationViewTitlebarConfiguration *)v3;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 2), v10, (void **)a2);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
        {
          v5 = 632LL;
          goto LABEL_15;
        }
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    }
    CanCastTo = 0;
    goto LABEL_18;
  }
  v7 = (unsigned int)v6;
  v5 = 626LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)v7);
LABEL_18:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v13);
  return (unsigned int)CanCastTo;
}
