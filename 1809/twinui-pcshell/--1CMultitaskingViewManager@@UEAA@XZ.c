/*
 * XREFs of ??1CMultitaskingViewManager@@UEAA@XZ @ 0x1802E8874
 * Callers:
 *     ??_GCMultitaskingViewManager@@UEAAPEAXI@Z @ 0x1802E8A90 (--_GCMultitaskingViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1critical_section@wil@@QEAA@XZ @ 0x1800DE490 (--1critical_section@wil@@QEAA@XZ.c)
 *     ??1ForegroundStaging@@QEAA@XZ @ 0x1802DE990 (--1ForegroundStaging@@QEAA@XZ.c)
 *     ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x1802E8AC8 (--_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z.c)
 */

void __fastcall CMultitaskingViewManager::~CMultitaskingViewManager(CMultitaskingViewManager *this)
{
  unsigned int v2; // edx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  ForegroundStaging::~ForegroundStaging((CMultitaskingViewManager *)((char *)this + 304));
  v3 = (void *)*((_QWORD *)this + 34);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 35) )
    {
      v5 = 0LL;
      do
      {
        CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'(
          (CMultitaskingViewManager::MULTITASKING_HOST_DATA *)(v5 + *((_QWORD *)this + 34)),
          v2);
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < *((_QWORD *)this + 35) );
      v3 = (void *)*((_QWORD *)this + 34);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 34) = 0LL;
  }
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)this + 1);
  *((_DWORD *)this + 9) = -1073741823;
}
