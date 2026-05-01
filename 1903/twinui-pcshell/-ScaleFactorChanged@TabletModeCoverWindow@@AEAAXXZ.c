/*
 * XREFs of ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1803C9484
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803C98B0 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801092F8 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 */

void __fastcall TabletModeCoverWindow::ScaleFactorChanged(TabletModeCoverWindow *this)
{
  IUnknown **v2; // rax
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v2 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this, &v4);
  LOBYTE(this) = IUnknown_QueryService(
                   *v2,
                   &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                   &GUID_ef2ef97b_ee1b_47a0_ad0c_8478ec6c722f,
                   &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  if ( (_BYTE)this )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 24LL))(ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
}
