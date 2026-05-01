/*
 * XREFs of ??$Make@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowGroupManager@@@12@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x18025C290
 * Callers:
 *     ??$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA?AV?$ComPtr@VWindowGroupManager@@@WRL@Microsoft@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x18025C378 (--$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA-AV-$Com.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180096AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ??0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x18025CA00 (--0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make<WindowGroupManager,IPrivilegedWindowGroupingOperations * &>(
        volatile signed __int64 **a1,
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
    *a1 = (volatile signed __int64 *)v5;
  }
  return a1;
}
