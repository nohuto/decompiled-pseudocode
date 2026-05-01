/*
 * XREFs of ??$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewDismissalAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Z @ 0x18035F494
 * Callers:
 *     ?SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@AEBU_GUID@@PEAPEAX@Z @ 0x18035F814 (-SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0SnapAssistViewDismissalAnimationCoordinator@@QEAA@XZ @ 0x18035F53C (--0SnapAssistViewDismissalAnimationCoordinator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x180373E84 (-RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SnapAssistViewDismissalAnimationCoordinator,SnapAssistViewDismissalAnimationCoordinator,WeakReference::IWeakReference * &,IMultitaskingViewAnimation * &>(
        MultitaskingViewDismissalAnimationCoordinator **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewAnimation **a3)
{
  SnapAssistViewDismissalAnimationCoordinator *v6; // rax
  int v7; // edi
  MultitaskingViewDismissalAnimationCoordinator *v8; // rax
  struct IMultitaskingViewAnimation *v9; // r8
  struct IWeakReference *v10; // rdx
  MultitaskingViewDismissalAnimationCoordinator *v11; // rbx
  MultitaskingViewDismissalAnimationCoordinator *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (SnapAssistViewDismissalAnimationCoordinator *)operator new(
                                                        0xF0uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SnapAssistViewDismissalAnimationCoordinator::SnapAssistViewDismissalAnimationCoordinator(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v13 = v8;
    v7 = MultitaskingViewDismissalAnimationCoordinator::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(MultitaskingViewDismissalAnimationCoordinator *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
