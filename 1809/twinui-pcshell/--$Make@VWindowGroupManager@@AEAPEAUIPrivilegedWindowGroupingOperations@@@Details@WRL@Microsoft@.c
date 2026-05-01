/*
 * XREFs of ??$Make@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowGroupManager@@@12@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x1802039E0
 * Callers:
 *     ??$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA?AV?$ComPtr@VWindowGroupManager@@@WRL@Microsoft@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x180203AC8 (--$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA-AV-$Com.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x1802042B0 (--0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<WindowGroupManager,IPrivilegedWindowGroupingOperations * &>(
        __int64 *a1,
        struct IPrivilegedWindowGroupingOperations **a2)
{
  WindowGroupManager *v4; // rax
  WindowGroupManager *v5; // rdi

  *a1 = 0LL;
  v4 = (WindowGroupManager *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = WindowGroupManager::WindowGroupManager(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(*a1);
    *a1 = (__int64)v5;
  }
  return a1;
}
