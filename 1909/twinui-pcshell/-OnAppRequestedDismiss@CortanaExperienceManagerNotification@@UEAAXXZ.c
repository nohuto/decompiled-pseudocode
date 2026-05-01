/*
 * XREFs of ?OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18019E630
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x180050210 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x180050FE8 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnAppRequestedDismiss(CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
      *(_QWORD *)(v1 + 48) + 240LL,
      *(_QWORD *)(v1 + 48));
}
