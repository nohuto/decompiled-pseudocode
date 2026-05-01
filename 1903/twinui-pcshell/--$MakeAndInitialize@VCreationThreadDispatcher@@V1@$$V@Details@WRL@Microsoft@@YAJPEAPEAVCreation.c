/*
 * XREFs of ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801AB7B4
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801B1CDC (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x1801BED94 (-RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ @ 0x1801D7334 (-RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x18020228C (-RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ.c)
 *     _lambda_74683e00bb44ac1c285a2f54870ed16f_::operator() @ 0x18025CCEC (_lambda_74683e00bb44ac1c285a2f54870ed16f_--operator().c)
 *     ??$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA?AV?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@XZ @ 0x1802EB570 (--$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA-AV-$ComPtr@VCreationThreadDis.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1803333C8 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18034C160 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CreationThreadDispatcher@@QEAA@XZ @ 0x1801ABE58 (--0CreationThreadDispatcher@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1801B24DC (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(
        CreationThreadDispatcher **a1)
{
  CreationThreadDispatcher *v2; // rax
  int v3; // edi
  CreationThreadDispatcher *v4; // rbx
  CreationThreadDispatcher *v6; // [rsp+30h] [rbp+8h] BYREF
  CreationThreadDispatcher *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (CreationThreadDispatcher *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v6 = CreationThreadDispatcher::CreationThreadDispatcher(v2);
    v4 = v6;
    v3 = CreationThreadDispatcher::RuntimeClassInitialize(v6);
    if ( v3 >= 0 )
    {
      if ( v4 )
        _InterlockedIncrement((volatile signed __int32 *)v4 + 11);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
