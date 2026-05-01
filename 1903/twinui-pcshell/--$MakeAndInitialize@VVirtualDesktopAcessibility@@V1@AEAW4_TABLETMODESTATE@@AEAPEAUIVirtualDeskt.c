/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803F2760
 * Callers:
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F2F38 (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopAcessibility@@QEAA@XZ @ 0x1803F2908 (--0VirtualDesktopAcessibility@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F2BFC (-InternalRelease@-$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1803F2E00 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAcessibility,VirtualDesktopAcessibility,enum _TABLETMODESTATE &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
        VirtualDesktopAcessibility **a1,
        unsigned int *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  VirtualDesktopAcessibility *v10; // rax
  int v11; // edi
  VirtualDesktopAcessibility *v12; // rbx
  VirtualDesktopAcessibility *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualDesktopAcessibility *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = VirtualDesktopAcessibility::VirtualDesktopAcessibility(v10);
    v14 = v12;
    v11 = VirtualDesktopAcessibility::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6, -2LL, 0LL);
    if ( v11 >= 0 )
    {
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)v12 + 15);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
