/*
 * XREFs of ?GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAU_FILETIME@@@Z @ 0x1801DC38C
 * Callers:
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1801DBCC0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspaceDiscoverBroker::GetInstallTime(
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a1,
        struct _FILETIME *a2)
{
  __int64 (__fastcall *v4)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  struct _FILETIME v11; // [rsp+60h] [rbp+18h]
  struct _FILETIME v12; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)a1 + 88LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = v4(a1, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct _FILETIME *))(*(_QWORD *)v10 + 64LL))(v10, &v12);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v11 = v12;
      *a2 = v12;
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 132LL;
  }
  else
  {
    v7 = 130LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
