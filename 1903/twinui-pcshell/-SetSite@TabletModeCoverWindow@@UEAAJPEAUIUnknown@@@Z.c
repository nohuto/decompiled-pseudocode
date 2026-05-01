/*
 * XREFs of ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1803C9510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801092F8 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 */

__int64 __fastcall TabletModeCoverWindow::SetSite(TabletModeCoverWindow *this, struct IUnknown *a2)
{
  char v2; // al
  bool v5; // zf
  bool v6; // di
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  LODWORD(v8) = 0;
  v6 = 0;
  if ( !a2 )
  {
    v5 = *CWRLObjectWithGITSite::SiteUnk((__int64)this, &v8) == 0LL;
    v2 = 1;
    if ( !v5 )
      v6 = 1;
  }
  if ( (v2 & 1) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
      *((_QWORD *)this + 24),
      *((_QWORD *)this + 13),
      0LL);
    DestroyWindow(*((HWND *)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  return CWRLObjectWithGITSite::SetSite((RTL_SRWLOCK *)this, a2);
}
