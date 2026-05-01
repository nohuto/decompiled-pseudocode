/*
 * XREFs of ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x18006EC10
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18006EC48 (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18006F080 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_2b22f8ed1186cb0c238f8cc81a41386e___ @ 0x18017BFEC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18017BFEC.c)
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
    if ( a2 == *((_DWORD *)this + 112) )
    {
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy(this);
    }
    else if ( a2 == *((_DWORD *)this + 116) )
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
    Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_2b22f8ed1186cb0c238f8cc81a41386e___(
      (char *)this + 312,
      v6);
  }
  return 0LL;
}
