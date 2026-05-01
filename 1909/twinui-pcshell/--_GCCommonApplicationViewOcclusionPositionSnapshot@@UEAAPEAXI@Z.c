/*
 * XREFs of ??_GCCommonApplicationViewOcclusionPositionSnapshot@@UEAAPEAXI@Z @ 0x18007BD40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCommonApplicationViewOcclusionPositionSnapshot *__fastcall CCommonApplicationViewOcclusionPositionSnapshot::`scalar deleting destructor'(
        CCommonApplicationViewOcclusionPositionSnapshot *this,
        char a2)
{
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
