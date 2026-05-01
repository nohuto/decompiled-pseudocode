/*
 * XREFs of ?SetFocused@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x180310020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1803050F0 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 */

void __fastcall CVirtualDesktopContainerElement::SetFocused(CVirtualDesktopContainerElement *this, char a2)
{
  _QWORD *v3; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) )
  {
    if ( !*((_QWORD *)this + 21) )
    {
      v3 = (_QWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, __int64 *, _QWORD, __int64, _DWORD))(*(_QWORD *)this + 272LL))(
                       this,
                       &v4,
                       0LL,
                       7LL,
                       0);
      (*(void (__fastcall **)(CVirtualDesktopContainerElement *, _QWORD))(*(_QWORD *)this + 288LL))(this, *v3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
    }
  }
}
