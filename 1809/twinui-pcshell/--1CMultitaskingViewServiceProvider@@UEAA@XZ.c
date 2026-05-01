/*
 * XREFs of ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x1802DE844
 * Callers:
 *     ??_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z @ 0x1802DEC28 (--_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18004DD7C (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1critical_section@wil@@QEAA@XZ @ 0x1800DE490 (--1critical_section@wil@@QEAA@XZ.c)
 *     ??1ForegroundStaging@@QEAA@XZ @ 0x1802DE990 (--1ForegroundStaging@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewServiceProvider::~CMultitaskingViewServiceProvider(
        CMultitaskingViewServiceProvider *this)
{
  _QWORD **v2; // rdi

  ForegroundStaging::~ForegroundStaging((CMultitaskingViewServiceProvider *)((char *)this + 248));
  v2 = (_QWORD **)*((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v2[2] + 16LL))(v2[2]);
    operator delete(v2);
  }
  CAutoHandle<void *>::~CAutoHandle<void *>((void **)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)((char *)this + 112));
  *((_DWORD *)this + 27) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(this);
}
