/*
 * XREFs of ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationFrameWrapper@@PEAUIApplicationFrameTitleBar@@@Z @ 0x1802B454C
 * Callers:
 *     ??$make_shared@UKBViewInfo@@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationFrameWrapper@@PEAUIApplicationFrameTitleBar@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrameTitleBar@@@Z @ 0x1802B40EC (--$make_shared@UKBViewInfo@@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUI.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

KBViewInfo *__fastcall KBViewInfo::KBViewInfo(
        KBViewInfo *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct IApplicationFrameWrapper *a3,
        struct IApplicationFrameTitleBar *a4)
{
  struct IApplicationFrameTitleBar *v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this, (__int64)a2);
  if ( *((struct IApplicationFrameWrapper **)this + 1) != a3 )
  {
    v8 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v8 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  if ( *((struct IApplicationFrameTitleBar **)this + 2) != a4 )
  {
    v8 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v8 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  return this;
}
