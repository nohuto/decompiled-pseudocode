/*
 * XREFs of ?UnsubscribeFromServices@SurfaceHubPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180399780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180109598 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall SurfaceHubPositioner::UnsubscribeFromServices(
        SurfaceHubPositioner *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 152));
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 280));
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 408));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  return 0LL;
}
