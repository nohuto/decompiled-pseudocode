/*
 * XREFs of ?RuntimeClassInitialize@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1800A0668
 * Callers:
 *     ??$MakeAndInitialize@VShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x180091D00 (--$MakeAndInitialize@VShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UIShellExperienceView@Exp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18042FF64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180430EE8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::RuntimeClassInitialize(
        _DWORD *a1,
        struct IServiceProvider *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        int a6)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CSingleViewShellExperience *)(a1 + 12),
         (struct IWeakReferenceSource *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)),
         a2,
         a3,
         a5);
  if ( v8 < 0 )
  {
    v9 = 26LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)(a1 + 12), a4);
  if ( v8 < 0 )
  {
    v9 = 27LL;
    goto LABEL_3;
  }
  a1[27] = a6;
  a1[72] = SHTaskPoolGetUniqueContext(v11);
  return 0LL;
}
