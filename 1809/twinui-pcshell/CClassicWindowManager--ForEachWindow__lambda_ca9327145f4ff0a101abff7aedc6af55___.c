/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___ @ 0x18008A4EC
 * Callers:
 *     CClassicWindowManager::ForEachOwnee__lambda_3cbe691161412d501545c550b7d7f71d___ @ 0x18008A468 (CClassicWindowManager--ForEachOwnee__lambda_3cbe691161412d501545c550b7d7f71d___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_3cbe691161412d501545c550b7d7f71d_::operator() @ 0x18008A5A0 (_lambda_3cbe691161412d501545c550b7d7f71d_--operator().c)
 *     ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x180103F4C (-IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___(
        __int64 a1,
        __int64 a2)
{
  char v4; // bl
  unsigned __int64 v5; // rsi
  unsigned __int64 i; // rdi
  struct IClassicWindow *v7; // rbx
  CClassicWindowManager *v8; // rcx
  struct IClassicWindow *v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v10 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * i);
    v7 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v4 = CClassicWindowManager::IsWindowOwnedBy(v8, v7, **(struct IClassicWindow ***)(a2 + 8))
       ? lambda_3cbe691161412d501545c550b7d7f71d_::operator()(*(_QWORD *)(a2 + 16), &v10)
       : 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  return v4;
}
