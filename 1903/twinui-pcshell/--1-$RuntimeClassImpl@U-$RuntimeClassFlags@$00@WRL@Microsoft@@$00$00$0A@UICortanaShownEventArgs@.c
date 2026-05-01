/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18008235C
 * Callers:
 *     _CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::_scalar_deleting_destructor_ @ 0x180082320 (_CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShownEventArgs--_scalar_deleting_d.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18017D710 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@Sh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::Release((volatile signed __int32 *)(2 * v1));
  return result;
}
