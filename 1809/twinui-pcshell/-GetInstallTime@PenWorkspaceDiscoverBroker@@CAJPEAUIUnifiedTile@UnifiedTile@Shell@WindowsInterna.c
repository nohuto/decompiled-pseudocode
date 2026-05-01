/*
 * XREFs of ?GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAU_FILETIME@@@Z @ 0x1801958E8
 * Callers:
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x180195230 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspaceDiscoverBroker::GetInstallTime(
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a1,
        struct _FILETIME *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME v10; // [rsp+50h] [rbp+18h]
  struct _FILETIME v11; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v4 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)a1 + 88LL))(
         a1,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct _FILETIME *))(*(_QWORD *)v9 + 64LL))(v9, &v11);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v10 = v11;
      *a2 = v11;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 132LL;
  }
  else
  {
    v6 = 130LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v5;
}
