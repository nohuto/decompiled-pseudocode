/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHolographicViewTransitionNotification@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803FE694
 * Callers:
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FE818 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB284 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopHolographicViewTransitionNotification@@QEAA@XZ @ 0x1803FE734 (--0CVirtualDesktopHolographicViewTransitionNotification@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHolographicViewTransitionNotification,CVirtualDesktopHolographicViewTransitionNotification,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
        CVirtualDesktopHolographicViewTransitionNotification **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // esi
  CVirtualDesktopHolographicViewTransitionNotification *v7; // rax
  CVirtualDesktopHolographicViewTransitionNotification *v8; // rax
  __int64 v9; // rdx
  CVirtualDesktopHolographicViewTransitionNotification *v10; // rdi
  __int64 v11; // rbx
  CVirtualDesktopHolographicViewTransitionNotification *v13; // [rsp+40h] [rbp+8h] BYREF
  CVirtualDesktopHolographicViewTransitionNotification *v14; // [rsp+58h] [rbp+20h]

  v3 = 0;
  *a1 = 0LL;
  v7 = (CVirtualDesktopHolographicViewTransitionNotification *)operator new(
                                                                 0x40uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
  v14 = v7;
  if ( v7 )
  {
    v8 = CVirtualDesktopHolographicViewTransitionNotification::CVirtualDesktopHolographicViewTransitionNotification(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v13 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v8 + 6, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v10 + 7, v11);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)v10 + 11);
    *a1 = v10;
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease((volatile signed __int32 **)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
