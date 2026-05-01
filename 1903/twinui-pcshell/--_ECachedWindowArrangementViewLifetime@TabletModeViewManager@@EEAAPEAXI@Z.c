/*
 * XREFs of ??_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z @ 0x1803B6820
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180078A58 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

TabletModeViewManager::CachedWindowArrangementViewLifetime *__fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::`vector deleting destructor'(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this,
        char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  void *v6; // rcx

  v2 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &TabletModeViewManager::CachedWindowArrangementViewLifetime::`vftable';
  if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(v2 + 136), *((struct IUnknown **)this + 3)) )
  {
    IUnknown_SetSite(*(IUnknown **)(v2 + 136), 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v2 + 136));
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(v6);
  return this;
}
