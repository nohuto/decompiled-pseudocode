/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModePolicy@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803F0364
 * Callers:
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F0DE8 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803B9EAC (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopTabletModePolicy@@QEAA@XZ @ 0x1803F044C (--0VirtualDesktopTabletModePolicy@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopTabletModePolicy,VirtualDesktopTabletModePolicy,enum _TABLETMODESTATE &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        VirtualDesktopTabletModePolicy **a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v6; // r14d
  VirtualDesktopTabletModePolicy *v11; // rax
  VirtualDesktopTabletModePolicy *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  VirtualDesktopTabletModePolicy *v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v11 = (VirtualDesktopTabletModePolicy *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = VirtualDesktopTabletModePolicy::VirtualDesktopTabletModePolicy(v11);
    v13 = *a4;
    v14 = *a3;
    v18 = v12;
    v15 = *a6;
    v16 = *a5;
    *((_DWORD *)v12 + 24) = *a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v12 + 6, v14);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v12 + 7, v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v12 + 8, v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v12 + 9, v15);
    _InterlockedIncrement((volatile signed __int32 *)v12 + 11);
    *a1 = v12;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
