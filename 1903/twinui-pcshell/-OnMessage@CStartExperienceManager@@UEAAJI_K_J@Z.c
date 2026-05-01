/*
 * XREFs of ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x1801989E0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_c34e1150c827eefe393f0941e07fc445___ @ 0x180195BAC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_180195BAC.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x1801991CC (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnMessage(
        CStartExperienceManager *this,
        int a2,
        CStartExperienceManager *a3,
        const WCHAR *a4)
{
  CStartExperienceManager *v5; // rcx
  unsigned int v6; // r8d
  char *v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 == 26 )
  {
    if ( !a4 || CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 0) != 2 )
      return 0LL;
    v5 = (CStartExperienceManager *)((char *)this - 48);
    v6 = 0;
LABEL_10:
    CStartExperienceManager::ReactivateHelper(v5, L"OnStartThemeChanged", v6);
    return 0LL;
  }
  if ( a2 == 798 )
  {
    v5 = (CStartExperienceManager *)((char *)this - 48);
    v6 = 1;
    goto LABEL_10;
  }
  if ( a2 == 1025 && a3 == (CStartExperienceManager *)((char *)this - 48) )
  {
    v8 = (char *)this - 48;
    v10 = (int)a4;
    *(_QWORD *)&v9 = &v8;
    *((_QWORD *)&v9 + 1) = &v10;
    Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_c34e1150c827eefe393f0941e07fc445___(
      (__int64)this + 216,
      &v9);
  }
  return 0LL;
}
