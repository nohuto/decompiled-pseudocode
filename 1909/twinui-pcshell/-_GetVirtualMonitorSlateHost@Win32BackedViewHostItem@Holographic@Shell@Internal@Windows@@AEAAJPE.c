/*
 * XREFs of ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x180234C5C
 * Callers:
 *     ?ChangeBounds@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUViewBounds@ViewManagerInterop@345@@Z @ 0x18022DC10 (-ChangeBounds@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUViewBounds@ViewM.c)
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180234DBC (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E800 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A481C (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180236750 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetVirtualMonitorSlateHost(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost **a2)
{
  unsigned int v4; // esi
  const char *v5; // r9
  char v6; // al
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *, struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost **); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rdx
  __int64 *v12; // rcx
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  int v16; // [rsp+80h] [rbp+50h] BYREF
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v17; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v16 = 0;
  if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(this, &v16) < 0
    || (v6 = 1, !v16) )
  {
    v6 = 0;
  }
  if ( v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1064LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      v5);
    __debugbreak();
  }
  v17 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)this + 26);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)&v17, (__int64 *)this + 59);
  if ( this != (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)-208LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 26);
  if ( v17 )
    goto LABEL_17;
  v7 = *((_QWORD *)this + 58);
  v8 = *(__int64 (__fastcall **)(__int64, Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *, struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost **))(*(_QWORD *)v7 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v9 = v8(v7, this, &v17);
  v10 = v9;
  if ( v9 >= 0 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 26);
    if ( *((_QWORD *)this + 59) )
    {
      v11 = (__int64 *)((char *)this + 472);
      v12 = (__int64 *)&v17;
    }
    else
    {
      v11 = (__int64 *)&v17;
      v12 = (__int64 *)((char *)this + 472);
    }
    Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(v12, v11);
    if ( this != (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)-208LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 26);
LABEL_17:
    v13 = v17;
    v17 = 0LL;
    *a2 = v13;
    goto LABEL_18;
  }
  v4 = -2147023496;
  if ( v9 != -2147023496 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x432,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v9);
    v4 = v10;
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v4;
}
