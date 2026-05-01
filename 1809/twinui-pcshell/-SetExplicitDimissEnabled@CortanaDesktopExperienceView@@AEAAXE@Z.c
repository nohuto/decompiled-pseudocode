/*
 * XREFs of ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18018A758
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800259FC (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18018891C (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800783D0 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x180188780 (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 */

void __fastcall CortanaDesktopExperienceView::SetExplicitDimissEnabled(CortanaDesktopExperienceView *this, char a2)
{
  HWND *v2; // rbx

  *((_BYTE *)this + 137) = a2;
  v2 = (HWND *)((char *)this + 256);
  if ( a2 )
  {
    if ( !*v2 )
    {
      CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow((HWND *)this);
      if ( *v2 )
        ShowWindow(*v2, 4);
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,0,std::nullptr_t>>::reset(
      (HWND *)this + 32,
      0LL);
  }
}
