/*
 * XREFs of ?CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1802714F0
 * Callers:
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802719E8 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 *     ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x18027313C (-UpdateImageCache@DefaultIconManager@@AEAAJXZ.c)
 *     ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18027348C (-UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18026D620 (--$ActivateInstance@UITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Foundation@Wi.c)
 */

__int64 __fastcall DefaultIconManager::CreateTileLoadOptions(
        unsigned int a1,
        struct WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __m128 v7; // xmm6
  unsigned __int64 v8; // xmm6_8
  struct WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions *v9; // rax
  __int64 v11[2]; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v11[1] = -2LL;
  *a2 = 0LL;
  v11[0] = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsInternal.Shell.UnifiedTile.TileImageResourceOptions",
    0x3Bu,
    0x3Au);
  v4 = Windows::Foundation::ActivateInstance<WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions>(v13, v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11[0] + 56LL))(v11[0], 0LL);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11[0] + 88LL))(v11[0], 100LL);
      v5 = v4;
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11[0] + 120LL))(v11[0], 1LL);
        v5 = v4;
        if ( v4 >= 0 )
        {
          v7 = (__m128)COERCE_UNSIGNED_INT((float)(int)GetSystemMetricsForDpi(49LL, a1));
          v8 = _mm_unpacklo_ps(v7, (__m128)COERCE_UNSIGNED_INT((float)(int)GetSystemMetricsForDpi(50LL, a1))).m128_u64[0];
          v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v11[0] + 104LL))(v11[0], v8);
          v5 = v4;
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v11[0] + 136LL))(v11[0], v8);
            v5 = v4;
            if ( v4 >= 0 )
            {
              v9 = (struct WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions *)v11[0];
              v11[0] = 0LL;
              *a2 = v9;
              v5 = 0;
              goto LABEL_15;
            }
            v6 = 643LL;
          }
          else
          {
            v6 = 642LL;
          }
        }
        else
        {
          v6 = 634LL;
        }
      }
      else
      {
        v6 = 632LL;
      }
    }
    else
    {
      v6 = 631LL;
    }
  }
  else
  {
    v6 = 629LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_15:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v11);
  return v5;
}
