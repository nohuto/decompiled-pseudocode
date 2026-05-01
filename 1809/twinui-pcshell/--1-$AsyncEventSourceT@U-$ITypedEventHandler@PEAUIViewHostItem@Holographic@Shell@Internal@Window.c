/*
 * XREFs of ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B11B8
 * Callers:
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801B15E4 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??1Win32BackedViewHostItem@@UEAA@XZ @ 0x1801BCE4C (--1Win32BackedViewHostItem@@UEAA@XZ.c)
 *     ??1ApplicationViewBackedViewHostItem@@UEAA@XZ @ 0x1801C21B8 (--1ApplicationViewBackedViewHostItem@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
        _QWORD *a1)
{
  int *i; // rdi
  __int64 result; // rax
  volatile int *v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r10
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  for ( i = (int *)(a1 + 7); ; WaitOnAddress(i, &CompareAddress, 4uLL, 0xFFFFFFFF) )
  {
    CompareAddress = *i;
    if ( !CompareAddress )
      break;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 6);
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 5);
  v5 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    result = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v5 + 12), v4);
    if ( !(_DWORD)result )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
