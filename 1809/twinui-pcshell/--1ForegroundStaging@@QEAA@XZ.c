/*
 * XREFs of ??1ForegroundStaging@@QEAA@XZ @ 0x1802DE990
 * Callers:
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x1802DE844 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x1802E8874 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ForegroundStaging::~ForegroundStaging(ForegroundStaging *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
