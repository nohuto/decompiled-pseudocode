/*
 * XREFs of Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&___ptr64_ @ 0x18000D6DC
 * Callers:
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18000D7C0 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     _CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::CCortanaShownEventArgs @ 0x18000D748 (_CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShownEventArgs--CCortanaShownEvent.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007DCC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_____ptr64_(
        __int64 *a1,
        __int128 *a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v7 = *a2;
    v5 = CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::CCortanaShownEventArgs(v4, &v7);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release();
    *a1 = v5;
  }
  return a1;
}
