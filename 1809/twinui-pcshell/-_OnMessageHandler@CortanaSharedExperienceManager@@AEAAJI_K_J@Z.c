/*
 * XREFs of ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x180068EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180068ED8 (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180069414 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_ed38e478ba6514e17d464777dcb7a489___ @ 0x18014FF70 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18014FF70.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnMessageHandler(
        CortanaSharedExperienceManager *this,
        int a2,
        CortanaSharedExperienceManager *a3,
        int a4)
{
  CortanaSharedExperienceManager *v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a2 == *((_DWORD *)this + 106) )
    {
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy(this);
    }
    else if ( a2 == *((_DWORD *)this + 110) )
    {
      CortanaSharedExperienceManager::_OnDeferredSuspensionTimer(this);
    }
  }
  else if ( a3 == this )
  {
    v5 = this;
    v6[0] = &v5;
    v7 = a4;
    v6[1] = &v7;
    Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_ed38e478ba6514e17d464777dcb7a489___(
      (char *)this + 312,
      v6);
  }
  return 0LL;
}
