/*
 * XREFs of ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18019E720
 * Callers:
 *     <none>
 * Callees:
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x180050FE8 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180083360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9d75cb42004a5c80c8af25a46cf0553c___ @ 0x18019B1C0 (Microsoft--WRL--EventSource_Windows--Foundation--IEventHandler_IInspectable____Microsoft--WRL--I.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&_ @ 0x18019B46C (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnFocusNavigate_--_2_--CFoc.c)
 */

char __fastcall CortanaExperienceManagerNotification::OnFocusNavigate(__int64 a1, unsigned int a2)
{
  char result; // al
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  RTL_SRWLOCK *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v10 = a2;
  result = CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)(a1 - 8));
  if ( result )
  {
    v4 = Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection___(
           &v9,
           &v10);
    v5 = *v4;
    *v4 = 0LL;
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v6);
    }
    v7 = *(RTL_SRWLOCK **)(a1 + 48);
    *(_QWORD *)&v8 = &v11;
    v11 = v7;
    *((_QWORD *)&v8 + 1) = &v12;
    v12 = v5;
    result = Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9d75cb42004a5c80c8af25a46cf0553c___(
               v7 + 24,
               &v8);
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
