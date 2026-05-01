/*
 * XREFs of ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x180103F4C
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___ @ 0x18008A4EC (CClassicWindowManager--ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClassicWindowManager::IsWindowOwnedBy(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow *v5; // rbx
  char v6; // di
  __int64 *v7; // rax
  CClassicWindowManager *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v5 = *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v9 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v6 = 0;
  while ( v5 && a2 != v5 )
  {
    if ( v5 == a3 )
    {
      v6 = 1;
      break;
    }
    v7 = (__int64 *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v5 + 96LL))(v5);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v9, v7);
    v5 = v9;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return v6;
}
