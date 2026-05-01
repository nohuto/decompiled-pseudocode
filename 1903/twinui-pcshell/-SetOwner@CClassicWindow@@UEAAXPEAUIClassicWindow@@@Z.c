/*
 * XREFs of ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x18012A500
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180073680 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800737C0 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180129F4C (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 */

void __fastcall CClassicWindow::SetOwner(CClassicWindow *this, struct IClassicWindow *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  v6 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  if ( a2 )
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v2, (__int64)a2);
  if ( v4 != *v2 && CClassicWindow::s_ShouldShowInSwitchers(*((_DWORD *)this + 18)) )
    RaiseApplicationViewChangeNotification((__int64)this, 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
