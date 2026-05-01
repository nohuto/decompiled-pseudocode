/*
 * XREFs of ??_ECAltTabViewHost@@UEAAPEAXI@Z @ 0x18036D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x1802E3414 (--1-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ.c)
 */

CAltTabViewHost *__fastcall CAltTabViewHost::`vector deleting destructor'(CAltTabViewHost *this, char a2)
{
  __int64 *v4; // rcx

  v4 = (__int64 *)((char *)this + 184);
  if ( *v4 )
    *(_QWORD *)(*v4 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  *((_DWORD *)this + 33) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
