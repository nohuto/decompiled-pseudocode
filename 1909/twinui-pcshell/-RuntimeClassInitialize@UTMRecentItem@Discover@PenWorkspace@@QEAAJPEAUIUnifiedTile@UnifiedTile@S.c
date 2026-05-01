/*
 * XREFs of ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1802049A8
 * Callers:
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801FDE8C (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVUTMIconLoader@Discover@PenWorkspace@@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1802043CC (--$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@.c)
 */

__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::RuntimeClassInitialize(
        PenWorkspace::Discover::UTMRecentItem *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 *v5; // rbx
  __int64 *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 7, (__int64)a2);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMIconLoader,PenWorkspace::Discover::UTMIconLoader,WindowsInternal::Shell::UnifiedTile::IUnifiedTile * &>(
           &v10,
           (__int64 *)&v9);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = v10;
      v6 = (__int64 *)*((_QWORD *)this + 6);
      if ( v6 != v10 )
      {
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64 *))(*v10 + 8))(v10);
          v6 = (__int64 *)*((_QWORD *)this + 6);
        }
        *((_QWORD *)this + 6) = v5;
        if ( v6 )
          (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
      }
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
        (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
      (const char *)0x80004003LL);
  }
  return v3;
}
