/*
 * XREFs of ?CreateOrGetModalLink@Win32BackedViewHostItem@@UEAAJPEAPEAUIModalLink@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BD810
 * Callers:
 *     ?CreateChainLinkTo@Win32BackedViewHostItem@@UEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BD710 (-CreateChainLinkTo@Win32BackedViewHostItem@@UEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VModalLink@@UIModalLink@Holographic@Shell@Internal@Windows@@PEAVWin32BackedViewHostItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIModalLink@Holographic@Shell@Internal@Windows@@$$QEAPEAVWin32BackedViewHostItem@@@Z @ 0x1801BB820 (--$MakeAndInitialize@VModalLink@@UIModalLink@Holographic@Shell@Internal@Windows@@PEAVWin32Backed.c)
 */

__int64 __fastcall Win32BackedViewHostItem::CreateOrGetModalLink(
        Win32BackedViewHostItem *this,
        struct Windows::Internal::Shell::Holographic::IModalLink **a2)
{
  ModalLink **v2; // rbx
  int v4; // eax
  unsigned int v5; // edi
  struct Windows::Internal::Shell::Holographic::IModalLink *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (ModalLink **)((char *)this + 128);
  if ( *((_QWORD *)this + 16)
    || (v9 = this,
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16),
        v4 = Microsoft::WRL::Details::MakeAndInitialize<ModalLink,Windows::Internal::Shell::Holographic::IModalLink,Win32BackedViewHostItem *>(
               v2,
               &v9),
        v5 = v4,
        v4 >= 0) )
  {
    v7 = *v2;
    if ( *v2 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IModalLink *))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = *v2;
    }
    *a2 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
