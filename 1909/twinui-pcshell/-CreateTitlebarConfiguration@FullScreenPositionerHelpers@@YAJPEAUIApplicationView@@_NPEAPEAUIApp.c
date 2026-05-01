/*
 * XREFs of ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18018E6B4
 * Callers:
 *     ?GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18018C280 (-GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x18018CE00 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180023840 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE60 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18008FEC4 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18015FCBC (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x180168E50 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositionerHelpers::CreateTitlebarConfiguration(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2,
        void **a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  unsigned __int8 v5; // bp
  volatile int *v7; // rbx
  int CanCastTo; // edi
  __int64 v9; // rdx
  int v10; // esi
  int v11; // r15d
  int v12; // eax
  struct IApplicationView *v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // eax
  char IsFullScreenCompatQuirkedApp; // al
  BOOL v17; // ecx
  int v18; // eax
  _DWORD *v19; // rcx
  _DWORD *v20; // r9
  const struct _GUID *v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile int *v24; // [rsp+70h] [rbp+18h] BYREF

  v5 = (unsigned __int8)a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v24);
  v7 = v24;
  if ( !v24 )
  {
    CanCastTo = -2147024882;
    v9 = 68LL;
LABEL_30:
    v14 = (unsigned int)CanCastTo;
    goto LABEL_31;
  }
  v10 = 1;
  *((_WORD *)v24 + 24) = 1;
  *((_DWORD *)v7 + 13) = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_DWORD *)v7 + 22) = 0;
  *((_DWORD *)v7 + 17) = 255;
  *((_DWORD *)v7 + 18) = 0;
  if ( IsPPIEdition() )
  {
    v15 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v7, 55, 32);
    CanCastTo = v15;
    if ( v15 < 0 )
    {
      v14 = (unsigned int)v15;
      v9 = 88LL;
      goto LABEL_31;
    }
    *((_DWORD *)v7 + 19) = 0;
  }
  else
  {
    v11 = v5 ^ 1;
    v12 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v7, 55, v11 + 36);
    CanCastTo = v12;
    if ( v12 < 0 )
    {
      v14 = (unsigned int)v12;
      v9 = 81LL;
      goto LABEL_31;
    }
    *((_DWORD *)v7 + 19) = 32 * (v11 + 2);
  }
  IsFullScreenCompatQuirkedApp = FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(this, v13);
  v17 = v5 && !IsFullScreenCompatQuirkedApp;
  *((_DWORD *)v7 + 20) = v17;
  *((_BYTE *)v7 + 84) = 1;
  if ( !IsFullScreenCompatQuirkedApp )
    goto LABEL_20;
  if ( v5 || IsPPIEdition() )
    v10 = 0;
  v18 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v7, 51, v10);
  CanCastTo = v18;
  if ( v18 >= 0 )
  {
LABEL_20:
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a3 = (void *)v7;
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      if ( InlineIsEqualGUID(v19, v20) )
      {
        *a3 = (void *)v7;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v7 + 2), v21, a3);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
        {
          v9 = 109LL;
          goto LABEL_30;
        }
      }
      (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
    CanCastTo = 0;
    goto LABEL_33;
  }
  v14 = (unsigned int)v18;
  v9 = 106LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositionerhelpers.cpp",
    (const char *)v14);
LABEL_33:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v24);
  return (unsigned int)CanCastTo;
}
