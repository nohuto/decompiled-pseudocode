/*
 * XREFs of ??_ECAppLayout@@UEAAPEAXI@Z @ 0x1803BA0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180062770 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 */

CAppLayout *__fastcall CAppLayout::`vector deleting destructor'(CAppLayout *this, char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 14) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 13) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 14) );
      v4 = (void *)*((_QWORD *)this + 13);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
