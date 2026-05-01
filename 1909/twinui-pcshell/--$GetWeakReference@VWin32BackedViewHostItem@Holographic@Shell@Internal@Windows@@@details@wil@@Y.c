/*
 * XREFs of ??$GetWeakReference@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@details@wil@@YAJPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAPEAUIWeakReference@@@Z @ 0x180229360
 * Callers:
 *     ??$com_weak_copy_failfast@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x18022A608 (--$com_weak_copy_failfast@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@.c)
 *     ??$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x18022A6A4 (--$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@w.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180228310 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Ho.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::GetWeakReference<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>>(
         a1,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 24LL))(v5, a2);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v5);
  return (unsigned int)v3;
}
