/*
 * XREFs of ??$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRecentAppsCache@Discover@PenWorkspace@@@Z @ 0x1801DA864
 * Callers:
 *     ?RuntimeClassInitialize@PenWorkspaceDiscoverBroker@@QEAAJXZ @ 0x1801DCB88 (-RuntimeClassInitialize@PenWorkspaceDiscoverBroker@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ @ 0x1801DB014 (--0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x1801E26D4 (-RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::RecentAppsCache,PenWorkspace::Discover::RecentAppsCache,>(
        PenWorkspace::Discover::RecentAppsCache **a1)
{
  PenWorkspace::Discover::RecentAppsCache *v2; // rax
  int v3; // ebx
  PenWorkspace::Discover::RecentAppsCache *v4; // rdi
  PenWorkspace::Discover::RecentAppsCache *v6; // [rsp+50h] [rbp+8h] BYREF
  PenWorkspace::Discover::RecentAppsCache *v7; // [rsp+58h] [rbp+10h]
  PenWorkspace::Discover::RecentAppsCache *v8; // [rsp+60h] [rbp+18h]

  *a1 = 0LL;
  v2 = (PenWorkspace::Discover::RecentAppsCache *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = v2;
  if ( v2 )
  {
    v8 = v2;
    v4 = (PenWorkspace::Discover::RecentAppsCache *)PenWorkspace::Discover::RecentAppsCache::RecentAppsCache(v2);
    v6 = v4;
    v3 = PenWorkspace::Discover::RecentAppsCache::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
