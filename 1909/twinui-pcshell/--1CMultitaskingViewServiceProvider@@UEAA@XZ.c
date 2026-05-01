/*
 * XREFs of ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x18035F11C
 * Callers:
 *     ??_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z @ 0x18035F468 (--_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800548AC (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1critical_section@wil@@QEAA@XZ @ 0x18011F294 (--1critical_section@wil@@QEAA@XZ.c)
 *     ??1ForegroundStaging@@QEAA@XZ @ 0x18035F1CC (--1ForegroundStaging@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewServiceProvider::~CMultitaskingViewServiceProvider(
        CMultitaskingViewServiceProvider *this)
{
  ForegroundStaging::~ForegroundStaging((CMultitaskingViewServiceProvider *)((char *)this + 240));
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
