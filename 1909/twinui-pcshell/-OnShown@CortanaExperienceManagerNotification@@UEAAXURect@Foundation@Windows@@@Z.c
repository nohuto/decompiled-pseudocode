/*
 * XREFs of ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18004EF70
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaShownEventArgs____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9c8d9b8069f993990b80997feb9680e3___ @ 0x18004F120 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Ex.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x180050FE8 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x180051000 (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShow.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180083360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@wil@@SA_NXZ @ 0x180090E4C (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CortanaExperienceManagerNotification::OnShown(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  char result; // al
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  if ( !(unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation>::__private_IsEnabled() )
  {
    v4 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v4 + 538) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 496) + 104LL))(*(_QWORD *)(v4 + 496), 3LL);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x637,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v5,
          v10[0]);
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 538LL) = 1;
    }
  }
  result = CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)(a1 - 8));
  if ( result )
  {
    v7 = (__int64 *)Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect___(
                      &v12,
                      a2);
    v8 = *v7;
    *v7 = 0LL;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release();
    }
    v9 = *(_QWORD *)(a1 + 48);
    v10[0] = &v13;
    v13 = v9;
    v10[1] = &v14;
    v14 = v8;
    result = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaShownEventArgs____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9c8d9b8069f993990b80997feb9680e3___(
               v9 + 48,
               v10);
    if ( v8 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return result;
}
