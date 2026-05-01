/*
 * XREFs of ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802054B0
 * Callers:
 *     ?FrameworkViewTypeChangedForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802000A0 (-FrameworkViewTypeChangedForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_V.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180076924 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C940 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801FB800 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x1801FBA9C (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 *     ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x1801FE44C (--0ViewHostItemPropertyChangedArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180201214 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18020422C (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_RaiseFrameworkViewTypeChanged(__int64 a1)
{
  void *v2; // rax
  int v3; // ebx
  ViewHostItemPropertyChangedArgs *v4; // rdi
  HRESULT v5; // eax
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  void *v17; // [rsp+30h] [rbp-30h] BYREF
  ViewHostItemPropertyChangedArgs *v18; // [rsp+38h] [rbp-28h] BYREF
  const WCHAR *v19; // [rsp+40h] [rbp-20h] BYREF
  ViewHostItemPropertyChangedArgs *v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  ViewHostItemPropertyChangedArgs *v23; // [rsp+98h] [rbp+38h] BYREF

  v21[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(a1, &v15);
  if ( v15 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v23);
    v23 = 0LL;
    v2 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v2;
    if ( !v2 )
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
      v3 = -2147024882;
LABEL_13:
      v8 = (unsigned int)v3;
      v9 = 1574LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)v8);
LABEL_22:
      Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v23);
      goto LABEL_25;
    }
    v4 = ViewHostItemPropertyChangedArgs::ViewHostItemPropertyChangedArgs((ViewHostItemPropertyChangedArgs *)v2);
    v18 = v4;
    v17 = 0LL;
    v19 = L"FrameworkViewType";
    *((_DWORD *)v4 + 12) = 5;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v4 + 7, 0LL);
    v5 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((HSTRING *)v4 + 12, &v19);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v6 = *((_QWORD *)v4 + 11);
      while ( v6 >= 0 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 11, v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_11;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_11:
      v23 = v4;
      Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v18);
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
    }
    if ( v3 < 0 )
      goto LABEL_13;
    v20 = v23;
    v21[0] = (__int64)v15;
    v10 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemPropertyChangedArgs *>(
            (PVOID)(a1 + 304),
            v21,
            (__int64 *)&v20);
    v3 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 1575LL;
      goto LABEL_16;
    }
    v16 = 0LL;
    v11 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
            &v15,
            &v16);
    v3 = v11;
    if ( v11 < 0 )
    {
      v12 = 1579LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      goto LABEL_22;
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 88LL))(v16);
    v3 = v11;
    if ( v11 < 0 )
    {
      v12 = 1580LL;
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v23);
  }
  v3 = 0;
LABEL_25:
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  }
  return (unsigned int)v3;
}
