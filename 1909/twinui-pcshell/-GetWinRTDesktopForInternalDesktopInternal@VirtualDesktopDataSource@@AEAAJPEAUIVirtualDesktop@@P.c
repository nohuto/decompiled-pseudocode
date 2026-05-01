/*
 * XREFs of ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180356F3C
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803567B0 (-CurrentVirtualDesktopChanged@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?GetWinRTDesktopForInternalDesktop@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180356E90 (-GetWinRTDesktopForInternalDesktop@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2M.c)
 *     ?VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180357AF0 (-VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?get_CurrentVirtualDesktop@VirtualDesktopDataSource@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803582C0 (-get_CurrentVirtualDesktop@VirtualDesktopDataSource@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@Co.c)
 *     ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180358380 (-get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Mul.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@_N@1@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@45@@Z @ 0x180355D5C (--$emplace@AEAV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV-$ComPtr@UIVirtualDesktop@Multitas.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x180358670 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVir.c)
 *     ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18035ADC0 (-VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
        struct IThumbnailDeviceSource **this,
        struct IVirtualDesktop *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a3)
{
  _QWORD *v6; // rsi
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **v7; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  const struct _GUID *v12; // [rsp+20h] [rbp-58h]
  _BYTE v13[64]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  void *v15; // [rsp+80h] [rbp+8h] BYREF
  struct IVirtualDesktop *v16; // [rsp+88h] [rbp+10h] BYREF
  struct IVirtualDesktop *v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v16 = a2;
  *a3 = 0LL;
  v17 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  v6 = this + 33;
  std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::lower_bound(
    this + 33,
    &v18,
    &v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  if ( (struct IThumbnailDeviceSource *)v18 == this[34] )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v9 = VirtualDesktop_CreateInstance(a2, this[32], this[14], this[15], v12, &v15);
    v10 = v9;
    if ( v9 >= 0 )
    {
      try
      {
        std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::emplace<Microsoft::WRL::ComPtr<IVirtualDesktop> &,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop> &>(
          v6,
          (__int64)v13,
          &v16,
          &v15);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
        *a3 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)v15;
        v10 = 0;
      }
      catch ( ... )
      {
        LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0xFD,
                         (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                         v11);
        v10 = (unsigned int)v16;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF8,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    return v10;
  }
  else
  {
    v7 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **)(v18 + 24);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v18 + 24));
    *a3 = *v7;
    return 0LL;
  }
}
