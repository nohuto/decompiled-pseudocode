/*
 * XREFs of ??1ViewPresentationMediator@@UEAA@XZ @ 0x1802A9AAC
 * Callers:
 *     ??_EViewPresentationMediator@@UEAAPEAXI@Z @ 0x1802A9C78 (--_EViewPresentationMediator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180107B88 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall ViewPresentationMediator::~ViewPresentationMediator(ViewPresentationMediator *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx

  v2 = (void *)*((_QWORD *)this + 34);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 35) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 34) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 35) );
      v2 = (void *)*((_QWORD *)this + 34);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 34) = 0LL;
  }
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  v4 = *((_QWORD *)this + 32);
  if ( v4 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_QWORD *)this + 29) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 28) + 8 * v6++));
      while ( v6 < *((_QWORD *)this + 29) );
      v5 = (void *)*((_QWORD *)this + 28);
    }
    CoTaskMemFree(v5);
    *((_QWORD *)this + 28) = 0LL;
  }
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  v7 = *((_QWORD *)this + 26);
  if ( v7 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  *((_DWORD *)this + 45) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  CImmersiveShellComponent::~CImmersiveShellComponent((ViewPresentationMediator *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
