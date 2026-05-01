/*
 * XREFs of ??1ViewManagerBridge@@UEAA@XZ @ 0x180269278
 * Callers:
 *     ??_GViewManagerBridge@@UEAAPEAXI@Z @ 0x18026A2D0 (--_GViewManagerBridge@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180100B4C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18026C4DC (-InternalRelease@-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ViewManagerBridge::~ViewManagerBridge(ViewManagerBridge *this, void *a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  wil::details *v6; // rcx
  wil::details *v7; // rcx

  v3 = (void *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 20) )
    {
      v5 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v5 + *((_QWORD *)this + 19)));
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < *((_QWORD *)this + 20) );
      v3 = (void *)*((_QWORD *)this + 19);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v6 = (wil::details *)*((_QWORD *)this + 17);
  if ( v6 )
    wil::details::CloseHandle(v6, a2);
  v7 = (wil::details *)*((_QWORD *)this + 16);
  if ( v7 )
    wil::details::CloseHandle(v7, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease((char *)this + 80);
  *((_DWORD *)this + 19) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
}
