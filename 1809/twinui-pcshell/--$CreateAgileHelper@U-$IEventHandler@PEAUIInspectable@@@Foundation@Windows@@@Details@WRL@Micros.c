/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802055E8
 * Callers:
 *     ??0ViewGroup@@QEAA@PEAUIWindowGroupManager@@PEAUITitleBarController@@PEAUITabViewManager@@PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@6@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180205B10 (--0ViewGroup@@QEAA@PEAUIWindowGroupManager@@PEAUITitleBarController@@PEAUITabViewManager@@PEAU-$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180063BE4 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??$AsAgile@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAVAgileRef@01@@Z @ 0x180080B48 (--$AsAgile@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@YAJPEAU-$IEve.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabsChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E3D30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1801E3D30.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_02a86428158461f4dc557e8a6d2b58da___1_IInspectable_____ptr64_IInspectable_____ptr64___lambda_02a86428158461f4dc557e8a6d2b58da___ @ 0x1802056A0 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802056A0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 *v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v14 = &v13;
  v4 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v14);
  v5 = Microsoft::WRL::AsAgile<Windows::Foundation::IEventHandler<IInspectable *>>(a1, v4);
  if ( v5 >= 0 )
  {
    v6 = v13;
    v13 = 0LL;
    v15 = v6;
    v7 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::___IInspectable_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_02a86428158461f4dc557e8a6d2b58da___1_IInspectable_____ptr64_IInspectable_____ptr64___lambda_02a86428158461f4dc557e8a6d2b58da___(
                      &v14,
                      &v15);
    v9 = *v7;
    *v7 = 0LL;
    v10 = (__int64)v14;
    v12 = v9;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(
        v10,
        v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    if ( v9 )
    {
      v12 = 0LL;
      *a2 = v9;
      v5 = 0;
    }
    else
    {
      v5 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)v5;
}
