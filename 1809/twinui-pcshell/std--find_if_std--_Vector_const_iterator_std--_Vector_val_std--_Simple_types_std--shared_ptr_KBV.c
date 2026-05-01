/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_42a747e7d0186b6968b291f71e865691___ @ 0x1802B4028
 * Callers:
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802B5E50 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@She.c)
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042738 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_42a747e7d0186b6968b291f71e865691___(
        _QWORD *a1,
        _QWORD **a2,
        _QWORD **a3,
        __int64 a4)
{
  _QWORD **i; // rsi
  bool v8; // bp
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  for ( i = a2; i != a3; i += 2 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
      *i,
      &v12);
    v11 = 0;
    v10 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 48LL))(v12, &v11);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 48LL))(a4, &v10);
    v8 = !*((_BYTE *)*i + 32) && v11 == v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( v8 )
      break;
  }
  *a1 = i;
  return a1;
}
