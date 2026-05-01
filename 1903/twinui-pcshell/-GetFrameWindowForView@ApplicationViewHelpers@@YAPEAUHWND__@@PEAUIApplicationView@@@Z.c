/*
 * XREFs of ?GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18040F0FC
 * Callers:
 *     ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18022EC20 (-EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x180240524 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180039338 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetFrameWindowForView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  struct IImmersiveApplication **v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v7; // [rsp+48h] [rbp+18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (int)ApplicationViewHelpers::GetApplicationFromView(this, (struct IApplicationView *)&v8, v3) >= 0 )
  {
    v7 = 0LL;
    v4 = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           5LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v7) >= 0 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, &v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  v5 = v9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v5;
}
