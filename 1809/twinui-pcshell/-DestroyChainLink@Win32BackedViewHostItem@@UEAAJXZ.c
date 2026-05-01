/*
 * XREFs of ?DestroyChainLink@Win32BackedViewHostItem@@UEAAJXZ @ 0x1801BDB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32BackedViewHostItem::DestroyChainLink(Win32BackedViewHostItem *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 128);
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x129,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  }
  return 0LL;
}
