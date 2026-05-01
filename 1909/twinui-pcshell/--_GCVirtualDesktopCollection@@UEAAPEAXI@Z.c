/*
 * XREFs of ??_GCVirtualDesktopCollection@@UEAAPEAXI@Z @ 0x1804088C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualDesktopCollection *__fastcall CVirtualDesktopCollection::`scalar deleting destructor'(
        CVirtualDesktopCollection *this,
        char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 7) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 6) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 7) );
      v4 = (void *)*((_QWORD *)this + 6);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
