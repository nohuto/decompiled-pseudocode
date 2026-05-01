/*
 * XREFs of ??_GCCommonApplicationViewArrangePosition@@UEAAPEAXI@Z @ 0x180084310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCommonApplicationViewArrangePosition *__fastcall CCommonApplicationViewArrangePosition::`scalar deleting destructor'(
        CCommonApplicationViewArrangePosition *this,
        char a2)
{
  *((_DWORD *)this + 21) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
