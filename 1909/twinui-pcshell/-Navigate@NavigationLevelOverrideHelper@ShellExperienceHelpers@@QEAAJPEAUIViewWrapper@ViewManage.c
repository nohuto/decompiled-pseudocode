/*
 * XREFs of ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x18001395C
 * Callers:
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180013848 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180013A18 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800149C0 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18007EBF0 (-RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180083820 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804302A8 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800364A8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1804302F4 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 */

__int64 __fastcall ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(
        unsigned int *a1,
        ExperienceManagerUtils *a2,
        unsigned int a3)
{
  int v6; // eax
  int v7; // esi
  int v8; // eax
  HWND v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a1 )
  {
    if ( a3 )
    {
      *a1 = a3;
    }
    else
    {
      v11 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(a1, a2, 0LL);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x85,
          (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v11,
          v13);
        return v12;
      }
      *a1 = 0;
    }
    return 0LL;
  }
  if ( !a3 )
  {
    v10 = ExperienceManagerUtils::WindowFromViewWrapper(a2, a2);
    PostMessageW(v10, 0x10u, 0LL, 0LL);
  }
  v6 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, _QWORD))(*(_QWORD *)a2 + 392LL))(a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v6,
      v13);
  }
  else
  {
    v8 = 4;
    if ( a3 != 5 )
      v8 = a3;
    v7 = 0;
    a1[1] = v8;
  }
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v7,
    v13);
  return (unsigned int)v7;
}
