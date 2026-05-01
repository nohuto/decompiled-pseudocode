/*
 * XREFs of ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180234DBC
 * Callers:
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x180230AE0 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x180230CA0 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180053BE0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x180234C5C (-_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPE.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180236750 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_HandleHolographicPortingAsync(
        RTL_SRWLOCK *this,
        unsigned __int8 a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  unsigned int v6; // ebx
  HWND Ptr; // rbp
  int VirtualMonitorSlateHost; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v14; // [rsp+68h] [rbp+20h] BYREF

  if ( IsHolographicWin32SlatesFeatureEnabled() )
  {
    LODWORD(v14) = 0;
    if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(
                (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this,
                (int *)&v14) >= 0
      && (_DWORD)v14 )
    {
      return 0LL;
    }
    AcquireSRWLockShared(this + 26);
    Ptr = (HWND)this[48].Ptr;
    if ( this != (RTL_SRWLOCK *)-208LL )
      ReleaseSRWLockShared(this + 26);
    v14 = 0LL;
    VirtualMonitorSlateHost = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetVirtualMonitorSlateHost(
                                (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this,
                                &v14);
    v10 = VirtualMonitorSlateHost;
    if ( VirtualMonitorSlateHost < 0 )
    {
      v6 = -2147023496;
      if ( VirtualMonitorSlateHost != -2147023496 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35F,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)VirtualMonitorSlateHost);
        v6 = v10;
      }
      goto LABEL_18;
    }
    if ( a2 )
    {
      SetPropW(Ptr, L"Windows.Internal.Shell.Holographic.Win32PortedView", (HANDLE)a2);
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *, struct Windows::Foundation::IAsyncAction **))(*(_QWORD *)v14 + 48LL))(
              v14,
              a3);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 870LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v11);
LABEL_18:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
        return v6;
      }
    }
    else
    {
      RemovePropW(Ptr, L"Windows.Internal.Shell.Holographic.Win32PortedView");
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *, struct Windows::Foundation::IAsyncAction **))(*(_QWORD *)v14 + 56LL))(
              v14,
              a3);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 877LL;
        goto LABEL_16;
      }
    }
    v6 = 0;
    goto LABEL_18;
  }
  v6 = -2147483634;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34F,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)0x8000000ELL);
  return v6;
}
