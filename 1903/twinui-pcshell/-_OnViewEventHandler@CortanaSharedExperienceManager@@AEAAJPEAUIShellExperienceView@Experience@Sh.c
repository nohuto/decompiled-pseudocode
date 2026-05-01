/*
 * XREFs of ?_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x18003E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003FA20 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::_OnViewEventHandler(
        CortanaSharedExperienceManager *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct Windows::Foundation::Collections::IPropertySet *v9; // rcx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Foundation::Collections::IPropertySet *v13; // [rsp+50h] [rbp+18h] BYREF
  HSTRING string; // [rsp+58h] [rbp+20h] BYREF

  string = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(a3, &string);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      -2);
    goto LABEL_7;
  }
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v13);
  v7 = v8;
  if ( v8 < 0 )
  {
    v11 = 1052LL;
  }
  else
  {
    v8 = CortanaSharedExperienceManager::_OnViewEvent(this, string, v13);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v11 = 1053LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v8,
    -2);
LABEL_5:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_7:
  WindowsDeleteString(string);
  return v7;
}
