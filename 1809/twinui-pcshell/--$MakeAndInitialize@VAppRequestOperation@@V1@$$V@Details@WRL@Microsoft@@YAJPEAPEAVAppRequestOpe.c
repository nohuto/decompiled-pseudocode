/*
 * XREFs of ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x18023ED24
 * Callers:
 *     ?RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180243430 (-RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@View.c)
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180250870 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0AppRequestOperation@@QEAA@XZ @ 0x18023FE80 (--0AppRequestOperation@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(
        AppRequestOperation **a1)
{
  unsigned int v2; // edi
  AppRequestOperation *v3; // rax
  AppRequestOperation *v4; // rbx
  AppRequestOperation *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (AppRequestOperation *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = AppRequestOperation::AppRequestOperation(v3);
    v6 = v4;
    v7 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v4 + 2) + 104LL))((__int64)v4 + 16, *((_QWORD *)v4 + 2));
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
