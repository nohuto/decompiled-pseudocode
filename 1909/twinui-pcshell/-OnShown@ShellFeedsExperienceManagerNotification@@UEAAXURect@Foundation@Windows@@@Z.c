/*
 * XREFs of ?OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180094180
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180083360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     Microsoft::WRL::Details::Make__ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x18009190C (Microsoft--WRL--Details--Make__ShellFeedsExperienceManagerNotification--OnShown_--_2_--CCortanaS.c)
 *     ?_OnShown@ShellFeedsExperienceManagerImpl@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180095600 (-_OnShown@ShellFeedsExperienceManagerImpl@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Inte.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellFeedsExperienceManagerNotification::OnShown(__int64 a1, const __m128i *a2)
{
  __int64 *v3; // rax
  struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  if ( *(_QWORD *)(a1 + 40) )
  {
    v3 = Microsoft::WRL::Details::Make__ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect___(
           &v7,
           a2);
    v5 = *v3;
    v8 = *v3;
    *v3 = 0LL;
    v6 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v6);
    }
    ShellFeedsExperienceManagerImpl::_OnShown(*(ShellFeedsExperienceManagerImpl **)(a1 + 40), v4);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
