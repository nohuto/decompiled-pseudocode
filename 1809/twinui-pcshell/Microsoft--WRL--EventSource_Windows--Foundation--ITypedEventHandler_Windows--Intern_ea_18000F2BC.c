/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1d7340c50eb508edab0f09c7fc2baef2___ @ 0x18000F2BC
 * Callers:
 *     ?_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000F228 (-_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collect.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_4706476cbedaf9c1964d78715bee6ea7__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64___ @ 0x18000F358 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_4706476cbedaf9c1964d78715bee6ea7__Windo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800E6520 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1d7340c50eb508edab0f09c7fc2baef2___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rsi
  unsigned int v4; // edi
  PVOID Ptr; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  v4 = 0;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Ptr = a1->Ptr;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a1->Ptr);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( Ptr )
  {
    v8 = *a2;
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_4706476cbedaf9c1964d78715bee6ea7__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64___(
           &v8,
           Ptr,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(Ptr);
  }
  return v4;
}
