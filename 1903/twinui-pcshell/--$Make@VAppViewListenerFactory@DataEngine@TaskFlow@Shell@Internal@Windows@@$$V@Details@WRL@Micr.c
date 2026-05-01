/*
 * XREFs of ??$Make@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x1801EE068
 * Callers:
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801F5F28 (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??0AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1801EF9A4 (--0AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1801F0DC4 (-Attach@-$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory,>(
        _QWORD *a1)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *v2; // rax
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *v3; // rbx
  __int64 v4; // rax

  *a1 = 0LL;
  v2 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *)operator new(
                                                                                   0x60uLL,
                                                                                   (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x60uLL);
    v4 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::AppViewListenerFactory(v3);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory>::Attach(
      a1,
      v4);
  }
  return a1;
}
