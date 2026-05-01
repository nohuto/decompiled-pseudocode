/*
 * XREFs of ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x180123984
 * Callers:
 *     ??_ECFallbackWindow@@WBI@EAAPEAXI@Z @ 0x1800B1C70 (--_ECFallbackWindow@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x18012388C (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 */

CFallbackWindow *__fastcall CFallbackWindow::`scalar deleting destructor'(CFallbackWindow *this, char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 27) = -1073741823;
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase((CFallbackWindow *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
