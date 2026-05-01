/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Z @ 0x1803F1CC8
 * Callers:
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F1F24 (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180378864 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopSwitchAnimator@@QEAA@XZ @ 0x1803F1D58 (--0VirtualDesktopSwitchAnimator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Z @ 0x1803F1E74 (-RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitchAnimator,VirtualDesktopSwitchAnimator,IVirtualDesktopManagerPrivate * &,IVirtualDesktopAnimationSyncNotificationServicePrivate * &>(
        volatile signed __int32 **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate **a3)
{
  VirtualDesktopSwitchAnimator *v6; // rax
  int v7; // edi
  volatile signed __int32 *v8; // rax
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v9; // r8
  struct IVirtualDesktopManagerPrivate *v10; // rdx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v13; // [rsp+40h] [rbp+8h] BYREF
  VirtualDesktopSwitchAnimator *v14; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (VirtualDesktopSwitchAnimator *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v6;
  if ( v6 )
  {
    v8 = (volatile signed __int32 *)VirtualDesktopSwitchAnimator::VirtualDesktopSwitchAnimator(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v13 = v8;
    v7 = VirtualDesktopSwitchAnimator::RuntimeClassInitialize((VirtualDesktopSwitchAnimator *)v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        _InterlockedIncrement(v11 + 3);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
