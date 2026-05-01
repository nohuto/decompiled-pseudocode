/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180409694
 * Callers:
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18040973C (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180082C7C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopDefaultForegroundHandler,CVirtualDesktopDefaultForegroundHandler,>(
        volatile int **a1)
{
  unsigned int v1; // edi
  volatile int *v3; // rax
  volatile int *v4; // rdx
  volatile int *v5; // rbx
  volatile int *v7; // [rsp+30h] [rbp+8h] BYREF
  volatile int *v8; // [rsp+38h] [rbp+10h]

  v1 = 0;
  *a1 = 0LL;
  v3 = (volatile int *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 3) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopDefaultForegroundHandler>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7 = v5;
    *(_QWORD *)v5 = &CVirtualDesktopDefaultForegroundHandler::`vftable';
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
        (__int64)v5,
        v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
