/*
 * XREFs of ?AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B8AB8
 * Callers:
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1803AFE70 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 * Callees:
 *     ??0srwlock@wil@@QEAA@XZ @ 0x180047F1C (--0srwlock@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1803B89B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_1803B89B0.c)
 */

__int64 __fastcall AppLayoutCache_CreateInstance(const struct _GUID *a1, void **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 (__fastcall **v5)(_QWORD, _QWORD, _QWORD); // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v12 = 0LL;
  v3 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( !v3 )
  {
    v7 = -2147024882;
    v9 = 67LL;
    v8 = 2147942414LL;
    goto LABEL_5;
  }
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>((__int64)v3);
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>>'};
  v4[5] = &AppLayoutCache::`vftable'{for `IImmersiveShellComponent'};
  v4[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  v4[13] = &AppLayoutCache::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>>'};
  v4[14] = &AppLayoutCache::`vftable'{for `IAppLayoutCache'};
  v4[15] = &AppLayoutCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::srwlock::srwlock((wil::srwlock *)(v4 + 20));
  v4[21] = 0LL;
  v5 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v4;
  v13 = v4;
  ((void (__fastcall *)(_QWORD *))v5[1])(v4);
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, void **))v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = (**v12)(v12, &GUID_35f2929a_cf19_47c0_9235_6ba0c9a32e25, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 68LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\applayoutcache.cpp",
      (const char *)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v7;
}
