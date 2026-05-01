/*
 * XREFs of ?ChangeBounds@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUViewBounds@ViewManagerInterop@345@@Z @ 0x18022DC10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180053BE0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x180234C5C (-_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPE.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180236750 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::ChangeBounds(__int64 a1, int *a2)
{
  int VirtualMonitorSlateHost; // eax
  unsigned int v5; // ebx
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v6; // rbx
  __int64 (__fastcall *v7)(struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *, _QWORD, _QWORD, __int64 *); // rdi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  if ( IsHolographicWin32SlatesFeatureEnabled() )
  {
    LODWORD(v11) = 6;
    if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(
                (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)a1,
                (int *)&v11) >= 0
      && !(_DWORD)v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      VirtualMonitorSlateHost = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetVirtualMonitorSlateHost(
                                  (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)a1,
                                  &v11);
      v5 = VirtualMonitorSlateHost;
      if ( VirtualMonitorSlateHost < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x177,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)VirtualMonitorSlateHost);
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        return v5;
      }
      v12 = 0LL;
      v6 = v11;
      v7 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      v8 = v7(v6, (unsigned int)*a2, (unsigned int)a2[1], &v12);
      v5 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17A,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        goto LABEL_8;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 208));
      *(float *)(a1 + 392) = (float)*a2;
      *(float *)(a1 + 396) = (float)a2[1];
      if ( a1 != -208 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 208));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    }
  }
  return 0LL;
}
