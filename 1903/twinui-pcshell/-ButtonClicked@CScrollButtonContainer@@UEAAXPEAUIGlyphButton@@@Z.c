/*
 * XREFs of ?ButtonClicked@CScrollButtonContainer@@UEAAXPEAUIGlyphButton@@@Z @ 0x18037BD10
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollButtonContainer::ButtonClicked(CScrollButtonContainer *this, struct IUnknown *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 27);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_f85ba9ec_771f_4806_ba39_f860056371e5,
         &v6) >= 0 )
  {
    if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 25)) )
    {
      v5 = 2 * (*((_DWORD *)this + 6) & 1u) + 1;
LABEL_6:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, v5);
      goto LABEL_7;
    }
    if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 26)) )
    {
      v5 = 2 * (*((_DWORD *)this + 6) & 1u) + 2;
      goto LABEL_6;
    }
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
