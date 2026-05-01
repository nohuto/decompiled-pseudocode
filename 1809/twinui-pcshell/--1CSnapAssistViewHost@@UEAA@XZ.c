/*
 * XREFs of ??1CSnapAssistViewHost@@UEAA@XZ @ 0x1802EF2E0
 * Callers:
 *     ??_GCSnapAssistViewHost@@UEAAPEAXI@Z @ 0x1802EF3C0 (--_GCSnapAssistViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x18026B344 (--1VirtualDesktopNotificationListener@@QEAA@XZ.c)
 */

void __fastcall CSnapAssistViewHost::~CSnapAssistViewHost(CSnapAssistViewHost *this)
{
  __int64 v2; // rax

  VirtualDesktopNotificationListener::~VirtualDesktopNotificationListener((CSnapAssistViewHost *)((char *)this + 216));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    *(_QWORD *)(v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
}
